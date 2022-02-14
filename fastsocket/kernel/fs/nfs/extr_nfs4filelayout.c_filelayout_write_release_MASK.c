
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_write_data {TYPE_2__* header; } ;
struct TYPE_4__ {TYPE_1__* mds_ops; } ;
struct TYPE_3__ {int (* rpc_release ) (void*) ;} ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct nfs_write_data *VAR_1 = VAR_0;

 VAR_1->header->mds_ops->rpc_release(VAR_0);
}
