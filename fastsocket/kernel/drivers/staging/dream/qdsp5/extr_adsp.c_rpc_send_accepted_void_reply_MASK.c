
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ verf_length; scalar_t__ verf_flavor; void* accept_stat; } ;
struct TYPE_4__ {TYPE_1__ acc_hdr; } ;
struct rpc_reply_hdr {TYPE_2__ data; void* reply_stat; void* type; void* xid; } ;
struct msm_rpc_endpoint {int dummy; } ;
typedef int reply_buf ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct msm_rpc_endpoint *VAR_2,
     uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5 = 0;
 uint8_t VAR_6[sizeof(struct rpc_reply_hdr)];
 struct rpc_reply_hdr *VAR_7 = (struct rpc_reply_hdr *)VAR_6;

 VAR_7->xid = FUNC_0(VAR_3);
 VAR_7->type = FUNC_0(1);
 VAR_7->reply_stat = FUNC_0(VAR_0);

 VAR_7->data.acc_hdr.accept_stat = FUNC_0(VAR_4);
 VAR_7->data.acc_hdr.verf_flavor = 0;
 VAR_7->data.acc_hdr.verf_length = 0;

 VAR_5 = FUNC_1(VAR_1, VAR_6, sizeof(VAR_6));
 if (VAR_5 < 0)
  FUNC_2("adsp: could not write RPC response: %d\n", VAR_5);
 return VAR_5;
}
