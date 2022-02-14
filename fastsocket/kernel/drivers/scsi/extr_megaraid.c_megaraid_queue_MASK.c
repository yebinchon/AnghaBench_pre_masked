
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int list; int state; } ;
typedef TYPE_4__ scb_t ;
struct TYPE_17__ {int lock; int quiescent; int pending_list; } ;
typedef TYPE_5__ adapter_t ;
struct TYPE_15__ {void (* scsi_done ) (TYPE_3__*) ;TYPE_2__* device; } ;
struct TYPE_14__ {TYPE_1__* host; } ;
struct TYPE_13__ {scalar_t__ hostdata; } ;
typedef TYPE_3__ Scsi_Cmnd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,TYPE_3__*,int*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(Scsi_Cmnd *VAR_1, void (*VAR_2)(Scsi_Cmnd *))
{
 adapter_t *VAR_3;
 scb_t *VAR_4;
 int VAR_5=0;
 unsigned long VAR_6;

 VAR_3 = (adapter_t *)VAR_1->device->host->hostdata;

 VAR_1->scsi_done = VAR_2;
 FUNC_4(&VAR_3->lock, VAR_6);
 VAR_4 = FUNC_2(VAR_3, VAR_1, &VAR_5);
 if (!VAR_4)
  goto out;

 VAR_4->state |= VAR_0;
 FUNC_1(&VAR_4->list, &VAR_3->pending_list);






 if (FUNC_0(&VAR_3->quiescent) == 0)
  FUNC_3(VAR_3);

 VAR_5 = 0;
 out:
 FUNC_5(&VAR_3->lock, VAR_6);
 return VAR_5;
}
