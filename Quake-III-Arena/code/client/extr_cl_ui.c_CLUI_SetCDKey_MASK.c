
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* string; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,char*,int) ;
 TYPE_1__* FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3( char *VAR_5 ) {
 cvar_t *VAR_6;
 VAR_6 = FUNC_1 ("fs_game", "", VAR_1|VAR_2 );
 if (FUNC_2() && VAR_6 && VAR_6->string[0] != 0) {
  FUNC_0( &VAR_3[16], VAR_5, 16 );
  VAR_3[32] = 0;

  VAR_4 |= VAR_0;
 } else {
  FUNC_0( VAR_3, VAR_5, 16 );

  VAR_4 |= VAR_0;
 }
}
