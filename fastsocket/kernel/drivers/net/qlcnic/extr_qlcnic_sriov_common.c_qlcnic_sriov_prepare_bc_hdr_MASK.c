
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int* arg; int num; } ;
struct TYPE_3__ {int* arg; int num; } ;
struct qlcnic_cmd_args {int op_type; TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_bc_trans {int req_pay_size; int rsp_pay_size; int trans_id; scalar_t__ cmd_id; struct qlcnic_bc_hdr* rsp_hdr; struct qlcnic_bc_payload* rsp_pay; struct qlcnic_bc_payload* req_pay; struct qlcnic_bc_hdr* req_hdr; } ;
struct qlcnic_bc_payload {int dummy; } ;
struct qlcnic_bc_hdr {int version; int num_cmds; int frag_num; int seq_id; scalar_t__ cmd_op; scalar_t__ num_frags; int op_type; scalar_t__ msg_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_bc_hdr**,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_bc_trans *VAR_3,
           struct qlcnic_cmd_args *VAR_4,
           u16 VAR_5, u8 VAR_6)
{
 struct qlcnic_bc_hdr *VAR_7;
 int VAR_8;
 u32 VAR_9, VAR_10;
 u16 VAR_11;
 u8 VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_2;
 if (VAR_6 == VAR_1) {
  VAR_3->req_pay = (struct qlcnic_bc_payload *)VAR_4->req.arg;
  VAR_3->rsp_pay = (struct qlcnic_bc_payload *)VAR_4->rsp.arg;
  VAR_9 = VAR_4->req.num;
  VAR_3->req_pay_size = (VAR_9 * 4);
  VAR_9 = VAR_4->rsp.num;
  VAR_3->rsp_pay_size = (VAR_9 * 4);
  VAR_12 = VAR_4->req.arg[0] & 0xff;
  VAR_11 = (VAR_3->req_pay_size) % (VAR_10);
  VAR_13 = (VAR_3->req_pay_size) / (VAR_10);
  if (VAR_11)
   VAR_13++;
  VAR_14 = VAR_13;
  if (FUNC_0(&VAR_3->req_hdr, VAR_13))
   return -VAR_0;
  VAR_11 = (VAR_3->rsp_pay_size) % (VAR_10);
  VAR_13 = (VAR_3->rsp_pay_size) / (VAR_10);
  if (VAR_11)
   VAR_13++;
  if (FUNC_0(&VAR_3->rsp_hdr, VAR_13))
   return -VAR_0;
  VAR_13 = VAR_14;
  VAR_7 = VAR_3->req_hdr;
 } else {
  VAR_4->req.arg = (u32 *)VAR_3->req_pay;
  VAR_4->rsp.arg = (u32 *)VAR_3->rsp_pay;
  VAR_12 = VAR_4->req.arg[0] & 0xff;
  VAR_11 = (VAR_3->rsp_pay_size) % (VAR_10);
  VAR_13 = (VAR_3->rsp_pay_size) / (VAR_10);
  if (VAR_11)
   VAR_13++;
  VAR_4->req.num = VAR_3->req_pay_size / 4;
  VAR_4->rsp.num = VAR_3->rsp_pay_size / 4;
  VAR_7 = VAR_3->rsp_hdr;
 }

 VAR_3->trans_id = VAR_5;
 VAR_3->cmd_id = VAR_12;
 for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++) {
  VAR_7[VAR_8].version = 2;
  VAR_7[VAR_8].msg_type = VAR_6;
  VAR_7[VAR_8].op_type = VAR_4->op_type;
  VAR_7[VAR_8].num_cmds = 1;
  VAR_7[VAR_8].num_frags = VAR_13;
  VAR_7[VAR_8].frag_num = VAR_8 + 1;
  VAR_7[VAR_8].cmd_op = VAR_12;
  VAR_7[VAR_8].seq_id = VAR_5;
 }
 return 0;
}
