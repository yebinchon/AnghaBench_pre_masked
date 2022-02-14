
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {struct be_cmd_get_def_gateway_req* va; } ;
struct be_cmd_get_def_gateway_resp {int dummy; } ;
struct be_cmd_get_def_gateway_req {int ip_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int ,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,struct be_cmd_get_def_gateway_resp*,int) ;

int FUNC_2(struct beiscsi_hba *VAR_1, int VAR_2,
       struct be_cmd_get_def_gateway_resp *VAR_3)
{
 struct be_cmd_get_def_gateway_req *VAR_4;
 struct be_dma_mem VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_5,
     VAR_0,
     sizeof(*VAR_3));
 if (VAR_6)
  return VAR_6;

 VAR_4 = VAR_5.va;
 VAR_4->ip_type = VAR_2;

 return FUNC_1(VAR_1, &VAR_5, VAR_3,
        sizeof(*VAR_3));
}
