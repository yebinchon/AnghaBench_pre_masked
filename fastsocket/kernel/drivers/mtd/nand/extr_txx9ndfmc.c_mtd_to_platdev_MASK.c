
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9ndfmc_priv {struct platform_device* dev; } ;
struct platform_device {int dummy; } ;
struct nand_chip {struct txx9ndfmc_priv* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;



__attribute__((used)) static struct platform_device *FUNC_0(struct mtd_info *VAR_0)
{
 struct nand_chip *VAR_1 = VAR_0->priv;
 struct txx9ndfmc_priv *VAR_2 = VAR_1->priv;
 return VAR_2->dev;
}
