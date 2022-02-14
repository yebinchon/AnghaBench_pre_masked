
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct scsi_cmnd {scalar_t__* cmnd; } ;
struct _raid_device {scalar_t__ block_exponent; scalar_t__ max_lba; scalar_t__ stripe_sz; scalar_t__ stripe_exponent; scalar_t__ num_pds; int * pd_handle; } ;
struct MPT2SAS_ADAPTER {int dummy; } ;
typedef int __be64 ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__* CDB32; } ;
struct TYPE_5__ {void* DevHandle; TYPE_1__ CDB; } ;
typedef TYPE_2__ Mpi2SCSIIORequest_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_7(struct MPT2SAS_ADAPTER *VAR_4, struct scsi_cmnd *VAR_5,
 struct _raid_device *VAR_6, Mpi2SCSIIORequest_t *VAR_7,
 u16 VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;
 u8 VAR_17, *VAR_18, VAR_19;
 u8 VAR_20 = VAR_5->cmnd[0];
 u64 VAR_21;




 if (VAR_20 == VAR_1 || VAR_20 == VAR_0 ||
     VAR_20 == VAR_3 || VAR_20 == VAR_2) {
  VAR_18 = VAR_7->CDB.CDB32;

  if ((VAR_20 < VAR_1) || !(VAR_18[2] | VAR_18[3] | VAR_18[4]
   | VAR_18[5])) {
   VAR_14 = FUNC_6(VAR_5) >>
       VAR_6->block_exponent;
   VAR_19 = (VAR_20 < VAR_1) ? 2 : 6;

   VAR_9 = FUNC_1(*(__be32 *)(&VAR_18[VAR_19]));

   if (((u64)VAR_9 + (u64)VAR_14 - 1) <=
       (u32)VAR_6->max_lba) {
    VAR_15 = VAR_6->stripe_sz;
    VAR_16 = VAR_6->stripe_exponent;
    VAR_11 = VAR_9 & (VAR_15 - 1);


    if ((VAR_11 + VAR_14) <= VAR_15) {
     VAR_17 = VAR_6->num_pds;
     VAR_10 = VAR_9 >> VAR_16;
     VAR_12 = VAR_10 / VAR_17;
     VAR_13 = VAR_10 % VAR_17;
     VAR_10 = (VAR_12 << VAR_16) +
         VAR_11;
     VAR_7->DevHandle =
      FUNC_5(VAR_6->
          pd_handle[VAR_13]);
     (*(__be32 *)(&VAR_18[VAR_19])) =
      FUNC_3(VAR_10);



     FUNC_0(VAR_4, VAR_8, 1);
    }
   }
  } else {
   VAR_14 = FUNC_6(VAR_5) >>
       VAR_6->block_exponent;

   VAR_21 = FUNC_2(*(__be64 *)(&VAR_18[2]));

   if ((VAR_21 + (u64)VAR_14 - 1) <=
       VAR_6->max_lba) {
    VAR_15 = VAR_6->stripe_sz;
    VAR_16 = VAR_6->stripe_exponent;
    VAR_11 = (u32) (VAR_21 & (VAR_15 - 1));


    if ((VAR_11 + VAR_14) <= VAR_15) {
     VAR_17 = VAR_6->num_pds;
     VAR_10 = (u32)(VAR_21 >> VAR_16);
     VAR_12 = VAR_10 / VAR_17;
     VAR_13 = VAR_10 % VAR_17;
     VAR_10 = (VAR_12 << VAR_16) +
         VAR_11;
     VAR_7->DevHandle =
      FUNC_5(VAR_6->
          pd_handle[VAR_13]);
     (*(__be64 *)(&VAR_18[2])) =
         FUNC_4((u64)VAR_10);



     FUNC_0(VAR_4, VAR_8, 1);
    }
   }
  }
 }
}
