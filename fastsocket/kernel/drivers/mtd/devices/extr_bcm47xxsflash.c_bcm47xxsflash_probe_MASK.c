
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct bcma_sflash {int size; int numblocks; int blocksize; int window; struct bcm47xxsflash* priv; } ;
struct bcm47xxsflash {int mtd; int size; int numblocks; int blocksize; int window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm47xxsflash*) ;
 struct bcma_sflash* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bcm47xxsflash* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int *,int *,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct bcma_sflash *VAR_4 = FUNC_1(&VAR_3->dev);
 struct bcm47xxsflash *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_4->priv = VAR_5;

 VAR_5->window = VAR_4->window;
 VAR_5->blocksize = VAR_4->blocksize;
 VAR_5->numblocks = VAR_4->numblocks;
 VAR_5->size = VAR_4->size;
 FUNC_0(VAR_5);

 VAR_6 = FUNC_4(&VAR_5->mtd, VAR_2, ((void*)0), ((void*)0), 0);
 if (VAR_6) {
  FUNC_5("Failed to register MTD device: %d\n", VAR_6);
  goto err_dev_reg;
 }

 return 0;

err_dev_reg:
 FUNC_2(&VAR_5->mtd);
out:
 return VAR_6;
}
