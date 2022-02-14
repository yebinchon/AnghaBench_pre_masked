
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int status; } ;
struct TYPE_10__ {int error_count; int start_frame; int actual_length; int status; } ;
struct TYPE_9__ {int seqnum; } ;
struct TYPE_8__ {int interval; int number_of_packets; int start_frame; int transfer_buffer_length; int transfer_flags; } ;
struct TYPE_12__ {TYPE_5__ ret_unlink; TYPE_4__ ret_submit; TYPE_3__ cmd_unlink; TYPE_2__ cmd_submit; } ;
struct TYPE_7__ {int command; int ep; int direction; int devid; int seqnum; } ;
struct usbip_header {TYPE_6__ u; TYPE_1__ base; } ;






 int FUNC_0 (char*,...) ;

void FUNC_1(struct usbip_header *VAR_0)
{
 FUNC_0("BASE: cmd %u seq %u devid %u dir %u ep %u\n",
   VAR_0->base.command,
   VAR_0->base.seqnum,
   VAR_0->base.devid,
   VAR_0->base.direction,
   VAR_0->base.ep);

 switch (VAR_0->base.command) {
 case 131:
  FUNC_0("CMD_SUBMIT: "
    "x_flags %u x_len %u sf %u #p %u iv %u\n",
    VAR_0->u.cmd_submit.transfer_flags,
    VAR_0->u.cmd_submit.transfer_buffer_length,
    VAR_0->u.cmd_submit.start_frame,
    VAR_0->u.cmd_submit.number_of_packets,
    VAR_0->u.cmd_submit.interval);
    break;
 case 130:
  FUNC_0("CMD_UNLINK: seq %u\n", VAR_0->u.cmd_unlink.seqnum);
  break;
 case 129:
  FUNC_0("RET_SUBMIT: st %d al %u sf %d ec %d\n",
    VAR_0->u.ret_submit.status,
    VAR_0->u.ret_submit.actual_length,
    VAR_0->u.ret_submit.start_frame,
    VAR_0->u.ret_submit.error_count);
 case 128:
  FUNC_0("RET_UNLINK: status %d\n", VAR_0->u.ret_unlink.status);
  break;
 default:

  FUNC_0("UNKNOWN\n");
 }
}
