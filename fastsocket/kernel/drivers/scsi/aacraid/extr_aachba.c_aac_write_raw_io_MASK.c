
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sgentryraw {int dummy; } ;
struct sge_ieee1212 {int dummy; } ;
struct scsi_cmnd {int dummy; } ;
struct fib {struct aac_dev* dev; } ;
struct aac_raw_io2 {int sgeCnt; void* flags; void* cid; void* byteCount; void* blockHigh; void* blockLow; } ;
struct TYPE_4__ {int count; } ;
struct aac_raw_io {TYPE_2__ sg; scalar_t__ bpComplete; scalar_t__ bpTotal; void* flags; void* cid; void* count; void** block; } ;
struct aac_fibhdr {int dummy; } ;
struct aac_dev {scalar_t__ comm_interface; int max_fib_size; int cache_protected; TYPE_1__* scsi_host_ptr; int sync_mode; } ;
typedef int fib_callback ;
struct TYPE_3__ {int sg_tablesize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct scsi_cmnd*,TYPE_2__*) ;
 int FUNC_2 (struct scsi_cmnd*,struct aac_raw_io2*,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct fib*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct aac_raw_io2*,int ,int) ;
 int FUNC_10 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct fib * VAR_10, struct scsi_cmnd * VAR_11, u64 VAR_12, u32 VAR_13, int VAR_14)
{
 struct aac_dev *VAR_15 = VAR_10->dev;
 u16 VAR_16, VAR_17;

 FUNC_3(VAR_10);
 if (VAR_15->comm_interface == VAR_0 && !VAR_15->sync_mode) {
  struct aac_raw_io2 *VAR_18;
  VAR_18 = (struct aac_raw_io2 *) FUNC_7(VAR_10);
  FUNC_9(VAR_18, 0, sizeof(struct aac_raw_io2));
  VAR_18->blockLow = FUNC_6((u32)(VAR_12&0xffffffff));
  VAR_18->blockHigh = FUNC_6((u32)((VAR_12&0xffffffff00000000LL)>>32));
  VAR_18->byteCount = FUNC_6(VAR_13<<9);
  VAR_18->cid = FUNC_5(FUNC_10(VAR_11));
  VAR_18->flags = (VAR_14 && ((VAR_8 & 5) != 1) &&
         (((VAR_8 & 5) != 5) || !VAR_10->dev->cache_protected)) ?
   FUNC_5(VAR_5|VAR_4) :
   FUNC_5(VAR_5);
  FUNC_2(VAR_11, VAR_18, VAR_15->scsi_host_ptr->sg_tablesize);
  VAR_17 = VAR_2;
  VAR_16 = sizeof(struct aac_raw_io2) +
   ((FUNC_8(VAR_18->sgeCnt)-1) * sizeof(struct sge_ieee1212));
 } else {
  struct aac_raw_io *VAR_19;
  VAR_19 = (struct aac_raw_io *) FUNC_7(VAR_10);
  VAR_19->block[0] = FUNC_6((u32)(VAR_12&0xffffffff));
  VAR_19->block[1] = FUNC_6((u32)((VAR_12&0xffffffff00000000LL)>>32));
  VAR_19->count = FUNC_6(VAR_13<<9);
  VAR_19->cid = FUNC_5(FUNC_10(VAR_11));
  VAR_19->flags = (VAR_14 && ((VAR_8 & 5) != 1) &&
         (((VAR_8 & 5) != 5) || !VAR_10->dev->cache_protected)) ?
   FUNC_5(VAR_7|VAR_6) :
   FUNC_5(VAR_7);
  VAR_19->bpTotal = 0;
  VAR_19->bpComplete = 0;
  FUNC_1(VAR_11, &VAR_19->sg);
  VAR_17 = VAR_1;
  VAR_16 = sizeof(struct aac_raw_io) +
   ((FUNC_8(VAR_19->sg.count)-1) * sizeof (struct sgentryraw));
 }

 FUNC_0(VAR_16 > (VAR_10->dev->max_fib_size - sizeof(struct aac_fibhdr)));



 return FUNC_4(VAR_17,
     VAR_10,
     VAR_16,
     VAR_3,
     0, 1,
     (fib_callback) VAR_9,
     (void *) VAR_11);
}
