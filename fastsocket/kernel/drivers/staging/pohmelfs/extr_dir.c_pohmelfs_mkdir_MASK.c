
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct dentry*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1);
 VAR_4 = FUNC_2(VAR_1, VAR_2, 0, VAR_3 | VAR_0);
 if (VAR_4)
  FUNC_0(VAR_1);

 return VAR_4;
}
