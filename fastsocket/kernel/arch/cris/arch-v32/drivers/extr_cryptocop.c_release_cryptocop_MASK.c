
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; int in_eop; int member_0; int en; } ;
typedef TYPE_1__ reg_dma_rw_intr_mask ;
typedef TYPE_1__ reg_dma_rw_cfg ;
typedef TYPE_1__ reg_dma_rw_ack_intr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned long VAR_9;
 reg_dma_rw_cfg VAR_10 = {.en = 0};
 reg_dma_rw_intr_mask VAR_11 = {0};
 reg_dma_rw_ack_intr VAR_12 = {.data = 1,.in_eop = 1 };

 FUNC_4(VAR_9);


 FUNC_0(VAR_5, VAR_2, VAR_6, VAR_12);


 FUNC_0(VAR_5, VAR_2, VAR_7, VAR_10);
 FUNC_0(VAR_5, VAR_4, VAR_7, VAR_10);


 FUNC_0(VAR_5, VAR_2, VAR_8, VAR_11);

 FUNC_3(VAR_9);

 FUNC_2(VAR_0, ((void*)0));

 (void)FUNC_1(VAR_3);
 (void)FUNC_1(VAR_1);
}
