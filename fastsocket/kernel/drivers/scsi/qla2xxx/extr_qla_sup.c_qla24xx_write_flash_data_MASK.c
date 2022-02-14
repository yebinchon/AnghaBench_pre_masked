
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int fdt_block_size; TYPE_1__* pdev; scalar_t__ fdt_protect_sec_cmd; scalar_t__ fdt_unprotect_sec_cmd; } ;
struct TYPE_11__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int *,int,scalar_t__*,int ) ;
 int FUNC_5 (int *,int,void*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*,int) ;
 int FUNC_7 (void*,int*,int) ;
 int FUNC_8 (int ,TYPE_2__*,int,char*,int,...) ;
 int VAR_4 ;
 int FUNC_9 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct qla_hw_data*,scalar_t__,int) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_15(scsi_qla_host_t *VAR_6, uint32_t *VAR_7, uint32_t VAR_8,
    uint32_t VAR_9)
{
 int VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12, VAR_13;
 uint32_t VAR_14;
 dma_addr_t VAR_15;
 void *VAR_16 = ((void*)0);
 struct qla_hw_data *VAR_17 = VAR_6->hw;


 if ((FUNC_0(VAR_17) || FUNC_1(VAR_17) || FUNC_2(VAR_17)) &&
     !(VAR_8 & 0xfff) && VAR_9 > VAR_1) {
  VAR_16 = FUNC_4(&VAR_17->pdev->dev, VAR_2,
      &VAR_15, VAR_0);
  if (!VAR_16) {
   FUNC_9(VAR_5, VAR_6, 0x7095,
       "Unable to allocate "
       "memory for optrom burst write (%x KB).\n",
       VAR_2 / 1024);
  }
 }

 VAR_13 = (VAR_17->fdt_block_size >> 2) - 1;
 VAR_12 = ~VAR_13;

 VAR_10 = FUNC_12(VAR_6);
 if (VAR_10 != VAR_3) {
  FUNC_9(VAR_5, VAR_6, 0x7096,
      "Unable to unprotect flash for update.\n");
  goto done;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_8++, VAR_7++) {
  VAR_14 = (VAR_8 & VAR_12) << 2;


  if ((VAR_8 & VAR_13) == 0) {

   if (VAR_17->fdt_unprotect_sec_cmd)
    FUNC_13(VAR_17,
        VAR_17->fdt_unprotect_sec_cmd,
        (VAR_14 & 0xff00) | ((VAR_14 << 16) &
        0xff0000) | ((VAR_14 >> 16) & 0xff));
   VAR_10 = FUNC_10(VAR_6, VAR_14);
   if (VAR_10 != VAR_3) {
    FUNC_8(VAR_4, VAR_6, 0x7007,
        "Unable to erase erase sector: address=%x.\n",
        VAR_8);
    break;
   }
  }


  if (VAR_16 && (VAR_11 + VAR_1) <= VAR_9) {

   FUNC_7(VAR_16, VAR_7, VAR_2);

   VAR_10 = FUNC_14(VAR_6, VAR_15,
       FUNC_6(VAR_17, VAR_8),
       VAR_1);
   if (VAR_10 != VAR_3) {
    FUNC_9(VAR_5, VAR_6, 0x7097,
        "Unable to burst-write optrom segment "
        "(%x/%x/%llx).\n", VAR_10,
        FUNC_6(VAR_17, VAR_8),
        (unsigned long long)VAR_15);
    FUNC_9(VAR_5, VAR_6, 0x7098,
        "Reverting to slow-write.\n");

    FUNC_5(&VAR_17->pdev->dev,
        VAR_2, VAR_16, VAR_15);
    VAR_16 = ((void*)0);
   } else {
    VAR_11 += VAR_1 - 1;
    VAR_8 += VAR_1 - 1;
    VAR_7 += VAR_1 - 1;
    continue;
   }
  }

  VAR_10 = FUNC_13(VAR_17,
      FUNC_6(VAR_17, VAR_8), FUNC_3(*VAR_7));
  if (VAR_10 != VAR_3) {
   FUNC_8(VAR_4, VAR_6, 0x7006,
       "Unable to program flash address=%x data=%x.\n",
       VAR_8, *VAR_7);
   break;
  }


  if (VAR_17->fdt_unprotect_sec_cmd &&
      ((VAR_8 & VAR_13) == VAR_13))
   FUNC_13(VAR_17,
       VAR_17->fdt_protect_sec_cmd,
       (VAR_14 & 0xff00) | ((VAR_14 << 16) &
       0xff0000) | ((VAR_14 >> 16) & 0xff));
 }

 VAR_10 = FUNC_11(VAR_6);
 if (VAR_10 != VAR_3)
  FUNC_9(VAR_5, VAR_6, 0x7099,
      "Unable to protect flash after update.\n");
done:
 if (VAR_16)
  FUNC_5(&VAR_17->pdev->dev,
      VAR_2, VAR_16, VAR_15);

 return VAR_10;
}
