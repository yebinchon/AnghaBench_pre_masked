
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_disk {int protection_type; } ;
struct scsi_device {int sector_size; int host; int writeable; scalar_t__ last_sector_bug; scalar_t__ changed; } ;
struct TYPE_3__ {unsigned int length; } ;
struct scsi_cmnd {int* cmnd; unsigned int transfersize; unsigned int underflow; int allowed; TYPE_1__ sdb; TYPE_2__* device; int cmd_len; int sc_data_direction; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct request {int cmd_flags; scalar_t__ cmd_type; struct scsi_cmnd* special; struct gendisk* rq_disk; } ;
struct gendisk {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef int block ;
struct TYPE_4__ {scalar_t__ use_10_for_rw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct gendisk*) ;
 int* FUNC_5 (int ,int ) ;
 int FUNC_6 (int*,int ,int ) ;
 scalar_t__ FUNC_7 (struct request*) ;
 int FUNC_8 (int ,struct scsi_cmnd*,char*,...) ;
 int FUNC_9 (struct scsi_device*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 struct scsi_disk* FUNC_11 (struct gendisk*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct request_queue*,struct request*,int) ;
 scalar_t__ FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (struct scsi_device*,struct request*) ;
 int FUNC_16 (struct scsi_device*,struct request*) ;
 int FUNC_17 (struct scsi_device*,struct request*) ;
 int VAR_26 ;
 int FUNC_18 (struct request*,scalar_t__,int) ;
 int FUNC_19 (struct scsi_cmnd*,int) ;
 int FUNC_20 (struct scsi_device*,struct request*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct request_queue *VAR_27, struct request *VAR_28)
{
 struct scsi_cmnd *VAR_29;
 struct scsi_device *VAR_30 = VAR_27->queuedata;
 struct gendisk *VAR_31 = VAR_28->rq_disk;
 struct scsi_disk *VAR_32;
 sector_t VAR_33 = FUNC_2(VAR_28);
 sector_t VAR_34;
 unsigned int VAR_35 = FUNC_3(VAR_28);
 int VAR_36, VAR_37;
 unsigned char VAR_38;





 if (VAR_28->cmd_flags & VAR_13) {
  VAR_36 = FUNC_20(VAR_30, VAR_28);
  goto out;
 } else if (VAR_28->cmd_flags & VAR_14) {
  VAR_36 = FUNC_16(VAR_30, VAR_28);
  goto out;
 } else if (VAR_28->cmd_type == VAR_16) {
  VAR_36 = FUNC_15(VAR_30, VAR_28);
  goto out;
 } else if (VAR_28->cmd_type != VAR_17) {
  VAR_36 = VAR_1;
  goto out;
 }
 VAR_36 = FUNC_17(VAR_30, VAR_28);
 if (VAR_36 != VAR_2)
  goto out;
 VAR_29 = VAR_28->special;
 VAR_32 = FUNC_11(VAR_31);



 VAR_36 = VAR_1;

 FUNC_0(1, FUNC_8(VAR_7, VAR_29,
     "sd_init_command: block=%llu, "
     "count=%d\n",
     (unsigned long long)VAR_33,
     VAR_35));

 if (!VAR_30 || !FUNC_9(VAR_30) ||
     VAR_33 + FUNC_3(VAR_28) > FUNC_4(VAR_31)) {
  FUNC_0(2, FUNC_8(VAR_7, VAR_29,
      "Finishing %u sectors\n",
      FUNC_3(VAR_28)));
  FUNC_0(2, FUNC_8(VAR_7, VAR_29,
      "Retry with 0x%p\n", VAR_29));
  goto out;
 }

 if (VAR_30->changed) {





  goto out;
 }





 VAR_34 = FUNC_4(VAR_31) - VAR_20 *
  (VAR_30->sector_size / 512);

 if (FUNC_21(VAR_30->last_sector_bug && VAR_33 + VAR_35 > VAR_34)) {
  if (VAR_33 < VAR_34) {

   VAR_35 = VAR_34 - VAR_33;
  } else {

   VAR_35 = VAR_30->sector_size / 512;
  }
 }

 FUNC_0(2, FUNC_8(VAR_7, VAR_29, "block=%llu\n",
     (unsigned long long)VAR_33));
 if (VAR_30->sector_size == 1024) {
  if ((VAR_33 & 1) || (FUNC_3(VAR_28) & 1)) {
   FUNC_8(VAR_6, VAR_29,
        "Bad block number requested\n");
   goto out;
  } else {
   VAR_33 = VAR_33 >> 1;
   VAR_35 = VAR_35 >> 1;
  }
 }
 if (VAR_30->sector_size == 2048) {
  if ((VAR_33 & 3) || (FUNC_3(VAR_28) & 3)) {
   FUNC_8(VAR_6, VAR_29,
        "Bad block number requested\n");
   goto out;
  } else {
   VAR_33 = VAR_33 >> 2;
   VAR_35 = VAR_35 >> 2;
  }
 }
 if (VAR_30->sector_size == 4096) {
  if ((VAR_33 & 7) || (FUNC_3(VAR_28) & 7)) {
   FUNC_8(VAR_6, VAR_29,
        "Bad block number requested\n");
   goto out;
  } else {
   VAR_33 = VAR_33 >> 3;
   VAR_35 = VAR_35 >> 3;
  }
 }
 if (FUNC_7(VAR_28) == VAR_23) {
  if (!VAR_30->writeable) {
   goto out;
  }
  VAR_29->cmnd[0] = VAR_25;
  VAR_29->sc_data_direction = VAR_4;

  if (FUNC_1(VAR_28))
   FUNC_18(VAR_28, VAR_33, VAR_30->sector_size);

 } else if (FUNC_7(VAR_28) == VAR_8) {
  VAR_29->cmnd[0] = VAR_12;
  VAR_29->sc_data_direction = VAR_3;
 } else {
  FUNC_8(VAR_6, VAR_29, "Unknown command %x\n", VAR_28->cmd_flags);
  goto out;
 }

 FUNC_0(2, FUNC_8(VAR_7, VAR_29,
     "%s %d/%u 512 byte blocks.\n",
     (FUNC_7(VAR_28) == VAR_23) ?
     "writing" : "reading", VAR_35,
     FUNC_3(VAR_28)));


 VAR_37 = FUNC_12(VAR_30->host, VAR_32->protection_type);
 if (VAR_37)
  VAR_38 = 1 << 5;
 else
  VAR_38 = 0;

 if (VAR_37 == VAR_18) {
  VAR_29->cmnd = FUNC_5(VAR_26, VAR_5);

  if (FUNC_21(VAR_29->cmnd == ((void*)0))) {
   VAR_36 = VAR_0;
   goto out;
  }

  VAR_29->cmd_len = VAR_19;
  FUNC_6(VAR_29->cmnd, 0, VAR_29->cmd_len);
  VAR_29->cmnd[0] = VAR_22;
  VAR_29->cmnd[7] = 0x18;
  VAR_29->cmnd[9] = (FUNC_7(VAR_28) == VAR_8) ? VAR_11 : VAR_24;
  VAR_29->cmnd[10] = VAR_38 | ((VAR_28->cmd_flags & VAR_15) ? 0x8 : 0);


  VAR_29->cmnd[12] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 56) & 0xff : 0;
  VAR_29->cmnd[13] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 48) & 0xff : 0;
  VAR_29->cmnd[14] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 40) & 0xff : 0;
  VAR_29->cmnd[15] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 32) & 0xff : 0;
  VAR_29->cmnd[16] = (unsigned char) (VAR_33 >> 24) & 0xff;
  VAR_29->cmnd[17] = (unsigned char) (VAR_33 >> 16) & 0xff;
  VAR_29->cmnd[18] = (unsigned char) (VAR_33 >> 8) & 0xff;
  VAR_29->cmnd[19] = (unsigned char) VAR_33 & 0xff;


