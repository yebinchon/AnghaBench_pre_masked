
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fattr; int fh; int dir_cinfo; int seq_res; } ;
struct TYPE_6__ {int seq_args; } ;
struct nfs4_createdata {TYPE_1__ res; TYPE_2__ arg; int msg; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_7__ {int client; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,TYPE_3__*,int *,int *,int *,int) ;
 int FUNC_2 (struct dentry*,int ,int ) ;
 int FUNC_3 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct dentry *VAR_1, struct nfs4_createdata *VAR_2)
{
 int VAR_3 = FUNC_1(FUNC_0(VAR_0)->client, FUNC_0(VAR_0), &VAR_2->msg,
        &VAR_2->arg.seq_args, &VAR_2->res.seq_res, 1);
 if (VAR_3 == 0) {
  FUNC_3(VAR_0, &VAR_2->res.dir_cinfo);
  VAR_3 = FUNC_2(VAR_1, VAR_2->res.fh, VAR_2->res.fattr);
 }
 return VAR_3;
}
