
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct block2mtd_dev* priv; } ;
struct block2mtd_dev {int blkdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_0)
{
 struct block2mtd_dev *VAR_1 = VAR_0->priv;
 FUNC_0(VAR_1->blkdev);
 return;
}
