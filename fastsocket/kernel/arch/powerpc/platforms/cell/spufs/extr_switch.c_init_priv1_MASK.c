
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfc_sr1_RW; int int_mask_class0_RW; int int_mask_class1_RW; int int_mask_class2_RW; } ;
struct spu_state {TYPE_1__ priv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_0(struct spu_state *VAR_13)
{

 VAR_13->priv1.mfc_sr1_RW = VAR_9 |
     VAR_10 |
     VAR_11 |
     VAR_12 | VAR_8;


 VAR_13->priv1.int_mask_class0_RW = VAR_0 |
     VAR_1 |
     VAR_2;
 VAR_13->priv1.int_mask_class1_RW = VAR_3 |
     VAR_4;
 VAR_13->priv1.int_mask_class2_RW = VAR_7 |
     VAR_6 |
     VAR_5;
}
