
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma64desc {int addrlow; int addrhigh; int ctrl1; int ctrl2; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct dma64desc *VAR_0)
{
 return FUNC_0(VAR_0->addrlow ^ VAR_0->addrhigh ^ VAR_0->ctrl1 ^ VAR_0->ctrl2);
}
