
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {TYPE_1__* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int *,int,scalar_t__*,int ) ;
 int FUNC_3 (int *,int,void*,scalar_t__) ;
 int FUNC_4 (struct qla_hw_data*,int) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_3 ;
 int * FUNC_7 (struct scsi_qla_host*,int *,int,int) ;
 int FUNC_8 (struct scsi_qla_host*,scalar_t__,int ,int) ;

uint8_t *
FUNC_9(struct scsi_qla_host *VAR_4, uint8_t *VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 int VAR_8;
 dma_addr_t VAR_9;
 void *VAR_10;
 uint8_t *VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;
 struct qla_hw_data *VAR_15 = VAR_4->hw;

 if (FUNC_0(VAR_15) || FUNC_1(VAR_15))
  goto try_fast;
 if (VAR_6 & 0xfff)
  goto slow_read;
 if (VAR_7 < VAR_2)
  goto slow_read;

try_fast:
 VAR_10 = FUNC_2(&VAR_15->pdev->dev, VAR_2,
     &VAR_9, VAR_0);
 if (!VAR_10) {
  FUNC_6(VAR_3, VAR_4, 0x00cc,
      "Unable to allocate memory for optrom burst read (%x KB).\n",
      VAR_2 / 1024);
  goto slow_read;
 }

 VAR_11 = VAR_5;
 VAR_12 = VAR_6 >> 2;
 VAR_13 = VAR_7 >> 2;
 VAR_14 = VAR_1;
 while (VAR_13 != 0) {
  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;

  VAR_8 = FUNC_8(VAR_4, VAR_9,
      FUNC_4(VAR_15, VAR_12), VAR_14);
  if (VAR_8) {
   FUNC_6(VAR_3, VAR_4, 0x00f5,
       "Unable to burst-read optrom segment (%x/%x/%llx).\n",
       VAR_8, FUNC_4(VAR_15, VAR_12),
       (unsigned long long)VAR_9);
   FUNC_6(VAR_3, VAR_4, 0x00f6,
       "Reverting to slow-read.\n");

   FUNC_3(&VAR_15->pdev->dev, VAR_2,
       VAR_10, VAR_9);
   goto slow_read;
  }

  FUNC_5(VAR_11, VAR_10, VAR_14 * 4);

  VAR_13 -= VAR_14;
  VAR_12 += VAR_14;
  VAR_11 += VAR_14 * 4;
 }

 FUNC_3(&VAR_15->pdev->dev, VAR_2, VAR_10,
     VAR_9);

 return VAR_5;

slow_read:
    return FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
}
