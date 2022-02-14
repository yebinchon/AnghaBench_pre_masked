
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ CAN_TTCM; scalar_t__ CAN_ABOM; scalar_t__ CAN_AWUM; scalar_t__ CAN_NART; scalar_t__ CAN_RFLM; scalar_t__ CAN_TXFP; scalar_t__ CAN_Prescaler; scalar_t__ CAN_BS2; scalar_t__ CAN_BS1; scalar_t__ CAN_SJW; scalar_t__ CAN_Mode; } ;
struct TYPE_6__ {scalar_t__ MCR; int MSR; scalar_t__ BTR; } ;
typedef TYPE_1__ CAN_TypeDef ;
typedef TYPE_2__ CAN_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

uint8_t FUNC_8(CAN_TypeDef* VAR_13, CAN_InitTypeDef* VAR_14)
{
  uint8_t VAR_15 = VAR_0;
  uint32_t VAR_16 = 0x00000000;


  FUNC_7(FUNC_0(VAR_13));
  FUNC_7(FUNC_6(VAR_14->CAN_TTCM));
  FUNC_7(FUNC_6(VAR_14->CAN_ABOM));
  FUNC_7(FUNC_6(VAR_14->CAN_AWUM));
  FUNC_7(FUNC_6(VAR_14->CAN_NART));
  FUNC_7(FUNC_6(VAR_14->CAN_RFLM));
  FUNC_7(FUNC_6(VAR_14->CAN_TXFP));
  FUNC_7(FUNC_3(VAR_14->CAN_Mode));
  FUNC_7(FUNC_5(VAR_14->CAN_SJW));
  FUNC_7(FUNC_1(VAR_14->CAN_BS1));
  FUNC_7(FUNC_2(VAR_14->CAN_BS2));
  FUNC_7(FUNC_4(VAR_14->CAN_Prescaler));


  VAR_13->MCR &= (~(uint32_t)VAR_7);


  VAR_13->MCR |= VAR_4 ;


  while (((VAR_13->MSR & VAR_10) != VAR_10) && (VAR_16 != VAR_12))
  {
    VAR_16++;
  }


  if ((VAR_13->MSR & VAR_10) != VAR_10)
  {
    VAR_15 = VAR_0;
  }
  else
  {

    if (VAR_14->CAN_TTCM == VAR_11)
    {
      VAR_13->MCR |= VAR_8;
    }
    else
    {
      VAR_13->MCR &= ~(uint32_t)VAR_8;
    }


    if (VAR_14->CAN_ABOM == VAR_11)
    {
      VAR_13->MCR |= VAR_2;
    }
    else
    {
      VAR_13->MCR &= ~(uint32_t)VAR_2;
    }


    if (VAR_14->CAN_AWUM == VAR_11)
    {
      VAR_13->MCR |= VAR_3;
    }
    else
    {
      VAR_13->MCR &= ~(uint32_t)VAR_3;
    }


    if (VAR_14->CAN_NART == VAR_11)
    {
      VAR_13->MCR |= VAR_5;
    }
    else
    {
      VAR_13->MCR &= ~(uint32_t)VAR_5;
    }


    if (VAR_14->CAN_RFLM == VAR_11)
    {
      VAR_13->MCR |= VAR_6;
    }
    else
    {
      VAR_13->MCR &= ~(uint32_t)VAR_6;
    }


    if (VAR_14->CAN_TXFP == VAR_11)
    {
      VAR_13->MCR |= VAR_9;
    }
    else
    {
      VAR_13->MCR &= ~(uint32_t)VAR_9;
    }


    VAR_13->BTR = (uint32_t)((uint32_t)VAR_14->CAN_Mode << 30) | ((uint32_t)VAR_14->CAN_SJW << 24) | ((uint32_t)VAR_14->CAN_BS1 << 16) | ((uint32_t)VAR_14->CAN_BS2 << 20) | ((uint32_t)VAR_14->CAN_Prescaler - 1);






    VAR_13->MCR &= ~(uint32_t)VAR_4;


   VAR_16 = 0;

   while (((VAR_13->MSR & VAR_10) == (uint16_t)VAR_10) && (VAR_16 != VAR_12))
   {
     VAR_16++;
   }


    if ((VAR_13->MSR & VAR_10) == VAR_10)
    {
      VAR_15 = VAR_0;
    }
    else
    {
      VAR_15 = VAR_1 ;
    }
  }


  return VAR_15;
}
