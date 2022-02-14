
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NumC; int* ButtonNum; size_t* DeviceNum; } ;
typedef TYPE_1__ ButtConfig ;


 int * VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(ButtConfig *VAR_1)
{
 int VAR_2;

 for(VAR_2=0;VAR_2<VAR_1->NumC;VAR_2++)
 {
  if(VAR_1->ButtonNum[VAR_2]&0x8000)
  {
 int VAR_3;
        VAR_3 = FUNC_0(VAR_0[VAR_1->DeviceNum[VAR_2]], VAR_1->ButtonNum[VAR_2]&16383);
        if ((VAR_1->ButtonNum[VAR_2]&0x4000) && VAR_3 <= -16383)
  return(1);
        else if (!(VAR_1->ButtonNum[VAR_2]&0x4000) && VAR_3 >= 16363)
  return(1);
  }
  else if(VAR_1->ButtonNum[VAR_2]&0x2000)
  {
   if( FUNC_2(VAR_0[VAR_1->DeviceNum[VAR_2]],(VAR_1->ButtonNum[VAR_2]>>8)&0x1F) & (VAR_1->ButtonNum[VAR_2]&0xFF))
    return(1);
  }
  else
   if(FUNC_1(VAR_0[VAR_1->DeviceNum[VAR_2]], VAR_1->ButtonNum[VAR_2] ))
    return(1);
 }
 return(0);
}
