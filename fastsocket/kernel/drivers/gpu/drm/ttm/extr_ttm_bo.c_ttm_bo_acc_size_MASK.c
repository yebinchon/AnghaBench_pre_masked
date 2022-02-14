
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct ttm_bo_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

size_t FUNC_2(struct ttm_bo_device *VAR_1,
         unsigned long VAR_2,
         unsigned VAR_3)
{
 unsigned VAR_4 = (FUNC_0(VAR_2)) >> VAR_0;
 size_t VAR_5 = 0;

 VAR_5 += FUNC_1(VAR_3);
 VAR_5 += FUNC_0(VAR_4 * sizeof(void *));
 VAR_5 += FUNC_1(sizeof(struct ttm_tt));
 return VAR_5;
}
