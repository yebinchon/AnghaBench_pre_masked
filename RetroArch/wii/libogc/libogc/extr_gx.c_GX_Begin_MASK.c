
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ dirtyState; } ;
struct TYPE_3__ {int U8; int U16; } ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_1(u8 VAR_2,u8 VAR_3,u16 VAR_4)
{
 u8 VAR_5 = VAR_2|(VAR_3&7);

 if(VAR_0->dirtyState)
  FUNC_0();

 VAR_1->U8 = VAR_5;
 VAR_1->U16 = VAR_4;
}
