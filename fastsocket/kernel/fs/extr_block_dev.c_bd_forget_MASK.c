
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct block_device* i_bdev; int i_sb; } ;
struct block_device {int bd_inode; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_1)
{
 struct block_device *VAR_2 = ((void*)0);

 FUNC_3(&VAR_0);
 if (VAR_1->i_bdev) {
  if (!FUNC_2(VAR_1->i_sb))
   VAR_2 = VAR_1->i_bdev;
  FUNC_0(VAR_1);
 }
 FUNC_4(&VAR_0);

 if (VAR_2)
  FUNC_1(VAR_2->bd_inode);
}
