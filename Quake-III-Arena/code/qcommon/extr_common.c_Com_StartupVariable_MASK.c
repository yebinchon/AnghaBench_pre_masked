
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char const*) ;

void FUNC_5( const char *VAR_3 ) {
 int VAR_4;
 char *VAR_5;
 cvar_t *VAR_6;

 for (VAR_4=0 ; VAR_4 < VAR_2 ; VAR_4++) {
  FUNC_1( VAR_1[VAR_4] );
  if ( FUNC_4( FUNC_0(0), "set" ) ) {
   continue;
  }

  VAR_5 = FUNC_0(1);
  if ( !VAR_3 || !FUNC_4( VAR_5, VAR_3 ) ) {
   FUNC_3( VAR_5, FUNC_0(2) );
   VAR_6 = FUNC_2( VAR_5, "", 0 );
   VAR_6->flags |= VAR_0;

  }
 }
}
