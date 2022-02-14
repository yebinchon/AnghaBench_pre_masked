
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int string; } ;
typedef TYPE_1__ cvar_t ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ,int) ;

void FUNC_2( const char *VAR_0, char *VAR_1, int VAR_2 ) {
 cvar_t *VAR_3;

 VAR_3 = FUNC_0 (VAR_0);
 if (!VAR_3) {
  *VAR_1 = 0;
 }
 else {
  FUNC_1( VAR_1, VAR_3->string, VAR_2 );
 }
}
