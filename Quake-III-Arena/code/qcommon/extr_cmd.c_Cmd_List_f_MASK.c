
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ cmd_function_t ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_4 (void)
{
 cmd_function_t *VAR_2;
 int VAR_3;
 char *VAR_4;

 if ( FUNC_0() > 1 ) {
  VAR_4 = FUNC_1( 1 );
 } else {
  VAR_4 = ((void*)0);
 }

 VAR_3 = 0;
 for (VAR_2=VAR_0 ; VAR_2 ; VAR_2=VAR_2->next) {
  if (VAR_4 && !FUNC_2(VAR_4, VAR_2->name, VAR_1)) continue;

  FUNC_3 ("%s\n", VAR_2->name);
  VAR_3++;
 }
 FUNC_3 ("%i commands\n", VAR_3);
}
