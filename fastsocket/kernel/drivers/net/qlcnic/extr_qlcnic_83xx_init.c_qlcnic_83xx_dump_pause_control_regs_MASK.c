
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct qlcnic_adapter*,int) ;
 int FUNC_1 (struct qlcnic_adapter*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;

 VAR_12 = FUNC_0(VAR_9, VAR_8);
 FUNC_2(&VAR_9->pdev->dev, "SRE-Shim Ctrl:0x%x\n", VAR_12);

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  if (VAR_11 == 0) {
   FUNC_2(&VAR_9->pdev->dev,
     "Port 0 RxB Pause Threshold Regs[TC7..TC0]:");
   VAR_14 = VAR_2;
  } else if (VAR_11 == 1) {
   FUNC_2(&VAR_9->pdev->dev,
     "Port 1 RxB Pause Threshold Regs[TC7..TC0]:");
   VAR_14 = VAR_5;
  }
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
   VAR_12 = FUNC_0(VAR_9, VAR_14 + (VAR_10 * 0x4));
   FUNC_2(&VAR_9->pdev->dev, "0x%x  ", VAR_12);
  }
  FUNC_2(&VAR_9->pdev->dev, "\n");
 }

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  if (VAR_11 == 0) {
   FUNC_2(&VAR_9->pdev->dev,
     "Port 0 RxB TC Max Cell Registers[4..1]:");
   VAR_14 = VAR_0;
  } else if (VAR_11 == 1) {
   FUNC_2(&VAR_9->pdev->dev,
     "Port 1 RxB TC Max Cell Registers[4..1]:");
   VAR_14 = VAR_3;
  }
  for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
   VAR_12 = FUNC_0(VAR_9, VAR_14 + (VAR_10 * 0x4));
    FUNC_2(&VAR_9->pdev->dev, "0x%x  ", VAR_12);
  }
  FUNC_2(&VAR_9->pdev->dev, "\n");
 }

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  if (VAR_11 == 0) {
   FUNC_2(&VAR_9->pdev->dev,
     "Port 0 RxB Rx TC Stats[TC7..TC0]:");
   VAR_14 = VAR_1;
  } else if (VAR_11 == 1) {
   FUNC_2(&VAR_9->pdev->dev,
     "Port 1 RxB Rx TC Stats[TC7..TC0]:");
   VAR_14 = VAR_4;
  }
  for (VAR_10 = 7; VAR_10 >= 0; VAR_10--) {
   VAR_12 = FUNC_0(VAR_9, VAR_14);
   VAR_12 &= ~(0x7 << 29);
   FUNC_1(VAR_9, VAR_14, (VAR_12 | (VAR_10 << 29)));
   VAR_12 = FUNC_0(VAR_9, VAR_14);
   FUNC_2(&VAR_9->pdev->dev, "0x%x  ", VAR_12);
  }
  FUNC_2(&VAR_9->pdev->dev, "\n");
 }

 VAR_12 = FUNC_0(VAR_9, VAR_6);
 VAR_13 = FUNC_0(VAR_9, VAR_7);
 FUNC_2(&VAR_9->pdev->dev,
   "IFB-Pause Thresholds: Port 2:0x%x, Port 3:0x%x\n",
   VAR_12, VAR_13);
}
