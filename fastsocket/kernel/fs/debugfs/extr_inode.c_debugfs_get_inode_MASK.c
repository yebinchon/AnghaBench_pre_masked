
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; void* i_private; struct file_operations const* i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; } ;
struct file_operations {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;


 int VAR_1 ;

 struct file_operations const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int,int ) ;
 struct inode* FUNC_2 (struct super_block*) ;
 int VAR_4 ;
 struct file_operations const VAR_5 ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_6, int VAR_7, dev_t VAR_8,
           void *VAR_9, const struct file_operations *VAR_10)

{
 struct inode *VAR_11 = FUNC_2(VAR_6);

 if (VAR_11) {
  VAR_11->i_mode = VAR_7;
  VAR_11->i_atime = VAR_11->i_mtime = VAR_11->i_ctime = VAR_0;
  switch (VAR_7 & VAR_1) {
  default:
   FUNC_1(VAR_11, VAR_7, VAR_8);
   break;
  case 128:
   VAR_11->i_fop = VAR_10 ? VAR_10 : &VAR_2;
   VAR_11->i_private = VAR_9;
   break;
  case 129:
   VAR_11->i_op = &VAR_3;
   VAR_11->i_fop = VAR_10;
   VAR_11->i_private = VAR_9;
   break;
  case 130:
   VAR_11->i_op = &VAR_4;
   VAR_11->i_fop = VAR_10 ? VAR_10 : &VAR_5;
   VAR_11->i_private = VAR_9;



   FUNC_0(VAR_11);
   break;
  }
 }
 return VAR_11;
}
