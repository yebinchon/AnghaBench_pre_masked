
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addr_client {int comp; int refcount; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rdma_addr_client *VAR_0)
{
 FUNC_0(&VAR_0->refcount, 1);
 FUNC_1(&VAR_0->comp);
}
