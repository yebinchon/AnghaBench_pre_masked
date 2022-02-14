
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef int uchar ;
struct asc_board {int dev; } ;
struct TYPE_7__ {int err_code; TYPE_1__* cfg; int overrun_dma; scalar_t__ overrun_buf; int iop_base; } ;
struct TYPE_6__ {void* mcode_version; void* mcode_date; int chip_scsi_id; int disc_enable; int * sdtr_period_offset; } ;
typedef int PortAddr ;
typedef void* ASC_PADDR ;
typedef TYPE_2__ ASC_DVC_VAR ;
typedef void* ASC_DCNT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,int,int ) ;
 void* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (unsigned long) ;
 int VAR_11 ;
 struct asc_board* FUNC_10 (TYPE_2__*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static ushort FUNC_13(ASC_DVC_VAR *VAR_12)
{
 int VAR_13;
 ushort VAR_14;
 PortAddr VAR_15;
 ASC_PADDR VAR_16;
 ASC_DCNT VAR_17;
 struct asc_board *VAR_18 = FUNC_10(VAR_12);

 VAR_15 = VAR_12->iop_base;
 VAR_14 = 0;
 for (VAR_13 = 0; VAR_13 <= VAR_8; VAR_13++) {
  FUNC_4(VAR_15, VAR_13,
     VAR_12->cfg->sdtr_period_offset[VAR_13]);
 }

 FUNC_2(VAR_12);
 FUNC_8(VAR_15, VAR_0,
    VAR_12->cfg->disc_enable);
 FUNC_8(VAR_15, VAR_1,
    FUNC_0(VAR_12->cfg->chip_scsi_id));


 FUNC_9((unsigned long)VAR_12->overrun_buf & 7);
 VAR_12->overrun_dma = FUNC_12(VAR_18->dev, VAR_12->overrun_buf,
     VAR_10, VAR_11);
 VAR_16 = FUNC_11(VAR_12->overrun_dma);
 FUNC_3(VAR_15, VAR_5,
     (uchar *)&VAR_16, 1);
 VAR_17 = FUNC_11(VAR_10);
 FUNC_3(VAR_15, VAR_4,
     (uchar *)&VAR_17, 1);

 VAR_12->cfg->mcode_date =
     FUNC_5(VAR_15, (ushort)VAR_2);
 VAR_12->cfg->mcode_version =
     FUNC_5(VAR_15, (ushort)VAR_3);

 FUNC_6(VAR_15, VAR_9);
 if (FUNC_1(VAR_15) != VAR_9) {
  VAR_12->err_code |= VAR_6;
  return VAR_14;
 }
 if (FUNC_7(VAR_15) != 1) {
  VAR_12->err_code |= VAR_7;
  return VAR_14;
 }

 return VAR_14;
}
