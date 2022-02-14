
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int qp; int lkey; } ;
struct srp_iu {int size; int dma; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_recv_wr {uintptr_t wr_id; int num_sge; struct ib_sge* sg_list; int * next; } ;


 int FUNC_0 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;

__attribute__((used)) static int FUNC_1(struct srp_target_port *VAR_0, struct srp_iu *VAR_1)
{
 struct ib_recv_wr VAR_2, *VAR_3;
 struct ib_sge VAR_4;

 VAR_4.addr = VAR_1->dma;
 VAR_4.length = VAR_1->size;
 VAR_4.lkey = VAR_0->lkey;

 VAR_2.next = ((void*)0);
 VAR_2.wr_id = (uintptr_t) VAR_1;
 VAR_2.sg_list = &VAR_4;
 VAR_2.num_sge = 1;

 return FUNC_0(VAR_0->qp, &VAR_2, &VAR_3);
}
