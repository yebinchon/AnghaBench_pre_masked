
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int SyncRegister; int AckWidth; } ;
typedef TYPE_3__ sync_data ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_9__ {scalar_t__ FifoCount; void* TransferMode; TYPE_3__* Sync; } ;
typedef TYPE_4__ nsp_hw_data ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {unsigned int io_port; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (unsigned int,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 unsigned char FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_15)
{
 unsigned int VAR_16 = VAR_15->device->host->io_port;
 unsigned char VAR_17 = FUNC_2(VAR_15);

 nsp_hw_data *VAR_18 = (nsp_hw_data *)VAR_15->device->host->hostdata;
 sync_data *VAR_19 = &(VAR_18->Sync[VAR_17]);




 FUNC_0(VAR_16, VAR_12, VAR_19->SyncRegister);
 FUNC_0(VAR_16, VAR_0, VAR_19->AckWidth);

 if (FUNC_3(VAR_15) % 4 != 0 ||
     FUNC_3(VAR_15) <= VAR_8 ) {
  VAR_18->TransferMode = VAR_6;
 } else if (VAR_14 == VAR_3) {
  VAR_18->TransferMode = VAR_7;
 } else if (VAR_14 == VAR_2) {
  VAR_18->TransferMode = VAR_5;
 } else {
  VAR_18->TransferMode = VAR_6;
 }


 FUNC_1(VAR_18, VAR_13);


  VAR_18->FifoCount = 0;
 FUNC_0(VAR_16, VAR_9, VAR_10 |
       VAR_1 |
       VAR_11 |
       VAR_4);

 return 0;
}
