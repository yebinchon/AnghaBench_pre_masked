
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ binding; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (char*,char*) ;

void FUNC_6 (void)
{
 int VAR_1, VAR_2, VAR_3;
 char VAR_4[1024];

 VAR_2 = FUNC_0();

 if (VAR_2 < 2)
 {
  FUNC_2 ("bind <key> [command] : attach a command to a key\n");
  return;
 }
 VAR_3 = FUNC_4 (FUNC_1(1));
 if (VAR_3==-1)
 {
  FUNC_2 ("\"%s\" isn't a valid key\n", FUNC_1(1));
  return;
 }

 if (VAR_2 == 2)
 {
  if (VAR_0[VAR_3].binding)
   FUNC_2 ("\"%s\" = \"%s\"\n", FUNC_1(1), VAR_0[VAR_3].binding );
  else
   FUNC_2 ("\"%s\" is not bound\n", FUNC_1(1) );
  return;
 }


 VAR_4[0] = 0;
 for (VAR_1=2 ; VAR_1< VAR_2 ; VAR_1++)
 {
  FUNC_5 (VAR_4, FUNC_1(VAR_1));
  if (VAR_1 != (VAR_2-1))
   FUNC_5 (VAR_4, " ");
 }

 FUNC_3 (VAR_3, VAR_4);
}
