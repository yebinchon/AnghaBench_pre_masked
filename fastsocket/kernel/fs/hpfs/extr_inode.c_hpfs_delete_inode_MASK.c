
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; int i_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;

void FUNC_5(struct inode *VAR_0)
{
 FUNC_3(&VAR_0->i_data, 0);
 FUNC_2();
 FUNC_1(VAR_0->i_sb, VAR_0->i_ino);
 FUNC_4();
 FUNC_0(VAR_0);
}
