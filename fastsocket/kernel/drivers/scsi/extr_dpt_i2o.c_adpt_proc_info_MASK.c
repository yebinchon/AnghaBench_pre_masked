
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct adpt_device {struct adpt_device* next_lun; TYPE_5__* pScsi_dev; scalar_t__ scsi_lun; scalar_t__ scsi_id; scalar_t__ scsi_channel; TYPE_3__* pI2o_dev; } ;
struct Scsi_Host {int host_no; int irq; int can_queue; int sg_tablesize; } ;
typedef int off_t ;
struct TYPE_10__ {char* detail; char* name; TYPE_1__* channel; scalar_t__ reply_fifo_size; struct Scsi_Host* host; struct TYPE_10__* next; } ;
typedef TYPE_4__ adpt_hba ;
struct TYPE_11__ {char* vendor; char* rev; } ;
struct TYPE_8__ {int tid; } ;
struct TYPE_9__ {TYPE_2__ lct_data; } ;
struct TYPE_7__ {struct adpt_device** device; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_7, char *VAR_8, char **VAR_9, off_t VAR_10,
    int VAR_11, int VAR_12)
{
 struct adpt_device* VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 adpt_hba* VAR_19;
 int VAR_20;

 *VAR_9 = VAR_8;
 if (VAR_12 == VAR_4) {







  return -VAR_1;
 }
 FUNC_0(&VAR_5);
 for (VAR_19 = VAR_6; VAR_19; VAR_19 = VAR_19->next) {
  if (VAR_19->host == VAR_7) {
   break;
  }
 }
 FUNC_1(&VAR_5);
 if (VAR_19 == ((void*)0)) {
  return 0;
 }
 VAR_7 = VAR_19->host;

 VAR_16 = FUNC_3(VAR_8 , "Adaptec I2O RAID Driver Version: %s\n\n", VAR_0);
 VAR_16 += FUNC_3(VAR_8+VAR_16, "%s\n", VAR_19->detail);
 VAR_16 += FUNC_3(VAR_8+VAR_16, "SCSI Host=scsi%d  Control Node=/dev/%s  irq=%d\n",
   VAR_19->host->host_no, VAR_19->name, VAR_7->irq);
 VAR_16 += FUNC_3(VAR_8+VAR_16, "\tpost fifo size  = %d\n\treply fifo size = %d\n\tsg table size   = %d\n\n",
   VAR_7->can_queue, (int) VAR_19->reply_fifo_size , VAR_7->sg_tablesize);

 VAR_18 = VAR_17 + VAR_16;


 if(VAR_18 > VAR_10 + VAR_11) {
  goto stop_output;
 }
 if(VAR_18 <= VAR_10) {





  VAR_16 = 0;
  VAR_17 = VAR_18;
 }
 VAR_16 += FUNC_3(VAR_8+VAR_16, "Devices:\n");
 for(VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
  for(VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
   VAR_13 = VAR_19->channel[VAR_15].device[VAR_14];
   while(VAR_13){
    VAR_16 += FUNC_3(VAR_8+VAR_16,"\t%-24.24s", VAR_13->pScsi_dev->vendor);
    VAR_16 += FUNC_3(VAR_8+VAR_16," Rev: %-8.8s\n", VAR_13->pScsi_dev->rev);
    VAR_18 = VAR_17 + VAR_16;



    if(VAR_18 > VAR_10 + VAR_11) {
     goto stop_output;
    }
    if(VAR_18 <= VAR_10) {
     VAR_16 = 0;
     VAR_17 = VAR_18;
    }

    VAR_20 = VAR_13->pI2o_dev->lct_data.tid;
    VAR_16 += FUNC_3(VAR_8+VAR_16, "\tTID=%d, (Channel=%d, Target=%d, Lun=%d)  (%s)\n\n",
            VAR_20, (int)VAR_13->scsi_channel, (int)VAR_13->scsi_id, (int)VAR_13->scsi_lun,
            FUNC_2(VAR_13->pScsi_dev)? "online":"offline");
    VAR_18 = VAR_17 + VAR_16;


    if(VAR_18 > VAR_10 + VAR_11) {
     goto stop_output;
    }
    if(VAR_18 <= VAR_10) {
     VAR_16 = 0;
     VAR_17 = VAR_18;
    }

    VAR_13 = VAR_13->next_lun;
   }
  }
 }







stop_output:

 *(VAR_8 + VAR_16) = '\0';

 *VAR_9 = VAR_8 + (VAR_10 - VAR_17);
 VAR_16 -= (VAR_10 - VAR_17);
 if(VAR_16 > VAR_11) {
  VAR_16 = VAR_11;
 } else if(VAR_16 < 0){
  VAR_16 = 0;
  **VAR_9 = '\0';
 }
 return VAR_16;
}
