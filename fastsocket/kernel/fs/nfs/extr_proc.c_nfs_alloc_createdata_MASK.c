
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * fattr; TYPE_3__* fh; } ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_6__ {struct iattr* sattr; int len; int name; int fh; } ;
struct nfs_createdata {int fattr; TYPE_4__ res; TYPE_3__ fhandle; TYPE_2__ arg; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct TYPE_5__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct nfs_createdata* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct nfs_createdata *FUNC_3(struct inode *VAR_1,
  struct dentry *VAR_2, struct iattr *VAR_3)
{
 struct nfs_createdata *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);

 if (VAR_4 != ((void*)0)) {
  VAR_4->arg.fh = FUNC_0(VAR_1);
  VAR_4->arg.name = VAR_2->d_name.name;
  VAR_4->arg.len = VAR_2->d_name.len;
  VAR_4->arg.sattr = VAR_3;
  FUNC_2(&VAR_4->fattr);
  VAR_4->fhandle.size = 0;
  VAR_4->res.fh = &VAR_4->fhandle;
  VAR_4->res.fattr = &VAR_4->fattr;
 }
 return VAR_4;
}
