
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct scsi_cmnd {TYPE_3__* device; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_11__ {void* EEDPBlockSize; } ;
struct TYPE_7__ {int PrimaryReferenceTag; } ;
struct TYPE_8__ {TYPE_1__ EEDP32; } ;
struct TYPE_10__ {void* EEDPFlags; TYPE_2__ CDB; } ;
struct TYPE_9__ {int sector_size; } ;
typedef TYPE_4__ Mpi2SCSIIORequest_t ;
typedef TYPE_5__ Mpi25SCSIIORequest_t ;


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
 void* FUNC_1 (int) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 unsigned char FUNC_3 (struct scsi_cmnd*) ;
 unsigned char FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_9, struct scsi_cmnd *VAR_10,
 Mpi2SCSIIORequest_t *VAR_11)
{
 u16 VAR_12;
 unsigned char VAR_13 = FUNC_3(VAR_10);
 unsigned char VAR_14 = FUNC_4(VAR_10);
 Mpi25SCSIIORequest_t *VAR_15 =
    (Mpi25SCSIIORequest_t *)VAR_11;

 if (VAR_14 == VAR_5 || VAR_13 == VAR_6)
  return;

 if (VAR_13 == VAR_7)
  VAR_12 = VAR_2;
 else if (VAR_13 == VAR_8)
  VAR_12 = VAR_4;
 else
  return;

 switch (VAR_14) {
 case 130:
 case 129:





  VAR_12 |= VAR_3 |
      VAR_1 |
      VAR_0;
  VAR_11->CDB.EEDP32.PrimaryReferenceTag =
      FUNC_0(FUNC_2(VAR_10));
  break;

 case 128:




  VAR_12 |= VAR_0;

  break;
 }

 VAR_15->EEDPBlockSize =
     FUNC_1(VAR_10->device->sector_size);
 VAR_11->EEDPFlags = FUNC_1(VAR_12);
}
