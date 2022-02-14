
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int accept_stat; } ;
struct TYPE_4__ {TYPE_1__ acc_hdr; } ;
struct rpc_reply_hdr {TYPE_2__ data; int reply_stat; } ;
struct rpc_adsp_rtos_app_to_modem_args_t {void* module; void* proc_id; void* cmd; void* gotit; int hdr; } ;
struct msm_adsp_module {int rpc_client; } ;
typedef int rpc_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct rpc_reply_hdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void**,int,int) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int ,struct rpc_adsp_rtos_app_to_modem_args_t*,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(uint32_t VAR_9, uint32_t VAR_10,
          struct msm_adsp_module *VAR_11)
{
 int VAR_12;
 struct rpc_adsp_rtos_app_to_modem_args_t VAR_13;
 struct rpc_reply_hdr *VAR_14;

 FUNC_5(&VAR_13.hdr,
     VAR_7,
     FUNC_3(VAR_11->rpc_client),
     VAR_6);

 VAR_13.gotit = FUNC_1(1);
 VAR_13.cmd = FUNC_1(VAR_9);
 VAR_13.proc_id = FUNC_1(VAR_8);
 VAR_13.module = FUNC_1(VAR_10);
 VAR_12 = FUNC_6(VAR_11->rpc_client, &VAR_13, sizeof(VAR_13));
 if (VAR_12 < 0) {
  FUNC_7("adsp: could not send RPC request: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_11->rpc_client,
     (void **)&VAR_14, -1, (5*VAR_3));
 if (VAR_12 < 0) {
  FUNC_7("adsp: error receiving RPC reply: %d (%d)\n",
         VAR_12, -VAR_2);
  return VAR_12;
 }

 if (FUNC_0(VAR_14->reply_stat) != VAR_4) {
  FUNC_7("adsp: RPC call was denied!\n");
  FUNC_2(VAR_14);
  return -VAR_1;
 }

 if (FUNC_0(VAR_14->data.acc_hdr.accept_stat) !=
     VAR_5) {
  FUNC_7("adsp error: RPC call was not successful (%d)\n",
         FUNC_0(VAR_14->data.acc_hdr.accept_stat));
  FUNC_2(VAR_14);
  return -VAR_0;
 }

 FUNC_2(VAR_14);
 return 0;
}
