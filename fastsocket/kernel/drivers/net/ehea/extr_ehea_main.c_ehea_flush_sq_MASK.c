
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_port_res {int sq_skba_size; int swqe_ll_count; int swqe_avail; } ;
struct ehea_port {int num_def_qps; int swqe_avail_wq; struct ehea_port_res* port_res; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct ehea_port *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_def_qps; VAR_1++) {
  struct ehea_port_res *VAR_2 = &VAR_0->port_res[VAR_1];
  int VAR_3 = VAR_2->sq_skba_size - 2 - VAR_2->swqe_ll_count;
  int VAR_4;

  VAR_4 = FUNC_3(VAR_0->swqe_avail_wq,
    FUNC_0(&VAR_2->swqe_avail) >= VAR_3,
    FUNC_2(100));

  if (!VAR_4) {
   FUNC_1("WARNING: sq not flushed completely");
   break;
  }
 }
}
