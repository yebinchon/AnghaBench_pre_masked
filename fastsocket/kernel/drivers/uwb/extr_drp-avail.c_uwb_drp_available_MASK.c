
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int local; int global; } ;
struct uwb_rc {TYPE_1__ drp_avail; } ;
struct uwb_mas_bm {int bm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct uwb_rc *VAR_1, struct uwb_mas_bm *VAR_2)
{
 FUNC_0(VAR_2->bm, VAR_1->drp_avail.global, VAR_1->drp_avail.local, VAR_0);
 FUNC_0(VAR_2->bm, VAR_2->bm, VAR_1->drp_avail.pending, VAR_0);
}
