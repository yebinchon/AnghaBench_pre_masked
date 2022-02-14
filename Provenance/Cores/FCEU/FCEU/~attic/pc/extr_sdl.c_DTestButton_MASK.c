
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NumC; scalar_t__* ButtType; size_t* ButtonNum; } ;
typedef TYPE_1__ ButtConfig ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__* VAR_2 ;

int FUNC_1(ButtConfig *VAR_3)
{
 int VAR_4;

 for(VAR_4=0;VAR_4<VAR_3->NumC;VAR_4++)
 {
  if(VAR_3->ButtType[VAR_4]==VAR_1)
  {
   if(VAR_2[VAR_3->ButtonNum[VAR_4]])
    return(1);
  }
  else if(VAR_3->ButtType[VAR_4]==VAR_0)
  {
   if(FUNC_0(VAR_3))
    return(1);
  }
 }
 return(0);
}
