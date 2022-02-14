
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buttons; } ;
typedef TYPE_1__ usercmd_t ;
struct TYPE_7__ {scalar_t__ keyCatchers; } ;
struct TYPE_6__ {scalar_t__ wasPressed; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_0( usercmd_t *VAR_6 ) {
 int VAR_7;






 for (VAR_7 = 0 ; VAR_7 < 15 ; VAR_7++) {
  if ( VAR_4[VAR_7].active || VAR_4[VAR_7].wasPressed ) {
   VAR_6->buttons |= 1 << VAR_7;
  }
  VAR_4[VAR_7].wasPressed = VAR_5;
 }

 if ( VAR_3.keyCatchers ) {
  VAR_6->buttons |= VAR_1;
 }



 if ( VAR_2 && !VAR_3.keyCatchers ) {
  VAR_6->buttons |= VAR_0;
 }
}
