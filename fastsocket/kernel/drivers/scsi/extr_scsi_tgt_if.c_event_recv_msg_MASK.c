
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int type; } ;
struct TYPE_8__ {int result; int itn_id; int host_no; } ;
struct TYPE_7__ {int result; int mid; int itn_id; int host_no; } ;
struct TYPE_6__ {int rw; int sense_len; int sense_uaddr; int len; int uaddr; int tag; int result; int itn_id; int host_no; } ;
struct TYPE_9__ {TYPE_3__ it_nexus_rsp; TYPE_2__ tsk_mgmt_rsp; TYPE_1__ cmd_rsp; } ;
struct tgt_event {TYPE_5__ hdr; TYPE_4__ p; } ;


 int VAR_0 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tgt_event *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->hdr.type) {
 case 130:
  VAR_2 = FUNC_1(VAR_1->p.cmd_rsp.host_no,
        VAR_1->p.cmd_rsp.itn_id,
        VAR_1->p.cmd_rsp.result,
        VAR_1->p.cmd_rsp.tag,
        VAR_1->p.cmd_rsp.uaddr,
        VAR_1->p.cmd_rsp.len,
        VAR_1->p.cmd_rsp.sense_uaddr,
        VAR_1->p.cmd_rsp.sense_len,
        VAR_1->p.cmd_rsp.rw);
  break;
 case 128:
  VAR_2 = FUNC_3(VAR_1->p.tsk_mgmt_rsp.host_no,
            VAR_1->p.tsk_mgmt_rsp.itn_id,
            VAR_1->p.tsk_mgmt_rsp.mid,
            VAR_1->p.tsk_mgmt_rsp.result);
  break;
 case 129:
  VAR_2 = FUNC_2(VAR_1->p.it_nexus_rsp.host_no,
         VAR_1->p.it_nexus_rsp.itn_id,
         VAR_1->p.it_nexus_rsp.result);
  break;
 default:
  FUNC_0("unknown type %d\n", VAR_1->hdr.type);
  VAR_2 = -VAR_0;
 }

 return VAR_2;
}
