
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {int dummy; } ;
struct be_cmd_get_nic_conf_resp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int ,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,struct be_cmd_get_nic_conf_resp*,int) ;

int FUNC_2(struct beiscsi_hba *VAR_1,
        struct be_cmd_get_nic_conf_resp *VAR_2)
{
 struct be_dma_mem VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3,
     VAR_0,
     sizeof(*VAR_2));
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_1, &VAR_3, VAR_2, sizeof(*VAR_2));
}
