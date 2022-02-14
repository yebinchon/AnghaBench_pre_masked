
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int ADV_DVC_VAR ;





 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ADV_DVC_VAR *VAR_0, uchar VAR_1)
{
 switch (VAR_1) {
 case 129:



  FUNC_0(0, "ADV_ASYNC_SCSI_BUS_RESET_DET\n");
  break;

 case 130:





  FUNC_0(0, "ADV_ASYNC_RDMA_FAILURE\n");
  FUNC_1(VAR_0);
  break;

 case 128:



  FUNC_0(0, "ADV_HOST_SCSI_BUS_RESET\n");
  break;

 default:
  FUNC_0(0, "unknown code 0x%x\n", VAR_1);
  break;
 }
}
