
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct nes_device {TYPE_2__ cqp; int cqp_avail_reqs; } ;
struct TYPE_3__ {int * wqe_words; } ;
struct nes_cqp_request {int list; scalar_t__ dynamic; TYPE_1__ cqp_wqe; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nes_cqp_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,struct nes_cqp_request*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct nes_device *VAR_2,
     struct nes_cqp_request *VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(VAR_1, "CQP request %p (opcode 0x%02X) freed.\n",
    VAR_3,
    FUNC_1(VAR_3->cqp_wqe.wqe_words[VAR_0]) & 0x3f);

 if (VAR_3->dynamic) {
  FUNC_0(VAR_3);
 } else {
  FUNC_4(&VAR_2->cqp.lock, VAR_4);
  FUNC_2(&VAR_3->list, &VAR_2->cqp_avail_reqs);
  FUNC_5(&VAR_2->cqp.lock, VAR_4);
 }
}
