
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8254 {unsigned int* clock_src; int has_clk_gat_sce; } ;


 unsigned int* VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct dio200_subdev_8254 *VAR_1,
       unsigned int VAR_2, unsigned int *VAR_3)
{
 unsigned VAR_4;

 if (!VAR_1->has_clk_gat_sce)
  return -1;
 if (VAR_2 > 2)
  return -1;

 VAR_4 = VAR_1->clock_src[VAR_2];
 *VAR_3 = VAR_0[VAR_4];
 return VAR_4;
}
