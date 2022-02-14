
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int result; int (* scsi_done ) (TYPE_6__*) ;} ;
struct TYPE_11__ {scalar_t__* state; int* free_queue; int chrdev_request_id; int flags; TYPE_1__* host; scalar_t__ reset_print; void* pending_tail; void* pending_head; scalar_t__ pending_request_count; scalar_t__ posted_request_count; void* free_tail; void* free_head; TYPE_6__** srb; } ;
struct TYPE_10__ {int host_lock; } ;
typedef TYPE_2__ TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_10(TW_Device_Extension *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 1;
 unsigned long VAR_11 = 0;

 FUNC_4(VAR_1, &VAR_8->flags);
 FUNC_0(VAR_8);
 FUNC_2(VAR_8);
 FUNC_5(VAR_8->host->host_lock, VAR_11);


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if ((VAR_8->state[VAR_9] != VAR_6) &&
      (VAR_8->state[VAR_9] != VAR_7) &&
      (VAR_8->state[VAR_9] != VAR_5)) {
   if (VAR_8->srb[VAR_9]) {
    VAR_8->srb[VAR_9]->result = (VAR_0 << 16);
    VAR_8->srb[VAR_9]->scsi_done(VAR_8->srb[VAR_9]);
    FUNC_9(VAR_8, VAR_9);
   }
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8->free_queue[VAR_9] = VAR_9;
  VAR_8->state[VAR_9] = VAR_7;
 }
 VAR_8->free_head = VAR_4;
 VAR_8->free_tail = VAR_4;
 VAR_8->posted_request_count = 0;
 VAR_8->pending_request_count = 0;
 VAR_8->pending_head = VAR_4;
 VAR_8->pending_tail = VAR_4;
 VAR_8->reset_print = 0;

 FUNC_6(VAR_8->host->host_lock, VAR_11);

 if (FUNC_8(VAR_8, 1))
  goto out;

 FUNC_1(VAR_8);
 FUNC_3(VAR_1, &VAR_8->flags);
 VAR_8->chrdev_request_id = VAR_2;

 VAR_10 = 0;
out:
 return VAR_10;
}
