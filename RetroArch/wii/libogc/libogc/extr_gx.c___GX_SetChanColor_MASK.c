
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dirtyState; int * chnMatColor; int * chnAmbColor; } ;


 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1()
{
 if(VAR_0->dirtyState&0x0100)
  FUNC_0(0x100a,VAR_0->chnAmbColor[0]);
 if(VAR_0->dirtyState&0x0200)
  FUNC_0(0x100b,VAR_0->chnAmbColor[1]);
 if(VAR_0->dirtyState&0x0400)
  FUNC_0(0x100c,VAR_0->chnMatColor[0]);
 if(VAR_0->dirtyState&0x0800)
  FUNC_0(0x100d,VAR_0->chnMatColor[1]);
}
