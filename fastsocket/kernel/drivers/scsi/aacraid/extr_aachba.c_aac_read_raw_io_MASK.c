
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
struct aac_dev {scalar_t__ comm_interface; int max_fib_size; TYPE_1__* scsi_host_ptr; int sync_mode; } ;
typedef int fib_callback ;
struct TYPE_3__ {int sg_tablesize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct scsi_cmnd*,TYPE_2__*) ;
 int FUNC_2 (struct scsi_cmnd*,struct aac_raw_io2*,int ) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct fib*) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct aac_raw_io2*,int ,int) ;
 int FUNC_10 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct fib * VAR_7, struct scsi_cmnd * VAR_8, u64 VAR_9, u32 VAR_10)
{
 struct aac_dev *VAR_11 = VAR_7->dev;
 u16 VAR_12, VAR_13;

 FUNC_3(VAR_7);
 if (VAR_11->comm_interface == VAR_0 && !VAR_11->sync_mode) {
  struct aac_raw_io2 *VAR_14;
  VAR_14 = (struct aac_raw_io2 *) FUNC_7(VAR_7);
  FUNC_9(VAR_14, 0, sizeof(struct aac_raw_io2));
  VAR_14->blockLow = FUNC_6((u32)(VAR_9&0xffffffff));
  VAR_14->blockHigh = FUNC_6((u32)((VAR_9&0xffffffff00000000LL)>>32));
  VAR_14->byteCount = FUNC_6(VAR_10<<9);
  VAR_14->cid = FUNC_5(FUNC_10(VAR_8));
  VAR_14->flags = FUNC_5(VAR_4);
  FUNC_2(VAR_8, VAR_14, VAR_11->scsi_host_ptr->sg_tablesize);
  VAR_13 = VAR_2;
  VAR_12 = sizeof(struct aac_raw_io2) +
   ((FUNC_8(VAR_14->sgeCnt)-1) * sizeof(struct sge_ieee1212));
 } else {
  struct aac_raw_io *VAR_15;
  VAR_15 = (struct aac_raw_io *) FUNC_7(VAR_7);
  VAR_15->block[0] = FUNC_6((u32)(VAR_9&0xffffffff));
  VAR_15->block[1] = FUNC_6((u32)((VAR_9&0xffffffff00000000LL)>>32));
  VAR_15->count = FUNC_6(VAR_10<<9);
  VAR_15->cid = FUNC_5(FUNC_10(VAR_8));
  VAR_15->flags = FUNC_5(VAR_5);
  VAR_15->bpTotal = 0;
  VAR_15->bpComplete = 0;
  FUNC_1(VAR_8, &VAR_15->sg);
  VAR_13 = VAR_1;
  VAR_12 = sizeof(struct aac_raw_io) +
   ((FUNC_8(VAR_15->sg.count)-1) * sizeof(struct sgentryraw));
 }

 FUNC_0(VAR_12 > (VAR_7->dev->max_fib_size - sizeof(struct aac_fibhdr)));



 return FUNC_4(VAR_13,
     VAR_7,
     VAR_12,
     VAR_3,
     0, 1,
     (fib_callback) VAR_6,
     (void *) VAR_8);
}
