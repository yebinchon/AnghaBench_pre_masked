
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char*,char*) ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*) ;

bool FUNC_9(char *VAR_0, UINT VAR_1)
{
 bool VAR_2 = 0;
 BUF *VAR_3 = FUNC_5("/etc/resolv.conf");

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  char *VAR_4 = FUNC_0(VAR_3);
  TOKEN_LIST *VAR_5;

  if (VAR_4 == ((void*)0))
  {
   break;
  }

  FUNC_8(VAR_4);

  VAR_5 = FUNC_4(VAR_4, " \t");
  if (VAR_5 != ((void*)0))
  {
   if (VAR_5->NumTokens == 2)
   {
    if (FUNC_6(VAR_5->Token[0], "domain") == 0)
    {
     FUNC_7(VAR_0, VAR_1, VAR_5->Token[1]);
     VAR_2 = 1;
    }
   }
   FUNC_3(VAR_5);
  }

  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_3);

 return VAR_2;
}
