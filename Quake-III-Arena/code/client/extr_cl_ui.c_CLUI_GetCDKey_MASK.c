
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* string; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int) ;
 TYPE_1__* FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 () ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3( char *VAR_3, int VAR_4 ) {
 cvar_t *VAR_5;
 VAR_5 = FUNC_1 ("fs_game", "", VAR_0|VAR_1 );
 if (FUNC_2() && VAR_5 && VAR_5->string[0] != 0) {
  FUNC_0( VAR_3, &VAR_2[16], 16);
  VAR_3[16] = 0;
 } else {
  FUNC_0( VAR_3, VAR_2, 16);
  VAR_3[16] = 0;
 }
}
