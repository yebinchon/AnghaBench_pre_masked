
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct dentry*,int,int ) ;

__attribute__((used)) static int FUNC_2 (struct inode *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_5 = (VAR_5 & (VAR_1 | VAR_2)) | VAR_0;
 VAR_6 = FUNC_1 (VAR_3, VAR_4, VAR_5, 0);
 if (!VAR_6)
  FUNC_0(VAR_3);
 return VAR_6;
}
