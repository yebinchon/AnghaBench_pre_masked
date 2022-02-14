
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ sc_data_direction; int cmd_len; int cmnd; } ;
struct TYPE_2__ {int flags; unsigned int lbam; unsigned int lbah; int feature; int protocol; int command; } ;
struct ata_queued_cmd {TYPE_1__ tf; int complete_fn; int cdb; struct ata_device* dev; struct scsi_cmnd* scsicmd; } ;
struct ata_device {int flags; int cdb_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_3 (struct ata_queued_cmd*) ;
 int VAR_13 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 unsigned int FUNC_6 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_7(struct ata_queued_cmd *VAR_14)
{
 struct scsi_cmnd *VAR_15 = VAR_14->scsicmd;
 struct ata_device *VAR_16 = VAR_14->dev;
 int VAR_17 = (VAR_15->sc_data_direction == VAR_11);
 int VAR_18 = !VAR_17 && (VAR_16->flags & VAR_7);
 unsigned int VAR_19;

 FUNC_5(VAR_14->cdb, 0, VAR_16->cdb_len);
 FUNC_4(VAR_14->cdb, VAR_15->cmnd, VAR_15->cmd_len);

 VAR_14->complete_fn = VAR_13;

 VAR_14->tf.flags |= VAR_9 | VAR_8;
 if (VAR_15->sc_data_direction == VAR_12) {
  VAR_14->tf.flags |= VAR_10;
  FUNC_0("direction: write\n");
 }

 VAR_14->tf.command = VAR_5;
 FUNC_2(VAR_14);


 if (!VAR_17 && !VAR_18 && FUNC_3(VAR_14))
  VAR_18 = 1;






 VAR_19 = FUNC_6(FUNC_1(VAR_14), (unsigned int)63 * 1024);
 if (VAR_19 & 0x1)
  VAR_19++;

 VAR_14->tf.lbam = (VAR_19 & 0xFF);
 VAR_14->tf.lbah = (VAR_19 >> 8);

 if (VAR_17)
  VAR_14->tf.protocol = VAR_3;
 else if (VAR_18)
  VAR_14->tf.protocol = VAR_4;
 else {

  VAR_14->tf.protocol = VAR_2;
  VAR_14->tf.feature |= VAR_1;

  if ((VAR_16->flags & VAR_6) &&
      (VAR_15->sc_data_direction != VAR_12))

   VAR_14->tf.feature |= VAR_0;
 }




 return 0;
}
