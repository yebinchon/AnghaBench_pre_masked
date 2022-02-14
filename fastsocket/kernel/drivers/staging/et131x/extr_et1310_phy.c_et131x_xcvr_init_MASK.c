
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ value; } ;
struct et131x_adapter {int* eepromData; int AiForceSpeed; int AiForceDpx; scalar_t__ RegistryFlowControl; TYPE_1__ Bmsr; } ;
struct TYPE_8__ {int int_en; int link_status; int autoneg_status; int led_tx_rx; int led_link; } ;
struct TYPE_9__ {int value; TYPE_2__ bits; } ;
typedef TYPE_3__ MI_LCR2_t ;
typedef TYPE_3__ MI_ISR_t ;
typedef TYPE_3__ MI_IMR_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct et131x_adapter*,int ,int,int,int *) ;
 int FUNC_1 (struct et131x_adapter*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct et131x_adapter*,int ,int *) ;
 int FUNC_3 (struct et131x_adapter*,int ,int ) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int FUNC_5 (struct et131x_adapter*) ;
 int FUNC_6 (struct et131x_adapter*) ;
 int FUNC_7 (struct et131x_adapter*) ;
 int FUNC_8 (struct et131x_adapter*) ;
 int FUNC_9 (struct et131x_adapter*) ;
 int FUNC_10 (struct et131x_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int ,TYPE_3__) ;

__attribute__((used)) static int FUNC_12(struct et131x_adapter *VAR_5)
{
 int VAR_6 = 0;
 MI_IMR_t VAR_7;
 MI_ISR_t VAR_8;
 MI_LCR2_t VAR_9;


 VAR_5->Bmsr.value = 0;

 FUNC_2(VAR_5, (uint8_t) FUNC_11(VAR_1, VAR_8), &VAR_8.value);

 FUNC_2(VAR_5, (uint8_t) FUNC_11(VAR_1, VAR_7), &VAR_7.value);




 VAR_7.bits.int_en = 0x1;
 VAR_7.bits.link_status = 0x1;
 VAR_7.bits.autoneg_status = 0x1;

 FUNC_3(VAR_5, (uint8_t) FUNC_11(VAR_1, VAR_7), VAR_7.value);
 if ((VAR_5->eepromData[1] & 0x4) == 0) {
  FUNC_2(VAR_5, (uint8_t) FUNC_11(VAR_1, VAR_9),
         &VAR_9);
  if ((VAR_5->eepromData[1] & 0x8) == 0)
   VAR_9 = 0x3;
  else
   VAR_9 = 0x4;
  VAR_9 = 0xa;
  FUNC_3(VAR_5, (uint8_t) FUNC_11(VAR_1, VAR_9),
   VAR_9);
 }


 if (VAR_5->AiForceSpeed == 0 && VAR_5->AiForceDpx == 0) {
  if ((VAR_5->RegistryFlowControl == VAR_4) ||
      (VAR_5->RegistryFlowControl == VAR_0)) {
   FUNC_0(VAR_5,
           VAR_3, 4, 11, ((void*)0));
  } else {
   FUNC_0(VAR_5,
           VAR_2, 4, 11, ((void*)0));
  }

  if (VAR_5->RegistryFlowControl == VAR_0) {
   FUNC_0(VAR_5,
           VAR_3, 4, 10, ((void*)0));
  } else {
   FUNC_0(VAR_5,
           VAR_2, 4, 10, ((void*)0));
  }


  FUNC_1(VAR_5, 1);


  FUNC_0(VAR_5, VAR_3, 0, 9, ((void*)0));
  return VAR_6;
 } else {
  FUNC_1(VAR_5, 0);


  if (VAR_5->AiForceDpx != 1) {
   if ((VAR_5->RegistryFlowControl == VAR_4) ||
       (VAR_5->RegistryFlowControl == VAR_0)) {
    FUNC_0(VAR_5,
            VAR_3, 4, 11,
            ((void*)0));
   } else {
    FUNC_0(VAR_5,
            VAR_2, 4, 11,
            ((void*)0));
   }

   if (VAR_5->RegistryFlowControl == VAR_0) {
    FUNC_0(VAR_5,
            VAR_3, 4, 10,
            ((void*)0));
   } else {
    FUNC_0(VAR_5,
            VAR_2, 4, 10,
            ((void*)0));
   }
  } else {
   FUNC_0(VAR_5,
           VAR_2, 4, 10, ((void*)0));
   FUNC_0(VAR_5,
           VAR_2, 4, 11, ((void*)0));
  }

  switch (VAR_5->AiForceSpeed) {
  case 10:
   if (VAR_5->AiForceDpx == 1)
    FUNC_10(VAR_5);
   else if (VAR_5->AiForceDpx == 2)
    FUNC_9(VAR_5);
   else
    FUNC_8(VAR_5);
   break;
  case 100:
   if (VAR_5->AiForceDpx == 1)
    FUNC_7(VAR_5);
   else if (VAR_5->AiForceDpx == 2)
    FUNC_6(VAR_5);
   else
    FUNC_5(VAR_5);
   break;
  case 1000:
   FUNC_4(VAR_5);
   break;
  }

  return VAR_6;
 }
}
