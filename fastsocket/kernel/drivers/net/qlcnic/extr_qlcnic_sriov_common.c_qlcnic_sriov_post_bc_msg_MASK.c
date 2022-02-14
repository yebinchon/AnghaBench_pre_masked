
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int status; } ;
struct qlcnic_hardware_context {int fw_hal_version; int mbx_lock; TYPE_1__ idc; } ;
struct qlcnic_bc_hdr {int cmd_op; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_2 (struct qlcnic_hardware_context*,int) ;
 int FUNC_3 (int) ;

 int FUNC_4 (int) ;

 int FUNC_5 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_7 (struct qlcnic_hardware_context*,int ,int ) ;
 int VAR_9 ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (int *,char*,int ,...) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*,int*) ;
 scalar_t__ FUNC_13 (struct qlcnic_adapter*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int,int ) ;

__attribute__((used)) static int FUNC_19(struct qlcnic_adapter *VAR_10, u32 *VAR_11,
        u32 *VAR_12, u8 VAR_13, u8 VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 = 0;
 struct qlcnic_hardware_context *VAR_22 = VAR_10->ahw;
 unsigned long VAR_23;
 u16 VAR_24;
 u8 VAR_25;
 int VAR_26, VAR_27;

 VAR_24 = ((struct qlcnic_bc_hdr *)VAR_11)->cmd_op;

 if (!FUNC_17(VAR_9, &VAR_10->ahw->idc.status)) {
  FUNC_10(&VAR_10->pdev->dev,
    "Mailbox cmd attempted, 0x%x\n", VAR_24);
  FUNC_10(&VAR_10->pdev->dev, "Mailbox detached\n");
  return 0;
 }

 FUNC_15(&VAR_22->mbx_lock, VAR_23);

 VAR_16 = FUNC_6(VAR_22, VAR_4);
 if (VAR_16) {
  FUNC_0(VAR_10, VAR_0, "Mailbox cmd attempted, 0x%x\n", VAR_24);
  FUNC_16(&VAR_22->mbx_lock, VAR_23);
  return VAR_7;
 }

 VAR_20 = VAR_14 + (sizeof(struct qlcnic_bc_hdr) / sizeof(u32));
 VAR_19 = 0x31 | (VAR_20 << 16) | (VAR_10->ahw->fw_hal_version << 29);

 FUNC_18(VAR_19, FUNC_2(VAR_22, 0));
 VAR_19 = 0x1 | (1 << 4);

 if (FUNC_13(VAR_10))
  VAR_19 |= (VAR_13 << 5);

 FUNC_18(VAR_19, FUNC_2(VAR_22, 1));
 for (VAR_26 = 2, VAR_27 = 0; VAR_27 < (sizeof(struct qlcnic_bc_hdr) / sizeof(u32));
   VAR_26++, VAR_27++) {
  FUNC_18(*(VAR_11++), FUNC_2(VAR_22, VAR_26));
 }
 for (VAR_27 = 0; VAR_27 < VAR_14; VAR_27++, VAR_26++)
  FUNC_18(*(VAR_12++), FUNC_2(VAR_22, VAR_26));


 FUNC_7(VAR_22, VAR_4, VAR_8);





poll:
 VAR_15 = FUNC_12(VAR_10, &VAR_21);
 if (VAR_15 != VAR_7) {

  VAR_17 = FUNC_14(FUNC_1(VAR_22, 0));
  if (VAR_17 & VAR_5) {
   FUNC_8(VAR_10);
   goto poll;
  }
  VAR_25 = FUNC_5(VAR_17);
  VAR_18 = FUNC_3(VAR_17);
  VAR_24 = FUNC_4(VAR_17);

  switch (VAR_25) {
  case 128:
  case 129:
   VAR_15 = VAR_6;
   break;
  default:
   if (VAR_24 == VAR_2) {
    VAR_15 = FUNC_11(VAR_10);
    if (!VAR_15)
     goto out;
   }
   FUNC_9(&VAR_10->pdev->dev,
    "MBX command 0x%x failed with err:0x%x\n",
    VAR_24, VAR_25);
   VAR_15 = VAR_25;
   break;
  }
  goto out;
 }

 FUNC_9(&VAR_10->pdev->dev, "MBX command 0x%x timed out\n",
  FUNC_4(VAR_19));
 VAR_15 = VAR_7;
out:

 FUNC_7(VAR_22, VAR_3, VAR_1);
 FUNC_16(&VAR_10->ahw->mbx_lock, VAR_23);
 return VAR_15;
}
