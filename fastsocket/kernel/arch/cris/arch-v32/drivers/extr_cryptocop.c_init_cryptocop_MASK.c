
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int en; int data; int in_eop; int ignore_sync; int td3; int td2; int td1; int ipend; } ;
typedef TYPE_1__ reg_strcop_rw_cfg ;
typedef TYPE_1__ reg_dma_rw_intr_mask ;
typedef TYPE_1__ reg_dma_rw_cfg ;
typedef TYPE_1__ reg_dma_rw_ack_intr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (int ,int ,int ,char*,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_7(void)
{
 unsigned long VAR_19;
 reg_dma_rw_cfg VAR_20 = {.en = 1};
 reg_dma_rw_intr_mask VAR_21 = {.data = VAR_11};
 reg_dma_rw_ack_intr VAR_22 = {.data = 1,.in_eop = 1 };
 reg_strcop_rw_cfg VAR_23 = {
  .ipend = VAR_14,
  .td1 = VAR_13,
  .td2 = VAR_12,
  .td3 = VAR_13,
  .ignore_sync = 0,
  .en = 1
 };

 if (FUNC_6(VAR_0, VAR_7, 0,
   "stream co-processor DMA", ((void*)0)))
  FUNC_5("request_irq stream co-processor irq dma9");

 (void)FUNC_2(VAR_4, "strcop", VAR_1,
  0, VAR_8);
 (void)FUNC_2(VAR_2, "strcop", VAR_1,
  0, VAR_8);

 FUNC_4(VAR_19);


 VAR_23.en = 0;
 FUNC_1(VAR_18, VAR_9, VAR_16, VAR_23);
 VAR_23.en = 1;
 FUNC_1(VAR_18, VAR_9, VAR_16, VAR_23);


 FUNC_1(VAR_6, VAR_3, VAR_16, VAR_20);
 FUNC_1(VAR_6, VAR_5, VAR_16, VAR_20);


 FUNC_0(VAR_5, VAR_10);
 FUNC_0(VAR_3, VAR_10);


 FUNC_1(VAR_6, VAR_3, VAR_17, VAR_21);


 FUNC_1(VAR_6, VAR_3, VAR_15, VAR_22);

 FUNC_3(VAR_19);

 return 0;
}
