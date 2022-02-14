
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {scalar_t__ mouseActive; int mouseInitialized; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_2( void )
{
 if (!VAR_3.mouseInitialized ) {
  return;
 }
 if ( !VAR_0->integer )
 {
  VAR_3.mouseActive = VAR_1;
  return;
 }
 if ( VAR_3.mouseActive )
 {
  return;
 }

 VAR_3.mouseActive = VAR_2;

 if ( VAR_0->integer != -1 ) {
  FUNC_0();
 }
 FUNC_1();
}
