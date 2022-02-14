
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8254 {int* gate_src; int has_clk_gat_sce; } ;



__attribute__((used)) static int
FUNC_0(struct dio200_subdev_8254 *VAR_0,
      unsigned int VAR_1)
{
 if (!VAR_0->has_clk_gat_sce)
  return -1;
 if (VAR_1 > 2)
  return -1;

 return VAR_0->gate_src[VAR_1];
}
