
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_7__ {int fromname; unsigned int pathlen; struct iattr* sattr; struct page** pages; int fromlen; int fromfh; } ;
struct TYPE_8__ {TYPE_3__ symlink; } ;
struct TYPE_5__ {int * rpc_proc; } ;
struct nfs3_createdata {TYPE_4__ arg; TYPE_1__ msg; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct TYPE_6__ {int name; int len; } ;
struct dentry {TYPE_2__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,int) ;
 struct nfs3_createdata* FUNC_2 () ;
 int FUNC_3 (struct inode*,struct dentry*,struct nfs3_createdata*) ;
 int FUNC_4 (struct nfs3_createdata*) ;
 int * VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_5, struct dentry *VAR_6, struct page *VAR_7,
    unsigned int VAR_8, struct iattr *VAR_9)
{
 struct nfs3_createdata *VAR_10;
 int VAR_11 = -VAR_1;

 if (VAR_8 > VAR_3)
  return -VAR_0;

 FUNC_1("NFS call  symlink %s\n", VAR_6->d_name.name);

 VAR_10 = FUNC_2();
 if (VAR_10 == ((void*)0))
  goto out;
 VAR_10->msg.rpc_proc = &VAR_4[VAR_2];
 VAR_10->arg.symlink.fromfh = FUNC_0(VAR_5);
 VAR_10->arg.symlink.fromname = VAR_6->d_name.name;
 VAR_10->arg.symlink.fromlen = VAR_6->d_name.len;
 VAR_10->arg.symlink.pages = &VAR_7;
 VAR_10->arg.symlink.pathlen = VAR_8;
 VAR_10->arg.symlink.sattr = VAR_9;

 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_10);

 FUNC_4(VAR_10);
out:
 FUNC_1("NFS reply symlink: %d\n", VAR_11);
 return VAR_11;
}
