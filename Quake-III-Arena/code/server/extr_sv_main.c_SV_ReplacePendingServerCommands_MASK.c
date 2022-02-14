
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reliableSent; int reliableSequence; char const** reliableCommands; } ;
typedef TYPE_1__ client_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int ) ;
 int FUNC_1 (char const*,char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (char*) ;

int FUNC_4( client_t *VAR_3, const char *VAR_4 ) {
 int VAR_5, VAR_6, VAR_7, VAR_8;

 for ( VAR_5 = VAR_3->reliableSent+1; VAR_5 <= VAR_3->reliableSequence; VAR_5++ ) {
  VAR_6 = VAR_5 & ( VAR_0 - 1 );

  if ( !FUNC_0(VAR_4, VAR_3->reliableCommands[ VAR_6 ], FUNC_3("cs")) ) {
   FUNC_2(VAR_4, "cs %i", &VAR_7);
   FUNC_2(VAR_3->reliableCommands[ VAR_6 ], "cs %i", &VAR_8);
   if ( VAR_7 == VAR_8 ) {
    FUNC_1( VAR_3->reliableCommands[ VAR_6 ], VAR_4, sizeof( VAR_3->reliableCommands[ VAR_6 ] ) );





    return VAR_2;
   }
  }
 }
 return VAR_1;
}
