
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int net_dev; } ;
struct efx_channel {struct efx_nic* efx; } ;
typedef int efx_qword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int ,int ) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*,int *) ;
 int FUNC_5 (struct efx_nic*,int *) ;
 int FUNC_6 (struct efx_nic*,int *) ;
 int FUNC_7 (struct efx_nic*,int ) ;
 int VAR_8 ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,...) ;
 int VAR_9 ;

void FUNC_10(struct efx_channel *VAR_10,
       efx_qword_t *VAR_11)
{
 struct efx_nic *VAR_12 = VAR_10->efx;
 int VAR_13 = FUNC_0(*VAR_11, VAR_6);
 u32 VAR_14 = FUNC_0(*VAR_11, VAR_7);

 switch (VAR_13) {
 case 139:
  FUNC_8(VAR_12, VAR_8, VAR_12->net_dev,
     "MC watchdog or assertion failure at 0x%x\n", VAR_14);
  FUNC_3(VAR_12, VAR_3);
  break;

 case 134:
  FUNC_9(VAR_12, VAR_9, VAR_12->net_dev, "MCDI PM event.\n");
  break;

 case 138:
  FUNC_2(VAR_12,
    FUNC_1(*VAR_11, VAR_2),
    FUNC_1(*VAR_11, VAR_0),
    FUNC_1(*VAR_11, VAR_1));
  break;

 case 136:
  FUNC_4(VAR_12, VAR_11);
  break;
 case 128:
  FUNC_5(VAR_12, VAR_11);
  break;
 case 129:
  FUNC_9(VAR_12, VAR_8, VAR_12->net_dev,
      "MC Scheduler error address=0x%x\n", VAR_14);
  break;
 case 130:
  FUNC_9(VAR_12, VAR_8, VAR_12->net_dev, "MC Reboot\n");
  FUNC_3(VAR_12, VAR_4);
  break;
 case 135:

  break;
 case 137:
  FUNC_7(VAR_12, FUNC_1(*VAR_11, VAR_5));
  break;
 case 131:
 case 133:
 case 132:
  FUNC_6(VAR_12, VAR_11);
  break;

 default:
  FUNC_8(VAR_12, VAR_8, VAR_12->net_dev, "Unknown MCDI event 0x%x\n",
     VAR_13);
 }
}
