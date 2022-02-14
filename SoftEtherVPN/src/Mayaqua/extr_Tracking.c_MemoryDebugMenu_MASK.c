
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_4__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int VAR_1 ;

void FUNC_9()
{
 char VAR_2[VAR_0];
 TOKEN_LIST *VAR_3;
 char *VAR_4;
 FUNC_6("Mayaqua Kernel Memory Debug Tools\n"
  "Copyright (c) SoftEther VPN Project. All Rights Reserved.\n\n");


 FUNC_6("Unfortunately The call stack is not recorded on non-Windows systems\n");
 FUNC_6("since UnixGetCallStack() and UnixGetCallStackSymbolInfo() is not implemented.\n");
 FUNC_6("Therefore please use valgrind or other memory leak check tools\n");
 FUNC_6("to get the actual call stacks of memory leak causes.\n\n");


 VAR_1 = 0;
 while (1)
 {
  FUNC_6("debug>");
  FUNC_4(VAR_2, sizeof(VAR_2));
  VAR_3 = FUNC_5(VAR_2, " \t");
  if (VAR_3->NumTokens == 0)
  {
   FUNC_3(VAR_3);
   FUNC_0();
   continue;
  }
  VAR_4 = VAR_3->Token[0];
  if (!FUNC_7(VAR_4, "?"))
  {
   FUNC_1();
  }
  else if (!FUNC_7(VAR_4, "a"))
  {
   FUNC_0();
  }
  else if (!FUNC_7(VAR_4, "i"))
  {
   if (VAR_3->NumTokens == 1)
   {
    FUNC_6("Usage: i <obj_id>\n\n");
   }
   else
   {
    FUNC_2(FUNC_8(VAR_3->Token[1]));
   }
  }
  else if (!FUNC_7(VAR_4, "q"))
  {
   break;
  }
  else if (FUNC_8(VAR_4) != 0)
  {
   FUNC_2(FUNC_8(VAR_3->Token[0]));
  }
  else
  {
   FUNC_6("Command Not Found,\n\n");
  }
  FUNC_3(VAR_3);
 }
 FUNC_3(VAR_3);
 VAR_1 = 1;
}
