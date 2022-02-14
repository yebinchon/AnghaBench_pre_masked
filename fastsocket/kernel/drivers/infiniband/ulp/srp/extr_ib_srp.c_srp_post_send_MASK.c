
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int qp; int lkey; } ;
struct srp_iu {int dma; } ;
struct ib_sge {int length; int lkey; int addr; } ;
struct ib_send_wr {uintptr_t wr_id; int num_sge; int send_flags; int opcode; struct ib_sge* sg_list; int * next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ib_send_wr*,struct ib_send_wr**) ;

__attribute__((used)) static int FUNC_1(struct srp_target_port *VAR_2,
    struct srp_iu *VAR_3, int VAR_4)
{
 struct ib_sge VAR_5;
 struct ib_send_wr VAR_6, *VAR_7;

 VAR_5.addr = VAR_3->dma;
 VAR_5.length = VAR_4;
 VAR_5.lkey = VAR_2->lkey;

 VAR_6.next = ((void*)0);
 VAR_6.wr_id = (uintptr_t) VAR_3;
 VAR_6.sg_list = &VAR_5;
 VAR_6.num_sge = 1;
 VAR_6.opcode = VAR_1;
 VAR_6.send_flags = VAR_0;

 return FUNC_0(VAR_2->qp, &VAR_6, &VAR_7);
}
