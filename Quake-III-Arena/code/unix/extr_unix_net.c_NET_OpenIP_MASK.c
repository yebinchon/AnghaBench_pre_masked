
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int string; } ;
typedef TYPE_1__ cvar_t ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_5 (char*,int ) ;

void FUNC_6 (void)
{
 cvar_t *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1 ("net_ip", "localhost", 0);

 VAR_4 = FUNC_1("net_port", FUNC_5("%i", VAR_1), 0)->value;

 for ( VAR_5 = 0 ; VAR_5 < 10 ; VAR_5++ ) {
  VAR_2 = FUNC_4 (VAR_3->string, VAR_4 + VAR_5);
  if ( VAR_2 ) {
   FUNC_2( "net_port", VAR_4 + VAR_5 );
   FUNC_3();
   return;
  }
 }
 FUNC_0 (VAR_0, "Couldn't allocate IP port");
}
