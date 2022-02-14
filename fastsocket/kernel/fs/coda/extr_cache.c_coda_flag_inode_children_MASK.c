
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*,int) ;
 struct dentry* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;

void FUNC_5(struct inode *VAR_0, int VAR_1)
{
 struct dentry *VAR_2;

 if ( !VAR_0 || !FUNC_0(VAR_0->i_mode))
  return;

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return;
 FUNC_1(VAR_2, VAR_1);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
}
