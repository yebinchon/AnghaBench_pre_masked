
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct async {int mem_usage; TYPE_1__* urb; int pid; } ;
struct TYPE_2__ {struct async* setup_packet; struct async* transfer_buffer; } ;


 int FUNC_0 (struct async*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct async *VAR_0)
{
 FUNC_1(VAR_0->pid);
 FUNC_0(VAR_0->urb->transfer_buffer);
 FUNC_0(VAR_0->urb->setup_packet);
 FUNC_2(VAR_0->urb);
 FUNC_3(VAR_0->mem_usage);
 FUNC_0(VAR_0);
}
