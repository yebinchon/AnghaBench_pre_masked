
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_hardware_context {int* mbox_aen; } ;
struct qlcnic_adapter {TYPE_1__* pdev; int idc_aen_work; int qlcnic_wq; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct qlcnic_hardware_context*,int) ;


 int FUNC_1 (int ) ;



 int FUNC_2 (struct qlcnic_hardware_context*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct qlcnic_adapter*,int *) ;
 int FUNC_6 (struct qlcnic_adapter*,int *) ;
 int FUNC_7 (struct qlcnic_adapter*,int ) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(struct qlcnic_adapter *VAR_3)
{
 u32 VAR_4[VAR_2];
 int VAR_5;
 struct qlcnic_hardware_context *VAR_6 = VAR_3->ahw;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5] = FUNC_9(FUNC_0(VAR_6, VAR_5));

 switch (FUNC_1(VAR_4[0])) {

 case 132:
  FUNC_6(VAR_3, VAR_4);
  break;
 case 133:
  FUNC_5(VAR_3, VAR_4);
  break;
 case 131:
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   VAR_3->ahw->mbox_aen[VAR_5] = FUNC_1(VAR_4[VAR_5]);
  FUNC_8(VAR_3->qlcnic_wq,
       &VAR_3->idc_aen_work, 0);
  break;
 case 128:
  break;
 case 134:
  FUNC_7(VAR_3, VAR_4[1]);
  break;
 case 130:
  FUNC_4(&VAR_3->pdev->dev, "SFP+ Insert AEN:0x%x.\n",
    FUNC_1(VAR_4[0]));
  break;
 case 129:
  FUNC_4(&VAR_3->pdev->dev, "SFP Removed AEN:0x%x.\n",
    FUNC_1(VAR_4[0]));
  break;
 default:
  FUNC_3(&VAR_3->pdev->dev, "Unsupported AEN:0x%x.\n",
   FUNC_1(VAR_4[0]));
  break;
 }

 FUNC_2(VAR_6, VAR_1, VAR_0);
}
