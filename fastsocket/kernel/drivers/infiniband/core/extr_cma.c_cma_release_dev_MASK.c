
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int * cma_dev; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rdma_id_private *VAR_1)
{
 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1->cma_dev);
 VAR_1->cma_dev = ((void*)0);
 FUNC_3(&VAR_0);
}
