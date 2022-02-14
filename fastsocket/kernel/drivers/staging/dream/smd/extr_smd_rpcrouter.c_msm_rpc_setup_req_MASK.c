
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rpc_request_hdr {void* procedure; void* vers; void* prog; void* rpc_vers; void* xid; } ;


 int FUNC_0 (int,int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct rpc_request_hdr*,int ,int) ;
 int VAR_0 ;

void FUNC_3(struct rpc_request_hdr *VAR_1, uint32_t VAR_2,
         uint32_t VAR_3, uint32_t VAR_4)
{
 FUNC_2(VAR_1, 0, sizeof(struct rpc_request_hdr));
 VAR_1->xid = FUNC_1(FUNC_0(1, &VAR_0));
 VAR_1->rpc_vers = FUNC_1(2);
 VAR_1->prog = FUNC_1(VAR_2);
 VAR_1->vers = FUNC_1(VAR_3);
 VAR_1->procedure = FUNC_1(VAR_4);
}
