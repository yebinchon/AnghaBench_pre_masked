
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_createdata {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_createdata* FUNC_0 (struct inode*,int *,struct iattr*,int ) ;
 int FUNC_1 (struct inode*,struct dentry*,struct nfs4_createdata*) ;
 int FUNC_2 (struct nfs4_createdata*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct dentry *VAR_3,
  struct iattr *VAR_4)
{
 struct nfs4_createdata *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_0(VAR_2, &VAR_3->d_name, VAR_4, VAR_1);
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);

 FUNC_2(VAR_5);
out:
 return VAR_6;
}
