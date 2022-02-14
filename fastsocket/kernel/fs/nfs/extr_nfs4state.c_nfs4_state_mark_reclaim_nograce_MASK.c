
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {int cl_state; } ;
struct nfs4_state {TYPE_1__* owner; int flags; } ;
struct TYPE_2__ {int so_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nfs_client *VAR_4, struct nfs4_state *VAR_5)
{
 FUNC_1(VAR_2, &VAR_5->flags);
 FUNC_0(VAR_3, &VAR_5->flags);
 FUNC_1(VAR_1, &VAR_5->owner->so_flags);
 FUNC_1(VAR_0, &VAR_4->cl_state);
 return 1;
}
