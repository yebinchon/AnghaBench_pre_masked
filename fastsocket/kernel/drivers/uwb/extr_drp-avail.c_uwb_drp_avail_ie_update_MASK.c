
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int element_id; } ;
struct TYPE_5__ {int bmp; TYPE_1__ hdr; } ;
struct TYPE_6__ {int ie_valid; TYPE_2__ ie; int local; int global; } ;
struct uwb_rc {TYPE_3__ drp_avail; } ;
struct uwb_mas_bm {int bm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,struct uwb_mas_bm*) ;

void FUNC_2(struct uwb_rc *VAR_2)
{
 struct uwb_mas_bm VAR_3;

 FUNC_0(VAR_3.bm, VAR_2->drp_avail.global, VAR_2->drp_avail.local, VAR_1);

 VAR_2->drp_avail.ie.hdr.element_id = VAR_0;
 VAR_2->drp_avail.ie.hdr.length = VAR_1 / 8;
 FUNC_1(VAR_2->drp_avail.ie.bmp, &VAR_3);
 VAR_2->drp_avail.ie_valid = 1;
}
