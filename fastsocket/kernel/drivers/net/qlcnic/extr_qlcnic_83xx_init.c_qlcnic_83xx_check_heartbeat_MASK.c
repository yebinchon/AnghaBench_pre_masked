
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {scalar_t__ heartbeat; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,scalar_t__,void*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_8(struct qlcnic_adapter *VAR_12)
{
 u32 VAR_13, VAR_14;
 int VAR_15, VAR_16 = -VAR_0;

 VAR_15 = VAR_1;
 VAR_12->heartbeat = FUNC_2(VAR_12,
            VAR_3);

 do {
  FUNC_5(VAR_2);
  VAR_13 = FUNC_2(VAR_12,
      VAR_3);
  if (VAR_13 != VAR_12->heartbeat) {
   VAR_16 = VAR_6;
   break;
  }
 } while (--VAR_15);

 if (VAR_16) {
  FUNC_3(&VAR_12->pdev->dev, "firmware hang detected\n");
  FUNC_7(VAR_12);
  FUNC_6(VAR_12);
  VAR_14 = FUNC_2(VAR_12,
       VAR_4);
  FUNC_4(&VAR_12->pdev->dev, "Dumping HW/FW registers\n"
    "PEG_HALT_STATUS1: 0x%x, PEG_HALT_STATUS2: 0x%x,\n"
    "PEG_NET_0_PC: 0x%x, PEG_NET_1_PC: 0x%x,\n"
    "PEG_NET_2_PC: 0x%x, PEG_NET_3_PC: 0x%x,\n"
    "PEG_NET_4_PC: 0x%x\n", VAR_14,
    FUNC_2(VAR_12, VAR_5),
    FUNC_1(VAR_12, VAR_7),
    FUNC_1(VAR_12, VAR_8),
    FUNC_1(VAR_12, VAR_9),
    FUNC_1(VAR_12, VAR_10),
    FUNC_1(VAR_12, VAR_11));

  if (FUNC_0(VAR_14) == 0x67)
   FUNC_3(&VAR_12->pdev->dev,
    "Device is being reset err code 0x00006700.\n");
 }

 return VAR_16;
}
