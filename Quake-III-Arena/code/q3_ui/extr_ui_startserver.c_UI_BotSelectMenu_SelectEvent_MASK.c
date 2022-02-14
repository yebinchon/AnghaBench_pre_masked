
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t selectedmodel; int * botnames; } ;
struct TYPE_3__ {int newBotName; int newBot; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2( void* VAR_5, int VAR_6 ) {
 if( VAR_6 != VAR_1 ) {
  return;
 }
 FUNC_1();

 VAR_4.newBot = VAR_3;
 FUNC_0( VAR_4.newBotName, VAR_2.botnames[VAR_2.selectedmodel % VAR_0], 16 );
}
