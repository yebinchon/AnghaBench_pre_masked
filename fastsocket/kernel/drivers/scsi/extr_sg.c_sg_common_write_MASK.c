
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_16__ {int dxfer_direction; int duration; scalar_t__ cmd_len; scalar_t__ resid; scalar_t__ driver_status; scalar_t__ host_status; scalar_t__ info; scalar_t__ msg_status; scalar_t__ masked_status; scalar_t__ status; } ;
typedef TYPE_3__ sg_io_hdr_t ;
struct TYPE_19__ {int disk; TYPE_2__* device; scalar_t__ detached; } ;
struct TYPE_18__ {int f_ref; TYPE_6__* parentdp; } ;
struct TYPE_14__ {unsigned char cmd_opcode; } ;
struct TYPE_17__ {TYPE_11__* rq; scalar_t__ bio; TYPE_1__ data; TYPE_3__ header; } ;
struct TYPE_15__ {int request_queue; } ;
struct TYPE_13__ {int timeout; } ;
typedef TYPE_4__ Sg_request ;
typedef TYPE_5__ Sg_fd ;
typedef TYPE_6__ Sg_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;




 int FUNC_1 (TYPE_11__*,int ) ;
 int FUNC_2 (int ,int ,TYPE_11__*,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_4__*,unsigned char*) ;

__attribute__((used)) static int
FUNC_8(Sg_fd * VAR_8, Sg_request * VAR_9,
  unsigned char *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14;
 Sg_device *VAR_15 = VAR_8->parentdp;
 sg_io_hdr_t *VAR_16 = &VAR_9->header;

 VAR_9->data.cmd_opcode = VAR_10[0];
 VAR_16->status = 0;
 VAR_16->masked_status = 0;
 VAR_16->msg_status = 0;
 VAR_16->info = 0;
 VAR_16->host_status = 0;
 VAR_16->driver_status = 0;
 VAR_16->resid = 0;
 FUNC_0(4, FUNC_5("sg_common_write:  scsi opcode=0x%02x, cmd_size=%d\n",
     (int) VAR_10[0], (int) VAR_16->cmd_len));

 VAR_13 = FUNC_7(VAR_9, VAR_10);
 if (VAR_13) {
  FUNC_0(1, FUNC_5("sg_common_write: start_req err=%d\n", VAR_13));
  FUNC_6(VAR_9);
  return VAR_13;
 }
 if (VAR_15->detached) {
  if (VAR_9->bio)
   FUNC_1(VAR_9->rq, -VAR_4);
  FUNC_6(VAR_9);
  return -VAR_5;
 }

 switch (VAR_16->dxfer_direction) {
 case 129:
 case 131:
  VAR_14 = VAR_1;
  break;
 case 130:
  VAR_14 = VAR_3;
  break;
 case 128:
  VAR_14 = VAR_0;
  break;
 default:
  VAR_14 = VAR_2;
  break;
 }
 VAR_16->duration = FUNC_3(VAR_6);

 VAR_9->rq->timeout = VAR_11;
 FUNC_4(&VAR_8->f_ref);
 FUNC_2(VAR_15->device->request_queue, VAR_15->disk,
         VAR_9->rq, 1, VAR_7);
 return 0;
}
