
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_delegation {int stateid; } ;
struct nfs_client {TYPE_1__* cl_mvops; } ;
struct inode {int i_mapping; } ;
typedef int nfs4_stateid ;
struct TYPE_6__ {int delegation; } ;
struct TYPE_5__ {struct nfs_client* nfs_client; } ;
struct TYPE_4__ {int (* match_stateid ) (int *,int const*) ;} ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int const*) ;

int FUNC_9(struct inode *VAR_1,
          const nfs4_stateid *VAR_2)
{
 struct nfs_client *VAR_3 = FUNC_1(VAR_1)->nfs_client;
 struct nfs_delegation *VAR_4;

 FUNC_2(VAR_1->i_mapping);

 FUNC_6();
 VAR_4 = FUNC_5(FUNC_0(VAR_1)->delegation);

 if (!VAR_3->cl_mvops->match_stateid(&VAR_4->stateid, VAR_2)) {
  FUNC_7();
  return -VAR_0;
 }
 FUNC_4(VAR_4);
 FUNC_7();

 FUNC_3(VAR_3);
 return 0;
}
