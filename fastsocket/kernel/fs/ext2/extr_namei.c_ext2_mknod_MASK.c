
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_op; int i_mode; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct inode* FUNC_3 (struct inode*,int) ;
 int VAR_1 ;
 int FUNC_4 (struct inode*,int ,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7 (struct inode * VAR_2, struct dentry *VAR_3, int VAR_4, dev_t VAR_5)
{
 struct inode * VAR_6;
 int VAR_7;

 if (!FUNC_6(VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_3 (VAR_2, VAR_4);
 VAR_7 = FUNC_1(VAR_6);
 if (!FUNC_0(VAR_6)) {
  FUNC_4(VAR_6, VAR_6->i_mode, VAR_5);



  FUNC_5(VAR_6);
  VAR_7 = FUNC_2(VAR_3, VAR_6);
 }
 return VAR_7;
}
