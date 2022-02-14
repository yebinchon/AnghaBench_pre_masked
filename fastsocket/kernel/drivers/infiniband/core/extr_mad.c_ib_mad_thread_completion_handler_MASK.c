
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_port_private {int work; int wq; int port_list; } ;
struct ib_cq {struct ib_mad_port_private* cq_context; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ib_cq *VAR_1, void *VAR_2)
{
 struct ib_mad_port_private *VAR_3 = VAR_1->cq_context;
 unsigned long VAR_4;

 FUNC_2(&VAR_0, VAR_4);
 if (!FUNC_0(&VAR_3->port_list))
  FUNC_1(VAR_3->wq, &VAR_3->work);
 FUNC_3(&VAR_0, VAR_4);
}
