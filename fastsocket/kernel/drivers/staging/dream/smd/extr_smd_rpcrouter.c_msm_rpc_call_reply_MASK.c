
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rpc_request_hdr {scalar_t__ xid; void* procedure; int vers; int prog; void* rpc_vers; } ;
struct TYPE_3__ {scalar_t__ accept_stat; } ;
struct TYPE_4__ {TYPE_1__ acc_hdr; } ;
struct rpc_reply_hdr {scalar_t__ type; scalar_t__ xid; scalar_t__ reply_stat; TYPE_2__ data; } ;
struct msm_rpc_endpoint {int dst_pid; int dst_vers; int dst_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct rpc_reply_hdr*) ;
 int FUNC_3 (void*,struct rpc_reply_hdr*,int) ;
 int FUNC_4 (struct rpc_request_hdr*,int ,int) ;
 int FUNC_5 (struct msm_rpc_endpoint*,void*,int,long) ;
 int FUNC_6 (struct msm_rpc_endpoint*,struct rpc_request_hdr*,int) ;
 int VAR_6 ;

int FUNC_7(struct msm_rpc_endpoint *VAR_7, uint32_t VAR_8,
         void *VAR_9, int VAR_10,
         void *VAR_11, int VAR_12,
         long VAR_13)
{
 struct rpc_request_hdr *VAR_14 = VAR_9;
 struct rpc_reply_hdr *VAR_15;
 int VAR_16;

 if (VAR_10 < sizeof(*VAR_14))
  return -VAR_5;

 if (VAR_7->dst_pid == 0xffffffff)
  return -VAR_3;




 FUNC_4(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->xid = FUNC_1(FUNC_0(1, &VAR_6));
 VAR_14->rpc_vers = FUNC_1(2);
 VAR_14->prog = VAR_7->dst_prog;
 VAR_14->vers = VAR_7->dst_vers;
 VAR_14->procedure = FUNC_1(VAR_8);

 VAR_16 = FUNC_6(VAR_7, VAR_14, VAR_10);
 if (VAR_16 < 0)
  return VAR_16;

 for (;;) {
  VAR_16 = FUNC_5(VAR_7, (void*) &VAR_15, -1, VAR_13);
  if (VAR_16 < 0)
   return VAR_16;
  if (VAR_16 < (3 * sizeof(uint32_t))) {
   VAR_16 = -VAR_1;
   break;
  }

  if (VAR_15->type == 0) {
   FUNC_2(VAR_15);
   continue;
  }




  if (VAR_15->xid != VAR_14->xid) {
   FUNC_2(VAR_15);
   continue;
  }
  if (VAR_15->reply_stat != 0) {
   VAR_16 = -VAR_4;
   break;
  }
  if (VAR_15->data.acc_hdr.accept_stat != 0) {
   VAR_16 = -VAR_0;
   break;
  }
  if (VAR_11 == ((void*)0)) {
   VAR_16 = 0;
   break;
  }
  if (VAR_16 > VAR_12) {
   VAR_16 = -VAR_2;
  } else {
   FUNC_3(VAR_11, VAR_15, VAR_16);
  }
  break;
 }
 FUNC_2(VAR_15);
 return VAR_16;
}
