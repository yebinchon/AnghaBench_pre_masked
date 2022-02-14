
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_iloc {int bh; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int FUNC_5(handle_t *VAR_1,
    struct inode *VAR_2, struct ext4_iloc *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_4(VAR_2->i_sb, VAR_0))
  FUNC_2(VAR_2);


 FUNC_1(VAR_3->bh);


 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_3->bh);
 return VAR_4;
}
