
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_notifier_block {size_t plane_idx; int nb; } ;


 int FUNC_0 (int *,int *) ;
 int * VAR_0 ;

int FUNC_1(struct omapfb_notifier_block *VAR_1)
{
 return FUNC_0(
  &VAR_0[VAR_1->plane_idx], &VAR_1->nb);
}
