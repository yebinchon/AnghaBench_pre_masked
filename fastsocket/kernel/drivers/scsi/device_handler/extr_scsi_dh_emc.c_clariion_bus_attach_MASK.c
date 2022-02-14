
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_dh_data {scalar_t__ buf; int * scsi_dh; } ;
struct scsi_device {TYPE_1__* request_queue; struct scsi_dh_data* scsi_dh_data; } ;
struct clariion_dh_data {size_t lun_state; void* default_sp; int port; void* current_sp; } ;
struct TYPE_2__ {int queue_lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_1 (struct scsi_device*,struct clariion_dh_data*) ;
 int FUNC_2 (struct scsi_dh_data*) ;
 struct scsi_dh_data* FUNC_3 (int,int ) ;
 int * VAR_11 ;
 int FUNC_4 (int ,struct scsi_device*,char*,int ,...) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct scsi_device *VAR_12)
{
 struct scsi_dh_data *VAR_13;
 struct clariion_dh_data *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_13 = FUNC_3(sizeof(*VAR_13)
          + sizeof(*VAR_14) , VAR_5);
 if (!VAR_13) {
  FUNC_4(VAR_6, VAR_12, "%s: Attach failed\n",
       VAR_1);
  return -VAR_4;
 }

 VAR_13->scsi_dh = &VAR_10;
 VAR_14 = (struct clariion_dh_data *) VAR_13->buf;
 VAR_14->lun_state = VAR_0;
 VAR_14->default_sp = VAR_2;
 VAR_14->current_sp = VAR_2;

 VAR_16 = FUNC_1(VAR_12, VAR_14);
 if (VAR_16 != VAR_8)
  goto failed;

 VAR_16 = FUNC_0(VAR_12, VAR_14);
 if (VAR_16 != VAR_8)
  goto failed;

 if (!FUNC_7(VAR_9))
  goto failed;

 FUNC_5(VAR_12->request_queue->queue_lock, VAR_15);
 VAR_12->scsi_dh_data = VAR_13;
 FUNC_6(VAR_12->request_queue->queue_lock, VAR_15);

 FUNC_4(VAR_7, VAR_12,
      "%s: connected to SP %c Port %d (%s, default SP %c)\n",
      VAR_1, VAR_14->current_sp + 'A',
      VAR_14->port, VAR_11[VAR_14->lun_state],
      VAR_14->default_sp + 'A');

 return 0;

failed:
 FUNC_2(VAR_13);
 FUNC_4(VAR_6, VAR_12, "%s: not attached\n",
      VAR_1);
 return -VAR_3;
}
