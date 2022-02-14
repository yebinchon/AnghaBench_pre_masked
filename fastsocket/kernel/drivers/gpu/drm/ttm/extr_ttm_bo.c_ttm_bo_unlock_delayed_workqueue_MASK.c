
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_device {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(struct ttm_bo_device *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_0(&VAR_1->wq,
          ((VAR_0 / 100) < 1) ? 1 : VAR_0 / 100);
}
