
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rr_server {int cid; int pid; } ;
struct msm_rpc_endpoint {unsigned int flags; void* dst_vers; void* dst_prog; int dst_cid; int dst_pid; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 struct msm_rpc_endpoint* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct msm_rpc_endpoint*) ;
 int VAR_1 ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int,int*) ;
 struct msm_rpc_endpoint* FUNC_5 () ;
 struct rr_server* FUNC_6 (int,int) ;

struct msm_rpc_endpoint *FUNC_7(uint32_t VAR_2, uint32_t VAR_3, unsigned VAR_4)
{
 struct msm_rpc_endpoint *VAR_5;
 struct rr_server *VAR_6;
 VAR_6 = FUNC_6(VAR_2, VAR_3);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_5();
 if (FUNC_2(VAR_5))
  return VAR_5;

 VAR_5->flags = VAR_4;
 VAR_5->dst_pid = VAR_6->pid;
 VAR_5->dst_cid = VAR_6->cid;
 VAR_5->dst_prog = FUNC_3(VAR_2);
 VAR_5->dst_vers = FUNC_3(VAR_3);

 return VAR_5;
}
