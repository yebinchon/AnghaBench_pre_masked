
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct dentry {scalar_t__ d_fsdata; int d_name; scalar_t__ d_inode; } ;


 int FUNC_0 (int ,struct inode*,int *,struct inode*,int *) ;
 int FUNC_1 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct dentry *VAR_1,
     struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;


 if (VAR_3->d_inode) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_0((u32)(unsigned long)VAR_1->d_fsdata,
     VAR_0, &VAR_1->d_name,
     VAR_2, &VAR_3->d_name);
 if (!VAR_4)
  VAR_3->d_fsdata = VAR_1->d_fsdata;
 return VAR_4;
}
