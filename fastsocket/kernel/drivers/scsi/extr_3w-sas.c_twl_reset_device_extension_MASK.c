
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int host_lock; } ;
struct TYPE_12__ {int result; int (* scsi_done ) (TYPE_5__*) ;} ;
struct TYPE_11__ {scalar_t__* state; int* free_queue; TYPE_6__* host; int chrdev_request_id; int flags; scalar_t__ posted_request_count; void* free_tail; void* free_head; TYPE_5__** srb; } ;
typedef TYPE_1__ TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_12(TW_Device_Extension *VAR_8, int VAR_9)
{
 int VAR_10 = 0, VAR_11 = 1;
 unsigned long VAR_12 = 0;


 if (VAR_9)
  FUNC_4(VAR_8->host);

 FUNC_6(VAR_1, &VAR_8->flags);
 FUNC_1(VAR_8);
 FUNC_0(VAR_8);

 FUNC_7(VAR_8->host->host_lock, VAR_12);


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if ((VAR_8->state[VAR_10] != VAR_6) &&
      (VAR_8->state[VAR_10] != VAR_7) &&
      (VAR_8->state[VAR_10] != VAR_5)) {
   if (VAR_8->srb[VAR_10]) {
    VAR_8->srb[VAR_10]->result = (VAR_0 << 16);
    VAR_8->srb[VAR_10]->scsi_done(VAR_8->srb[VAR_10]);
    FUNC_11(VAR_8, VAR_10);
   }
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_8->free_queue[VAR_10] = VAR_10;
  VAR_8->state[VAR_10] = VAR_7;
 }
 VAR_8->free_head = VAR_4;
 VAR_8->free_tail = VAR_4;
 VAR_8->posted_request_count = 0;

 FUNC_8(VAR_8->host->host_lock, VAR_12);

 if (FUNC_10(VAR_8, 1))
  goto out;

 FUNC_2(VAR_8);

 FUNC_3(VAR_1, &VAR_8->flags);
 VAR_8->chrdev_request_id = VAR_2;

 VAR_11 = 0;
out:
 if (VAR_9)
  FUNC_5(VAR_8->host);
 return VAR_11;
}
