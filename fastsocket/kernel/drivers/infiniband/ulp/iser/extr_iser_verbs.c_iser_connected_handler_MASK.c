
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {scalar_t__ context; } ;
struct iser_conn {int wait; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rdma_cm_id *VAR_1)
{
 struct iser_conn *VAR_2;

 VAR_2 = (struct iser_conn *)VAR_1->context;
 VAR_2->state = VAR_0;
 FUNC_0(&VAR_2->wait);
}
