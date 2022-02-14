
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int xfFlush; int xfFlushExp; } ;
struct TYPE_3__ {int U8; int U16; scalar_t__ U32; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0()
{
 u32 VAR_2,VAR_3,VAR_4;

 VAR_2 = (VAR_0->xfFlush*VAR_0->xfFlushExp);

 VAR_1->U8 = 0x98;
 VAR_1->U16 = VAR_0->xfFlush;

 VAR_3 = (VAR_2+3)/4;
 if(VAR_2>0) {
  VAR_4 = VAR_3/8;
  while(VAR_4) {
   VAR_1->U32 = 0;
     VAR_1->U32 = 0;
     VAR_1->U32 = 0;
     VAR_1->U32 = 0;
     VAR_1->U32 = 0;
     VAR_1->U32 = 0;
     VAR_1->U32 = 0;
     VAR_1->U32 = 0;
     VAR_4--;
  }
  VAR_3 &= 0x0007;
  if(VAR_3) {
   while(VAR_3) {
    VAR_1->U32 = 0;
       VAR_3--;
   }
  }
 }
 VAR_0->xfFlush = 1;
}
