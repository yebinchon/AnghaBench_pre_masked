
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char*,char*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,size_t,int ) ;

bool FUNC_9(char *VAR_0, UINT VAR_1)
{
 bool VAR_2 = 0;
 char *VAR_3;
 BUF *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_5("/etc/hosts");
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3 == ((void*)0))
  {
   break;
  }
  else
  {
   TOKEN_LIST *VAR_5 = FUNC_4(VAR_3, " \t");

   if (VAR_5 != ((void*)0))
   {
    if (VAR_5->NumTokens >= 2)
    {
     if (FUNC_7(VAR_5->Token[0], "127.0.0.1") == 0)
     {
      UINT VAR_6;

      for (VAR_6 = 1;VAR_6 < VAR_5->NumTokens;VAR_6++)
      {
       if (FUNC_6(VAR_5->Token[VAR_6], "localhost") == 0)
       {
        FUNC_8(VAR_0, VAR_1, VAR_5->Token[VAR_6]);
        VAR_2 = 1;
       }
      }
     }
    }
   }
   FUNC_3(VAR_5);
  }

  FUNC_1(VAR_3);
 }

 FUNC_2(VAR_4);

 return VAR_2;
}
