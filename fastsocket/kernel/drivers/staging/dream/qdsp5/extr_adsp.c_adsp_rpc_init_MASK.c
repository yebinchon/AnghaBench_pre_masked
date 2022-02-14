
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {scalar_t__ rpc_client; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct msm_adsp_module *VAR_3)
{

 VAR_3->rpc_client = FUNC_2(
   VAR_1,
   VAR_2,
   VAR_0);

 if (FUNC_0(VAR_3->rpc_client)) {
  int VAR_4 = FUNC_1(VAR_3->rpc_client);
  VAR_3->rpc_client = 0;
  FUNC_3("adsp: could not open rpc client: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
