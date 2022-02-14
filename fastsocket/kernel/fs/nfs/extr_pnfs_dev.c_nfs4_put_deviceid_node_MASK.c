
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_deviceid_node {TYPE_1__* ld; int ref; } ;
struct TYPE_2__ {int (* free_deviceid_node ) (struct nfs4_deviceid_node*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs4_deviceid_node*) ;

bool
FUNC_2(struct nfs4_deviceid_node *VAR_0)
{
 if (!FUNC_0(&VAR_0->ref))
  return 0;
 VAR_0->ld->free_deviceid_node(VAR_0);
 return 1;
}
