
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_fop; int * i_op; int i_sb; int i_ctime; int i_mtime; int i_atime; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_3)
{
 FUNC_1(VAR_3);

 VAR_3->i_mode = VAR_0;
 VAR_3->i_atime = VAR_3->i_mtime = VAR_3->i_ctime =
  FUNC_0(VAR_3->i_sb);
 VAR_3->i_op = &VAR_2;
 VAR_3->i_fop = &VAR_1;
}
