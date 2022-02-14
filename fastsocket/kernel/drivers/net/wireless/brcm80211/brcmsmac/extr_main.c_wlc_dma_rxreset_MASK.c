
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct dma_pub {int dummy; } ;
struct brcms_hardware {struct dma_pub** di; } ;


 int FUNC_0 (struct dma_pub*) ;

__attribute__((used)) static bool FUNC_1(struct brcms_hardware *VAR_0, uint VAR_1)
{
 struct dma_pub *VAR_2 = VAR_0->di[VAR_1];
 return FUNC_0(VAR_2);
}
