
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CR; } ;
struct TYPE_4__ {int DCMI_SynchroMode; int DCMI_PCKPolarity; int DCMI_VSPolarity; int DCMI_HSPolarity; int DCMI_CaptureRate; int DCMI_ExtendedDataMode; scalar_t__ DCMI_CaptureMode; } ;
typedef TYPE_1__ DCMI_InitTypeDef ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

void FUNC_8(DCMI_InitTypeDef* VAR_12)
{
  uint32_t VAR_13 = 0x0;


  FUNC_7(FUNC_0(VAR_12->DCMI_CaptureMode));
  FUNC_7(FUNC_5(VAR_12->DCMI_SynchroMode));
  FUNC_7(FUNC_4(VAR_12->DCMI_PCKPolarity));
  FUNC_7(FUNC_6(VAR_12->DCMI_VSPolarity));
  FUNC_7(FUNC_3(VAR_12->DCMI_HSPolarity));
  FUNC_7(FUNC_1(VAR_12->DCMI_CaptureRate));
  FUNC_7(FUNC_2(VAR_12->DCMI_ExtendedDataMode));



  VAR_0->CR &= ~(VAR_5 | VAR_1);


  VAR_13 = VAR_0->CR;

  VAR_13 &= ~((uint32_t)VAR_2 | VAR_6 | VAR_10 |
                      VAR_9 | VAR_11 | VAR_7 |
                      VAR_8 | VAR_3 | VAR_4);


  VAR_13 |= ((uint32_t)VAR_12->DCMI_CaptureMode |
                     VAR_12->DCMI_SynchroMode |
                     VAR_12->DCMI_PCKPolarity |
                     VAR_12->DCMI_VSPolarity |
                     VAR_12->DCMI_HSPolarity |
                     VAR_12->DCMI_CaptureRate |
                     VAR_12->DCMI_ExtendedDataMode);

  VAR_0->CR = VAR_13;
}
