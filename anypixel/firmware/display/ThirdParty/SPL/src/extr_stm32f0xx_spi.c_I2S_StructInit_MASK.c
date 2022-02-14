
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int I2S_CPOL; int I2S_AudioFreq; int I2S_MCLKOutput; int I2S_DataFormat; int I2S_Standard; int I2S_Mode; } ;
typedef TYPE_1__ I2S_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(I2S_InitTypeDef* VAR_6)
{


  VAR_6->I2S_Mode = VAR_4;


  VAR_6->I2S_Standard = VAR_5;


  VAR_6->I2S_DataFormat = VAR_2;


  VAR_6->I2S_MCLKOutput = VAR_3;


  VAR_6->I2S_AudioFreq = VAR_0;


  VAR_6->I2S_CPOL = VAR_1;
}
