
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sysMsgTime; } ;
struct TYPE_3__ {int oldButtonState; int mouseInitialized; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int ,int *) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_1 (int VAR_6)
{
 int VAR_7;

 if ( !VAR_5.mouseInitialized )
  return;


 for (VAR_7 = 0 ; VAR_7 < 3 ; VAR_7++ )
 {
  if ( (VAR_6 & (1<<VAR_7)) &&
   !(VAR_5.oldButtonState & (1<<VAR_7)) )
  {
   FUNC_0( VAR_2.sysMsgTime, VAR_1, VAR_0 + VAR_7, VAR_4, 0, ((void*)0) );
  }

  if ( !(VAR_6 & (1<<VAR_7)) &&
   (VAR_5.oldButtonState & (1<<VAR_7)) )
  {
   FUNC_0( VAR_2.sysMsgTime, VAR_1, VAR_0 + VAR_7, VAR_3, 0, ((void*)0) );
  }
 }

 VAR_5.oldButtonState = VAR_6;
}
