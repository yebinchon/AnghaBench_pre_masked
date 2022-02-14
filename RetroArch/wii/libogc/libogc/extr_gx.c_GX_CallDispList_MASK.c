
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int vcdClear; scalar_t__ dirtyState; } ;
struct TYPE_3__ {int U8; int U32; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_3(void *VAR_2,u32 VAR_3)
{
 if(VAR_0->dirtyState)
  FUNC_2();

 if(!VAR_0->vcdClear)
  FUNC_1();

 VAR_1->U8 = 0x40;
 VAR_1->U32 = FUNC_0(VAR_2);
 VAR_1->U32 = VAR_3;
}
