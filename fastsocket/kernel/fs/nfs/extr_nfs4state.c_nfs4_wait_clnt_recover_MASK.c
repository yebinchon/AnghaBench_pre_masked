
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {scalar_t__ cl_cons_state; int cl_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ) ;

int FUNC_2(struct nfs_client *VAR_3)
{
 int VAR_4;

 FUNC_0();

 VAR_4 = FUNC_1(&VAR_3->cl_state, VAR_0,
   VAR_2, VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->cl_cons_state < 0)
  return VAR_3->cl_cons_state;
 return 0;
}
