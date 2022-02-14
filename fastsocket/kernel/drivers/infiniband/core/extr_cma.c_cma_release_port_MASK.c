
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int node; struct rdma_bind_list* bind_list; } ;
struct rdma_bind_list {int port; int ps; int owners; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rdma_bind_list*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rdma_id_private *VAR_1)
{
 struct rdma_bind_list *VAR_2 = VAR_1->bind_list;

 if (!VAR_2)
  return;

 FUNC_4(&VAR_0);
 FUNC_0(&VAR_1->node);
 if (FUNC_1(&VAR_2->owners)) {
  FUNC_2(VAR_2->ps, VAR_2->port);
  FUNC_3(VAR_2);
 }
 FUNC_5(&VAR_0);
}
