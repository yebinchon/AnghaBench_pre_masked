
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct nfs_client *VAR_2)
{
 if (!VAR_2)
  return;
 if (!FUNC_2(VAR_1, &VAR_2->cl_state))
  FUNC_1(VAR_0, &VAR_2->cl_state);
 FUNC_0(VAR_2);
}
