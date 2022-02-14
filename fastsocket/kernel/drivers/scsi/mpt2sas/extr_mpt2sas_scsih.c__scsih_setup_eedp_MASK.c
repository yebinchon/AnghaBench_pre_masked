
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct scsi_cmnd {TYPE_3__* device; } ;
struct TYPE_6__ {int PrimaryReferenceTag; } ;
struct TYPE_7__ {TYPE_1__ EEDP32; } ;
struct TYPE_9__ {int EEDPFlags; int EEDPBlockSize; TYPE_2__ CDB; } ;
struct TYPE_8__ {int sector_size; } ;
typedef TYPE_4__ Mpi2SCSIIORequest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;



 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 unsigned char FUNC_4 (struct scsi_cmnd*) ;
 unsigned char FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_6(struct scsi_cmnd *VAR_9, Mpi2SCSIIORequest_t *VAR_10)
{
 u16 VAR_11;
 unsigned char VAR_12 = FUNC_4(VAR_9);
 unsigned char VAR_13 = FUNC_5(VAR_9);

 if (VAR_13 == VAR_5 || VAR_12 == VAR_6)
  return;

 if (VAR_12 == VAR_7)
  VAR_11 = VAR_2;
 else if (VAR_12 == VAR_8)
  VAR_11 = VAR_4;
 else
  return;

 switch (VAR_13) {
 case 130:
 case 129:





  VAR_11 |= VAR_3 |
      VAR_1 |
      VAR_0;
  VAR_10->CDB.EEDP32.PrimaryReferenceTag =
      FUNC_0(FUNC_3(VAR_9));
  break;

 case 128:




  VAR_11 |= VAR_0;
  break;
 }
 VAR_10->EEDPBlockSize = FUNC_2(VAR_9->device->sector_size);
 VAR_10->EEDPFlags = FUNC_1(VAR_11);
}
