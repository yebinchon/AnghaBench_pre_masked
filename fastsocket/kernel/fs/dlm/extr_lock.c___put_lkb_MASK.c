
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct dlm_ls {TYPE_1__* ls_lkbtbl; } ;
struct dlm_lkb {int lkb_id; scalar_t__ lkb_lvbptr; int lkb_idtbl_list; int lkb_ref; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct dlm_lkb*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dlm_ls *VAR_1, struct dlm_lkb *VAR_2)
{
 uint16_t VAR_3 = (VAR_2->lkb_id >> 16);

 FUNC_6(&VAR_1->ls_lkbtbl[VAR_3].lock);
 if (FUNC_4(&VAR_2->lkb_ref, VAR_0)) {
  FUNC_5(&VAR_2->lkb_idtbl_list);
  FUNC_7(&VAR_1->ls_lkbtbl[VAR_3].lock);

  FUNC_0(VAR_2);


  if (VAR_2->lkb_lvbptr && FUNC_3(VAR_2))
   FUNC_2(VAR_2->lkb_lvbptr);
  FUNC_1(VAR_2);
  return 1;
 } else {
  FUNC_7(&VAR_1->ls_lkbtbl[VAR_3].lock);
  return 0;
 }
}
