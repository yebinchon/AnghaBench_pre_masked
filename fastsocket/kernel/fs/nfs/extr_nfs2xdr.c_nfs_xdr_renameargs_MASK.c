
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_rqst {int rq_svec; int rq_slen; } ;
struct nfs_renameargs {TYPE_1__* new_name; int new_dir; TYPE_2__* old_name; int old_dir; } ;
typedef int __be32 ;
struct TYPE_4__ {int len; int name; } ;
struct TYPE_3__ {int len; int name; } ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct rpc_rqst *VAR_0, __be32 *VAR_1, struct nfs_renameargs *VAR_2)
{
 VAR_1 = FUNC_2(VAR_1, VAR_2->old_dir);
 VAR_1 = FUNC_1(VAR_1, VAR_2->old_name->name, VAR_2->old_name->len);
 VAR_1 = FUNC_2(VAR_1, VAR_2->new_dir);
 VAR_1 = FUNC_1(VAR_1, VAR_2->new_name->name, VAR_2->new_name->len);
 VAR_0->rq_slen = FUNC_0(VAR_0->rq_svec, VAR_1);
 return 0;
}
