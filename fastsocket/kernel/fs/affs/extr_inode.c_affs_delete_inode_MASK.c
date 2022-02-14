
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; scalar_t__ i_size; int i_data; int i_nlink; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(struct inode *VAR_0)
{
 FUNC_3("AFFS: delete_inode(ino=%lu, nlink=%u)\n", VAR_0->i_ino, VAR_0->i_nlink);
 FUNC_4(&VAR_0->i_data, 0);
 VAR_0->i_size = 0;
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->i_sb, VAR_0->i_ino);
}
