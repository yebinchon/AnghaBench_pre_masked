
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; } ;
struct uwb_rc {TYPE_1__ drp_avail; } ;
struct uwb_mas_bm {int bm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_mas_bm*) ;

int FUNC_3(struct uwb_rc *VAR_2, struct uwb_mas_bm *VAR_3)
{
 struct uwb_mas_bm VAR_4;

 FUNC_2(VAR_2, &VAR_4);
 if (!FUNC_1(VAR_3->bm, VAR_4.bm, VAR_1))
  return -VAR_0;

 FUNC_0(VAR_2->drp_avail.pending, VAR_2->drp_avail.pending, VAR_3->bm, VAR_1);
 return 0;
}
