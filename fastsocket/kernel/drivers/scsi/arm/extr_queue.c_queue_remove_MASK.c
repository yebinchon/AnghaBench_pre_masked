
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct TYPE_6__ {int next; } ;
struct TYPE_5__ {int queue_lock; TYPE_3__ head; } ;
typedef TYPE_1__ Queue_t ;


 struct scsi_cmnd* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct scsi_cmnd *FUNC_4(Queue_t *VAR_0)
{
 unsigned long VAR_1;
 struct scsi_cmnd *VAR_2 = ((void*)0);

 FUNC_2(&VAR_0->queue_lock, VAR_1);
 if (!FUNC_1(&VAR_0->head))
  VAR_2 = FUNC_0(VAR_0, VAR_0->head.next);
 FUNC_3(&VAR_0->queue_lock, VAR_1);

 return VAR_2;
}
