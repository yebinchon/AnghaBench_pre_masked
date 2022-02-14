
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; } ;
typedef int dev_t ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int,int ) ;
 struct inode* FUNC_4 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct inode *FUNC_5 (struct super_block *VAR_5, int VAR_6, dev_t VAR_7)
{
 struct inode *VAR_8 = FUNC_4(VAR_5);

 if (VAR_8) {
  VAR_8->i_mode = VAR_6;
  VAR_8->i_uid = FUNC_1();
  VAR_8->i_gid = FUNC_0();
  VAR_8->i_atime = VAR_8->i_mtime = VAR_8->i_ctime = VAR_0;
  switch (VAR_6 & VAR_1) {
  default:
   FUNC_3(VAR_8, VAR_6, VAR_7);
   break;
  case 128:
   VAR_8->i_fop = &VAR_2;
   break;
  case 129:
   VAR_8->i_op = &VAR_3;
   VAR_8->i_fop = &VAR_4;


   FUNC_2(VAR_8);
   break;
  }
 }
 return VAR_8;
}
