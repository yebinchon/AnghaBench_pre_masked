
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mouseActive; int mouseInitialized; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2( void ) {
 if (!VAR_1.mouseInitialized ) {
  return;
 }
 if (!VAR_1.mouseActive ) {
  return;
 }
 VAR_1.mouseActive = VAR_0;

 FUNC_0();
 FUNC_1();
}
