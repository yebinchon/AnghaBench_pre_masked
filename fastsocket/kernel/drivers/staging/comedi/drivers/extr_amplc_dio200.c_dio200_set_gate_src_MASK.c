
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8254 {unsigned int* gate_src; int gat_sce_iobase; int which; int has_clk_gat_sce; } ;


 unsigned char FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned char,int ) ;

__attribute__((used)) static int
FUNC_2(struct dio200_subdev_8254 *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned char VAR_3;

 if (!VAR_0->has_clk_gat_sce)
  return -1;
 if (VAR_1 > 2)
  return -1;
 if (VAR_2 > 7)
  return -1;

 VAR_0->gate_src[VAR_1] = VAR_2;
 VAR_3 = FUNC_0(VAR_0->which, VAR_1, VAR_2);
 FUNC_1(VAR_3, VAR_0->gat_sce_iobase);

 return 0;
}
