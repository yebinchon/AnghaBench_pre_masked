
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* BotLibShutdown ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

int FUNC_1( void ) {

 if ( !VAR_0 ) {
  return -1;
 }

 return VAR_0->BotLibShutdown();
}
