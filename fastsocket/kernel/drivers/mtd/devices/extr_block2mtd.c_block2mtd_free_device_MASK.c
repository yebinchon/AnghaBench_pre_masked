
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct block2mtd_dev* name; } ;
struct block2mtd_dev {TYPE_3__* blkdev; TYPE_1__ mtd; } ;
struct TYPE_6__ {TYPE_2__* bd_inode; } ;
struct TYPE_5__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct block2mtd_dev*) ;

__attribute__((used)) static void FUNC_3(struct block2mtd_dev *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_2(VAR_2->mtd.name);

 if (VAR_2->blkdev) {
  FUNC_1(VAR_2->blkdev->bd_inode->i_mapping,
     0, -1);
  FUNC_0(VAR_2->blkdev, VAR_0|VAR_1);
 }

 FUNC_2(VAR_2);
}
