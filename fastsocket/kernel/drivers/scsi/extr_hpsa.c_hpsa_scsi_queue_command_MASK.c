
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;unsigned char* host_scribble; int cmd_len; unsigned char* cmnd; int sc_data_direction; TYPE_7__* device; } ;
struct hpsa_scsi_dev_t {unsigned char* scsi3addr; } ;
struct ctlr_info {TYPE_6__* pdev; int lock; int lockup_detected; } ;
struct TYPE_11__ {int Direction; int Attribute; int Type; } ;
struct TYPE_12__ {unsigned char* CDB; int CDBLen; TYPE_4__ Type; scalar_t__ Timeout; } ;
struct TYPE_9__ {int lower; } ;
struct TYPE_8__ {unsigned char* LunAddrBytes; } ;
struct TYPE_10__ {TYPE_2__ Tag; TYPE_1__ LUN; scalar_t__ ReplyQueue; } ;
struct CommandList {int cmdindex; TYPE_5__ Request; TYPE_3__ Header; struct scsi_cmnd* scsi_cmd; int cmd_type; } ;
typedef int scsi3addr ;
struct TYPE_14__ {struct hpsa_scsi_dev_t* hostdata; } ;
struct TYPE_13__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
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
 int VAR_11 ;
 struct CommandList* FUNC_2 (struct ctlr_info*) ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*) ;
 scalar_t__ FUNC_6 (struct ctlr_info*,struct CommandList*,struct scsi_cmnd*) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 struct ctlr_info* FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct scsi_cmnd *VAR_12,
 void (*VAR_13)(struct scsi_cmnd *))
{
 struct ctlr_info *VAR_14;
 struct hpsa_scsi_dev_t *VAR_15;
 unsigned char VAR_16[8];
 struct CommandList *VAR_17;
 unsigned long VAR_18;


 VAR_14 = FUNC_9(VAR_12->device);
 VAR_15 = VAR_12->device->hostdata;
 if (!VAR_15) {
  VAR_12->result = VAR_3 << 16;
  VAR_13(VAR_12);
  return 0;
 }
 FUNC_7(VAR_16, VAR_15->scsi3addr, sizeof(VAR_16));

 FUNC_10(&VAR_14->lock, VAR_18);
 if (FUNC_12(VAR_14->lockup_detected)) {
  FUNC_11(&VAR_14->lock, VAR_18);
  VAR_12->result = VAR_2 << 16;
  VAR_13(VAR_12);
  return 0;
 }
 FUNC_11(&VAR_14->lock, VAR_18);
 VAR_17 = FUNC_2(VAR_14);
 if (VAR_17 == ((void*)0)) {
  FUNC_4(&VAR_14->pdev->dev, "cmd_alloc returned NULL!\n");
  return VAR_6;
 }



 VAR_12->scsi_done = VAR_13;


 VAR_12->host_scribble = (unsigned char *) VAR_17;

 VAR_17->cmd_type = VAR_1;
 VAR_17->scsi_cmd = VAR_12;
 VAR_17->Header.ReplyQueue = 0;
 FUNC_7(&VAR_17->Header.LUN.LunAddrBytes[0], &VAR_16[0], 8);
 VAR_17->Header.Tag.lower = (VAR_17->cmdindex << VAR_5);
 VAR_17->Header.Tag.lower |= VAR_4;



 VAR_17->Request.Timeout = 0;
 FUNC_8(VAR_17->Request.CDB, 0, sizeof(VAR_17->Request.CDB));
 FUNC_1(VAR_12->cmd_len > sizeof(VAR_17->Request.CDB));
 VAR_17->Request.CDBLen = VAR_12->cmd_len;
 FUNC_7(VAR_17->Request.CDB, VAR_12->cmnd, VAR_12->cmd_len);
 VAR_17->Request.Type.Type = VAR_7;
 VAR_17->Request.Type.Attribute = VAR_0;
 switch (VAR_12->sc_data_direction) {
 case 128:
  VAR_17->Request.Type.Direction = VAR_11;
  break;
 case 130:
  VAR_17->Request.Type.Direction = VAR_9;
  break;
 case 129:
  VAR_17->Request.Type.Direction = VAR_8;
  break;
 case 131:





  VAR_17->Request.Type.Direction = VAR_10;
  break;

 default:
  FUNC_4(&VAR_14->pdev->dev, "unknown data direction: %d\n",
   VAR_12->sc_data_direction);
  FUNC_0();
  break;
 }

 if (FUNC_6(VAR_14, VAR_17, VAR_12) < 0) {
  FUNC_3(VAR_14, VAR_17);
  return VAR_6;
 }
 FUNC_5(VAR_14, VAR_17);

 return 0;
}
