
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int SenderSize; void* XferState; } ;
struct hw_fib {TYPE_2__ header; scalar_t__ data; } ;
struct fib {int hw_fib_pa; struct fib* next; int event_lock; int event_wait; struct hw_fib* hw_fib_va; void* data; struct aac_dev* dev; scalar_t__ flags; } ;
struct aac_fib_xporthdr {int dummy; } ;
struct aac_dev {int hw_fib_pa; int max_fib_size; struct fib* fibs; struct fib* free_fib; TYPE_3__* scsi_host_ptr; struct hw_fib* hw_fib_va; TYPE_1__* init; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int can_queue; } ;
struct TYPE_4__ {void* MaxIoCommands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct aac_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct hw_fib*,int ,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct aac_dev * VAR_3)
{
 struct fib *VAR_4;
 struct hw_fib *VAR_5;
 dma_addr_t VAR_6;
 int VAR_7;

 while (((VAR_7 = FUNC_2(VAR_3)) == -VAR_2)
  && (VAR_3->scsi_host_ptr->can_queue > (64 - VAR_0))) {
  VAR_3->init->MaxIoCommands = FUNC_1((VAR_3->scsi_host_ptr->can_queue + VAR_0) >> 1);
  VAR_3->scsi_host_ptr->can_queue = FUNC_4(VAR_3->init->MaxIoCommands) - VAR_0;
 }
 if (VAR_7<0)
  return -VAR_2;


 VAR_6 = (VAR_3->hw_fib_pa + (VAR_1 - 1)) & ~(VAR_1 - 1);
 VAR_3->hw_fib_va = (struct hw_fib *)((unsigned char *)VAR_3->hw_fib_va +
  (VAR_6 - VAR_3->hw_fib_pa));
 VAR_3->hw_fib_pa = VAR_6;
 FUNC_5(VAR_3->hw_fib_va, 0,
  (VAR_3->max_fib_size + sizeof(struct aac_fib_xporthdr)) *
  (VAR_3->scsi_host_ptr->can_queue + VAR_0));

 VAR_3->hw_fib_va = (struct hw_fib *)((unsigned char *)VAR_3->hw_fib_va +
  sizeof(struct aac_fib_xporthdr));
 VAR_3->hw_fib_pa += sizeof(struct aac_fib_xporthdr);

 VAR_5 = VAR_3->hw_fib_va;
 VAR_6 = VAR_3->hw_fib_pa;



 for (VAR_7 = 0, VAR_4 = &VAR_3->fibs[VAR_7];
  VAR_7 < (VAR_3->scsi_host_ptr->can_queue + VAR_0);
  VAR_7++, VAR_4++)
 {
  VAR_4->flags = 0;
  VAR_4->dev = VAR_3;
  VAR_4->hw_fib_va = VAR_5;
  VAR_4->data = (void *) VAR_4->hw_fib_va->data;
  VAR_4->next = VAR_4+1;
  FUNC_3(&VAR_4->event_wait);
  FUNC_6(&VAR_4->event_lock);
  VAR_5->header.XferState = FUNC_1(0xffffffff);
  VAR_5->header.SenderSize = FUNC_0(VAR_3->max_fib_size);
  VAR_4->hw_fib_pa = VAR_6;
  VAR_5 = (struct hw_fib *)((unsigned char *)VAR_5 +
   VAR_3->max_fib_size + sizeof(struct aac_fib_xporthdr));
  VAR_6 = VAR_6 +
   VAR_3->max_fib_size + sizeof(struct aac_fib_xporthdr);
 }



 VAR_3->fibs[VAR_3->scsi_host_ptr->can_queue + VAR_0 - 1].next = ((void*)0);



 VAR_3->free_fib = &VAR_3->fibs[0];
 return 0;
}
