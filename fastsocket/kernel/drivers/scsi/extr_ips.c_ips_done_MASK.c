
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_20__ {scalar_t__ transfer_length; int cmd_attribute; } ;
struct TYPE_21__ {int breakup; scalar_t__ data_len; int bus; int target_id; TYPE_4__* scsi_cmd; TYPE_1__ dcdb; scalar_t__ sg_break; } ;
typedef TYPE_2__ ips_scb_t ;
struct TYPE_22__ {int* dcdb_active; int num_ioctl; } ;
typedef TYPE_3__ ips_ha_t ;
struct TYPE_23__ {size_t* cmnd; int result; int (* scsi_done ) (TYPE_4__*) ;} ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int* VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;
 struct scatterlist* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_14(ips_ha_t * VAR_4, ips_scb_t * VAR_5)
{
 int VAR_6;

 FUNC_0("ips_done", 1);

 if (!VAR_5)
  return;

 if ((VAR_5->scsi_cmd) && (FUNC_4(VAR_5->scsi_cmd))) {
  FUNC_1(VAR_4, VAR_5);
  VAR_4->num_ioctl--;
 } else {





  if ((VAR_5->breakup) || (VAR_5->sg_break)) {
                        struct scatterlist *VAR_7;
                        int VAR_8, VAR_9, VAR_10 = 0;


   VAR_5->data_len = 0;

                        VAR_7 = FUNC_7(VAR_5->scsi_cmd);


                        VAR_9 = VAR_5->breakup;
                        for (VAR_8 = 0; VAR_8 < VAR_5->breakup; VAR_8++)
                                VAR_7 = FUNC_10(VAR_7);


                        FUNC_2(VAR_4,
                                               FUNC_8(VAR_7),
                                               VAR_5, VAR_10++,
                                               FUNC_9(VAR_7));

                        for (; VAR_9 < FUNC_6(VAR_5->scsi_cmd);
                             VAR_9++, VAR_7 = FUNC_10(VAR_7)) {
                                if (FUNC_2
                                    (VAR_4,
                                     FUNC_8(VAR_7),
                                     VAR_5, VAR_10++,
                                     FUNC_9(VAR_7)) < 0)
                                        break;
                        }

   VAR_5->dcdb.transfer_length = VAR_5->data_len;
   VAR_5->dcdb.cmd_attribute |=
       VAR_3[VAR_5->scsi_cmd->cmnd[0]];

   if (!(VAR_5->dcdb.cmd_attribute & 0x3))
    VAR_5->dcdb.transfer_length = 0;

   if (VAR_5->data_len >= VAR_1) {
    VAR_5->dcdb.cmd_attribute |= VAR_2;
    VAR_5->dcdb.transfer_length = 0;
   }

   VAR_6 = FUNC_5(VAR_4, VAR_5);

   switch (VAR_6) {
   case 129:
    if (VAR_5->scsi_cmd) {
     VAR_5->scsi_cmd->result = VAR_0 << 16;
     VAR_5->scsi_cmd->scsi_done(VAR_5->scsi_cmd);
    }

    FUNC_3(VAR_4, VAR_5);
    break;
   case 128:
    if (VAR_5->scsi_cmd) {
     VAR_5->scsi_cmd->result = VAR_0 << 16;
     VAR_5->scsi_cmd->scsi_done(VAR_5->scsi_cmd);
    }

    FUNC_3(VAR_4, VAR_5);
    break;
   default:
    break;
   }

   return;
  }
 }

 if (VAR_5->bus) {
  VAR_4->dcdb_active[VAR_5->bus - 1] &= ~(1 << VAR_5->target_id);
 }

 VAR_5->scsi_cmd->scsi_done(VAR_5->scsi_cmd);

 FUNC_3(VAR_4, VAR_5);
}
