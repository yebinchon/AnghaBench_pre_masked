
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_commit_data {int lseg; TYPE_1__* completion_ops; } ;
struct TYPE_2__ {int (* completion ) (struct nfs_commit_data*) ;} ;


 int FUNC_0 (struct nfs_commit_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_commit_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct nfs_commit_data *VAR_1 = VAR_0;

 VAR_1->completion_ops->completion(VAR_1);
 FUNC_1(VAR_1->lseg);
 FUNC_0(VAR_1);
}