  VAR_29->cmnd[20] = (unsigned char) (VAR_33 >> 24) & 0xff;
  VAR_29->cmnd[21] = (unsigned char) (VAR_33 >> 16) & 0xff;
  VAR_29->cmnd[22] = (unsigned char) (VAR_33 >> 8) & 0xff;
  VAR_29->cmnd[23] = (unsigned char) VAR_33 & 0xff;


  VAR_29->cmnd[28] = (unsigned char) (VAR_35 >> 24) & 0xff;
  VAR_29->cmnd[29] = (unsigned char) (VAR_35 >> 16) & 0xff;
  VAR_29->cmnd[30] = (unsigned char) (VAR_35 >> 8) & 0xff;
  VAR_29->cmnd[31] = (unsigned char) VAR_35 & 0xff;
 } else if (VAR_33 > 0xffffffff) {
  VAR_29->cmnd[0] += VAR_10 - VAR_12;
  VAR_29->cmnd[1] = VAR_38 | ((VAR_28->cmd_flags & VAR_15) ? 0x8 : 0);
  VAR_29->cmnd[2] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 56) & 0xff : 0;
  VAR_29->cmnd[3] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 48) & 0xff : 0;
  VAR_29->cmnd[4] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 40) & 0xff : 0;
  VAR_29->cmnd[5] = sizeof(VAR_33) > 4 ? (unsigned char) (VAR_33 >> 32) & 0xff : 0;
  VAR_29->cmnd[6] = (unsigned char) (VAR_33 >> 24) & 0xff;
  VAR_29->cmnd[7] = (unsigned char) (VAR_33 >> 16) & 0xff;
  VAR_29->cmnd[8] = (unsigned char) (VAR_33 >> 8) & 0xff;
  VAR_29->cmnd[9] = (unsigned char) VAR_33 & 0xff;
  VAR_29->cmnd[10] = (unsigned char) (VAR_35 >> 24) & 0xff;
  VAR_29->cmnd[11] = (unsigned char) (VAR_35 >> 16) & 0xff;
  VAR_29->cmnd[12] = (unsigned char) (VAR_35 >> 8) & 0xff;
  VAR_29->cmnd[13] = (unsigned char) VAR_35 & 0xff;
  VAR_29->cmnd[14] = VAR_29->cmnd[15] = 0;
 } else if ((VAR_35 > 0xff) || (VAR_33 > 0x1fffff) ||
     FUNC_10(VAR_29->device) ||
     VAR_29->device->use_10_for_rw) {
  if (VAR_35 > 0xffff)
   VAR_35 = 0xffff;

  VAR_29->cmnd[0] += VAR_9 - VAR_12;
  VAR_29->cmnd[1] = VAR_38 | ((VAR_28->cmd_flags & VAR_15) ? 0x8 : 0);
  VAR_29->cmnd[2] = (unsigned char) (VAR_33 >> 24) & 0xff;
  VAR_29->cmnd[3] = (unsigned char) (VAR_33 >> 16) & 0xff;
  VAR_29->cmnd[4] = (unsigned char) (VAR_33 >> 8) & 0xff;
  VAR_29->cmnd[5] = (unsigned char) VAR_33 & 0xff;
  VAR_29->cmnd[6] = VAR_29->cmnd[9] = 0;
  VAR_29->cmnd[7] = (unsigned char) (VAR_35 >> 8) & 0xff;
  VAR_29->cmnd[8] = (unsigned char) VAR_35 & 0xff;
 } else {
  if (FUNC_21(VAR_28->cmd_flags & VAR_15)) {






   FUNC_8(VAR_6, VAR_29,
        "FUA write on READ/WRITE(6) drive\n");
   goto out;
  }

  VAR_29->cmnd[1] |= (unsigned char) ((VAR_33 >> 16) & 0x1f);
  VAR_29->cmnd[2] = (unsigned char) ((VAR_33 >> 8) & 0xff);
  VAR_29->cmnd[3] = (unsigned char) VAR_33 & 0xff;
  VAR_29->cmnd[4] = (unsigned char) VAR_35;
  VAR_29->cmnd[5] = 0;
 }
 VAR_29->sdb.length = VAR_35 * VAR_30->sector_size;


 if (VAR_37 || FUNC_14(VAR_29))
  FUNC_19(VAR_29, VAR_37);






 VAR_29->transfersize = VAR_30->sector_size;
 VAR_29->underflow = VAR_35 << 9;
 VAR_29->allowed = VAR_21;





 VAR_36 = VAR_2;
 out:
 return FUNC_13(VAR_27, VAR_28, VAR_36);
}
