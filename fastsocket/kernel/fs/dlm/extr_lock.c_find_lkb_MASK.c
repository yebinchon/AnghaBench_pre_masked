
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct dlm_ls {size_t ls_lkbtbl_size; TYPE_1__* ls_lkbtbl; } ;
struct dlm_lkb {int lkb_ref; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dlm_lkb* FUNC_0 (struct dlm_ls*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dlm_ls *VAR_2, uint32_t VAR_3, struct dlm_lkb **VAR_4)
{
 struct dlm_lkb *VAR_5;
 uint16_t VAR_6 = (VAR_3 >> 16);

 if (VAR_6 >= VAR_2->ls_lkbtbl_size)
  return -VAR_0;

 FUNC_2(&VAR_2->ls_lkbtbl[VAR_6].lock);
 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5)
  FUNC_1(&VAR_5->lkb_ref);
 FUNC_3(&VAR_2->ls_lkbtbl[VAR_6].lock);

 *VAR_4 = VAR_5;
 return VAR_5 ? 0 : -VAR_1;
}
