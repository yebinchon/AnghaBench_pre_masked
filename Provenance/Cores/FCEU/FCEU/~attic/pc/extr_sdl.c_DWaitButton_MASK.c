
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8 ;
typedef int int32 ;
struct TYPE_16__ {size_t* DeviceNum; int* ButtonNum; void** ButtType; } ;
struct TYPE_14__ {size_t which; size_t axis; int value; } ;
struct TYPE_13__ {int value; size_t which; int hat; } ;
struct TYPE_12__ {size_t which; int button; } ;
struct TYPE_10__ {int sym; } ;
struct TYPE_11__ {TYPE_1__ keysym; } ;
struct TYPE_15__ {int type; TYPE_5__ jaxis; TYPE_4__ jhat; TYPE_3__ jbutton; TYPE_2__ key; } ;
typedef TYPE_6__ SDL_Event ;
typedef TYPE_7__ ButtConfig ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*) ;

int FUNC_4(const uint8 *VAR_3, ButtConfig *VAR_4, int VAR_5)
{
 SDL_Event VAR_6;
 static int32 VAR_7[64][64];
 int VAR_8,VAR_9;

 FUNC_0(VAR_3,0);

 FUNC_3(VAR_3);

 for(VAR_8=0;VAR_8<64;VAR_8++)
  for(VAR_9=0;VAR_9<64;VAR_9++)
   VAR_7[VAR_8][VAR_9]=0x100000;

 while(FUNC_1(&VAR_6))
 {
  switch(VAR_6.type)
  {
   case 128:VAR_4->ButtType[VAR_5]=VAR_1;
      VAR_4->DeviceNum[VAR_5]=0;
      VAR_4->ButtonNum[VAR_5]=VAR_6.key.keysym.sym;
      return(1);
   case 130:VAR_4->ButtType[VAR_5]=VAR_0;
     VAR_4->DeviceNum[VAR_5]=VAR_6.jbutton.which;
     VAR_4->ButtonNum[VAR_5]=VAR_6.jbutton.button;
     return(1);
   case 129:if(VAR_6.jhat.value != VAR_2)
    {
     VAR_4->ButtType[VAR_5]=VAR_0;
     VAR_4->DeviceNum[VAR_5]=VAR_6.jhat.which;
     VAR_4->ButtonNum[VAR_5]=0x2000|((VAR_6.jhat.hat&0x1F)<<8)|VAR_6.jhat.value;
     return(1);
    }
    break;
   case 131:
 if(VAR_7[VAR_6.jaxis.which][VAR_6.jaxis.axis]==0x100000)
 {
  if(FUNC_2(VAR_6.jaxis.value)<1000)
    VAR_7[VAR_6.jaxis.which][VAR_6.jaxis.axis]=VAR_6.jaxis.value;
 }
 else
 {
  if(FUNC_2(VAR_7[VAR_6.jaxis.which][VAR_6.jaxis.axis]-VAR_6.jaxis.value)>=8192)
  {
   VAR_4->ButtType[VAR_5]=VAR_0;
   VAR_4->DeviceNum[VAR_5]=VAR_6.jaxis.which;
   VAR_4->ButtonNum[VAR_5]=0x8000|(VAR_6.jaxis.axis)|((VAR_6.jaxis.value<0)?0x4000:0);
   return(1);
  }
 }
 break;
  }
 }

 return(0);
}
