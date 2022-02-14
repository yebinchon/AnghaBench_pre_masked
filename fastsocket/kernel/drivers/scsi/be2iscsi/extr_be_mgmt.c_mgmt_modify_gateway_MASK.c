
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {struct be_cmd_set_def_gateway_req* va; } ;
struct TYPE_2__ {int addr; int ip_type; } ;
struct be_cmd_set_def_gateway_req {TYPE_1__ ip_addr; int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_dma_mem*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct beiscsi_hba *VAR_2, uint8_t *VAR_3,
          uint32_t VAR_4, uint32_t VAR_5)
{
 struct be_cmd_set_def_gateway_req *VAR_6;
 struct be_dma_mem VAR_7;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_2, &VAR_7,
    VAR_1,
    sizeof(*VAR_6));
 if (VAR_8)
  return VAR_8;

 VAR_6 = VAR_7.va;
 VAR_6->action = VAR_4;
 VAR_6->ip_addr.ip_type = VAR_0;

 FUNC_0(VAR_6->ip_addr.addr, VAR_3, VAR_5);

 return FUNC_2(VAR_2, &VAR_7, ((void*)0), 0);
}
