
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rr_server {int dummy; } ;
struct msm_rpc_endpoint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rr_server*) ;
 struct rr_server* FUNC_1 (int ,int ) ;

int FUNC_2(struct msm_rpc_endpoint *VAR_1,
         uint32_t VAR_2, uint32_t VAR_3)
{
 struct rr_server *VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (!VAR_4)
  return -VAR_0;
 FUNC_0(VAR_4);
 return 0;
}
