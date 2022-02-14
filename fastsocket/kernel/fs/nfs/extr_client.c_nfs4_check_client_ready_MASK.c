
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {scalar_t__ cl_cons_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nfs_client*) ;

int FUNC_1(struct nfs_client *VAR_2)
{
 if (!FUNC_0(VAR_2))
  return 0;
 if (VAR_2->cl_cons_state < VAR_1)
  return -VAR_0;
 return 0;
}
