
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rr_server {int pid; int vers; int prog; int cid; } ;
struct msm_rpc_endpoint {int reply_pid; int dst_pid; int list; int incomplete; int read_q_wake_lock; int read_q_lock; int read_q; int wait_q; void* dst_vers; void* dst_prog; int dst_cid; scalar_t__ dev; int pid; scalar_t__ cid; } ;
typedef scalar_t__ dev_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct msm_rpc_endpoint*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct msm_rpc_endpoint* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct msm_rpc_endpoint*,int ,int) ;
 scalar_t__ VAR_5 ;
 struct rr_server* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,int ,char*) ;

struct msm_rpc_endpoint *FUNC_14(dev_t VAR_6)
{
 struct msm_rpc_endpoint *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_6(sizeof(struct msm_rpc_endpoint), VAR_0);
 if (!VAR_7)
  return ((void*)0);
 FUNC_8(VAR_7, 0, sizeof(struct msm_rpc_endpoint));


 VAR_7->reply_pid = 0xffffffff;

 VAR_7->cid = (uint32_t) VAR_7;
 VAR_7->pid = VAR_1;
 VAR_7->dev = VAR_6;

 if ((VAR_6 != VAR_5) && (VAR_6 != FUNC_3(0, 0))) {
  struct rr_server *VAR_9;





  VAR_9 = FUNC_9(VAR_6);

  FUNC_0(!VAR_9);

  VAR_7->dst_pid = VAR_9->pid;
  VAR_7->dst_cid = VAR_9->cid;
  VAR_7->dst_prog = FUNC_4(VAR_9->prog);
  VAR_7->dst_vers = FUNC_4(VAR_9->vers);

  FUNC_1("Creating local ept %p @ %08x:%08x\n", VAR_7, VAR_9->prog, VAR_9->vers);
 } else {

  VAR_7->dst_pid = 0xffffffff;
  FUNC_1("Creating a master local ept %p\n", VAR_7);
 }

 FUNC_5(&VAR_7->wait_q);
 FUNC_2(&VAR_7->read_q);
 FUNC_10(&VAR_7->read_q_lock);
 FUNC_13(&VAR_7->read_q_wake_lock, VAR_2, "rpc_read");
 FUNC_2(&VAR_7->incomplete);

 FUNC_11(&VAR_4, VAR_8);
 FUNC_7(&VAR_7->list, &VAR_3);
 FUNC_12(&VAR_4, VAR_8);
 return VAR_7;
}
