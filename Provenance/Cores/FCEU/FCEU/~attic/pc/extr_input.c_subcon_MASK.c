
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {scalar_t__* ButtType; scalar_t__* DeviceNum; scalar_t__* ButtonNum; int NumC; } ;
typedef TYPE_1__ ButtConfig ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, ButtConfig *VAR_2)
{
 uint8 VAR_3[256];
 int VAR_4;

 for(VAR_4=0;VAR_4<VAR_0;VAR_4++)
 {
  FUNC_1(VAR_3,"%s (%d)",VAR_1,VAR_4+1);
  FUNC_0(VAR_3,VAR_2,VAR_4);

  if(VAR_4 && VAR_2->ButtType[VAR_4]==VAR_2->ButtType[VAR_4-1] && VAR_2->DeviceNum[VAR_4]==VAR_2->DeviceNum[VAR_4-1] &&
                VAR_2->ButtonNum[VAR_4]==VAR_2->ButtonNum[VAR_4-1])
         break;
 }
 VAR_2->NumC=VAR_4;
}
