
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int modificationCount; int * handle; } ;
typedef TYPE_1__ vmCvar_t ;
typedef int cvar_t ;


 int * FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_2( vmCvar_t *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4 ) {
 cvar_t *VAR_5;

 VAR_5 = FUNC_0( VAR_2, VAR_3, VAR_4 );
 if ( !VAR_1 ) {
  return;
 }
 VAR_1->handle = VAR_5 - VAR_0;
 VAR_1->modificationCount = -1;
 FUNC_1( VAR_1 );
}
