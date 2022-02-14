
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct asd_seq_data {int pend_q_lock; int pending; } ;
struct asd_ascb {int list; TYPE_3__* scb; TYPE_1__* ha; } ;
struct TYPE_5__ {int opcode; } ;
struct TYPE_6__ {TYPE_2__ header; } ;
struct TYPE_4__ {struct asd_seq_data seq; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct asd_ascb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(unsigned long VAR_0)
{
 struct asd_ascb *VAR_1 = (void *) VAR_0;
 struct asd_seq_data *VAR_2 = &VAR_1->ha->seq;
 unsigned long VAR_3;

 FUNC_0("scb:0x%x timed out\n", VAR_1->scb->header.opcode);

 FUNC_3(&VAR_2->pend_q_lock, VAR_3);
 VAR_2->pending--;
 FUNC_2(&VAR_1->list);
 FUNC_4(&VAR_2->pend_q_lock, VAR_3);

 FUNC_1(VAR_1);
}
