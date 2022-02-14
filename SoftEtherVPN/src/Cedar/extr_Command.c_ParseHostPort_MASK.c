
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,char**,scalar_t__*,scalar_t__) ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int ,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*) ;

bool FUNC_12(char *VAR_2, char **VAR_3, UINT *VAR_4, UINT VAR_5)
{
 TOKEN_LIST *VAR_6;
 bool VAR_7 = 0;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_7(VAR_2, "["))
 {
  if (FUNC_2(VAR_2, "]"))
  {

   UINT VAR_8, VAR_9;
   char VAR_10[VAR_1];

   FUNC_8(VAR_10, sizeof(VAR_10), VAR_2);

   VAR_9 = FUNC_6(VAR_10, "]", 0, 0);
   if (VAR_9 != VAR_0)
   {
    UINT VAR_11 = FUNC_9(VAR_10);

    for (VAR_8 = VAR_9;VAR_8 < VAR_11;VAR_8++)
    {
     if (VAR_10[VAR_8] == ':')
     {
      VAR_10[VAR_8] = '@';
     }
    }
   }

   return FUNC_4(VAR_10, VAR_3, VAR_4, VAR_5);
  }
 }

 if (FUNC_2(VAR_2, "@"))
 {

  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 }

 VAR_6 = FUNC_5(VAR_2, ":");
 if (VAR_6 == ((void*)0))
 {
  return 0;
 }

 if (VAR_4 != ((void*)0))
 {
  *VAR_4 = 0;
 }

 if (VAR_5 == 0)
 {
  if (VAR_6->NumTokens < 2)
  {
   FUNC_1(VAR_6);
   return 0;
  }

  if (FUNC_10(VAR_6->Token[1]) == 0)
  {
   FUNC_1(VAR_6);
   return 0;
  }
 }

 if (VAR_6->NumTokens >= 2 && FUNC_10(VAR_6->Token[1]) == 0)
 {
  FUNC_1(VAR_6);
  return 0;
 }

 if (VAR_6->NumTokens >= 1 && FUNC_3(VAR_6->Token[0]) == 0)
 {
  VAR_7 = 1;

  if (VAR_3 != ((void*)0))
  {
   *VAR_3 = FUNC_0(VAR_6->Token[0]);
   FUNC_11(*VAR_3);
  }

  if (VAR_6->NumTokens >= 2)
  {
   if (VAR_4 != ((void*)0))
   {
    *VAR_4 = FUNC_10(VAR_6->Token[1]);
   }
  }
 }

 if (VAR_4 != ((void*)0))
 {
  if (*VAR_4 == 0)
  {
   *VAR_4 = VAR_5;
  }
 }

 FUNC_1(VAR_6);

 return VAR_7;
}
