
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fattr; int fh; int dir_attr; } ;
struct nfs3_createdata {TYPE_1__ res; int msg; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,int ,int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct dentry *VAR_1, struct nfs3_createdata *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(FUNC_0(VAR_0), &VAR_2->msg, 0);
 FUNC_2(VAR_0, VAR_2->res.dir_attr);
 if (VAR_3 == 0)
  VAR_3 = FUNC_1(VAR_1, VAR_2->res.fh, VAR_2->res.fattr);
 return VAR_3;
}
