
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ie_valid; int local; int pending; } ;
struct uwb_rc {TYPE_1__ drp_avail; } ;
struct uwb_mas_bm {int bm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(struct uwb_rc *VAR_1, struct uwb_mas_bm *VAR_2)
{
 FUNC_1(VAR_1->drp_avail.pending, VAR_1->drp_avail.pending, VAR_2->bm, VAR_0);
 FUNC_0(VAR_1->drp_avail.local, VAR_1->drp_avail.local, VAR_2->bm, VAR_0);
 VAR_1->drp_avail.ie_valid = 0;
}
