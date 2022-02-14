
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int interface_handle; } ;
struct be_dma_mem {struct be_cmd_get_if_info_req* va; } ;
struct be_cmd_get_if_info_resp {int dummy; } ;
struct be_cmd_get_if_info_req {int ip_type; int interface_hndl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int ,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,struct be_cmd_get_if_info_resp*,int) ;
 scalar_t__ FUNC_2 (struct beiscsi_hba*) ;

int FUNC_3(struct beiscsi_hba *VAR_2, int VAR_3,
       struct be_cmd_get_if_info_resp *VAR_4)
{
 struct be_cmd_get_if_info_req *VAR_5;
 struct be_dma_mem VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, &VAR_6,
     VAR_1,
     sizeof(*VAR_4));
 if (VAR_7)
  return VAR_7;

 VAR_5 = VAR_6.va;
 VAR_5->interface_hndl = VAR_2->interface_handle;
 VAR_5->ip_type = VAR_3;

 return FUNC_1(VAR_2, &VAR_6, VAR_4,
        sizeof(*VAR_4));
}
