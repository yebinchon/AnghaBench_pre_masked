
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct rdac_queue_data {int entry; TYPE_1__* h; void* callback_data; int callback_fn; } ;
struct rdac_controller {int ms_queued; int ms_lock; int ms_work; struct scsi_device* ms_sdev; int ms_head; } ;
typedef int activate_complete ;
struct TYPE_2__ {struct rdac_controller* ctlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct scsi_device*) ;
 int VAR_3 ;
 struct rdac_queue_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_4,
    activate_complete VAR_5, void *VAR_6)
{
 struct rdac_queue_data *VAR_7;
 struct rdac_controller *VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return VAR_2;

 VAR_7->h = FUNC_0(VAR_4);
 VAR_7->callback_fn = VAR_5;
 VAR_7->callback_data = VAR_6;

 VAR_8 = VAR_7->h->ctlr;
 FUNC_4(&VAR_8->ms_lock);
 FUNC_2(&VAR_7->entry, &VAR_8->ms_head);
 if (!VAR_8->ms_queued) {
  VAR_8->ms_queued = 1;
  VAR_8->ms_sdev = VAR_4;
  FUNC_3(VAR_3, &VAR_8->ms_work);
 }
 FUNC_5(&VAR_8->ms_lock);
 return VAR_1;
}
