
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {int flags; int inode; } ;
struct nfs_client {int cl_state; } ;
struct TYPE_2__ {struct nfs_client* nfs_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct nfs_delegation *VAR_2)
{
 struct nfs_client *VAR_3 = FUNC_0(VAR_2->inode)->nfs_client;

 FUNC_1(VAR_1, &VAR_2->flags);
 FUNC_1(VAR_0, &VAR_3->cl_state);
}
