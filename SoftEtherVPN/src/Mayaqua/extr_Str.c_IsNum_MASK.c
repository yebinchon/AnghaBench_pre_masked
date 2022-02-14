
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef size_t UINT ;
struct TYPE_4__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

bool FUNC_5(char *VAR_1)
{
 char VAR_2;
 UINT VAR_3, VAR_4;
 UINT VAR_5 = 0;
 char VAR_6[VAR_0];
 TOKEN_LIST *VAR_7;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_6, sizeof(VAR_6), VAR_1);
 FUNC_4(VAR_6);

 if (FUNC_3(VAR_6) == 0)
 {
  return 0;
 }

 VAR_7 = FUNC_1(VAR_6, " ");

 if (VAR_7->NumTokens >= 1)
 {
  FUNC_2(VAR_6, sizeof(VAR_6), VAR_7->Token[0]);
 }

 FUNC_0(VAR_7);

 VAR_4 = FUNC_3(VAR_6);
 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  bool VAR_8 = 0;
  VAR_2 = VAR_6[VAR_3];
  if (('0' <= VAR_2 && VAR_2 <= '9') || (VAR_2 == '+') || (VAR_2 == '-') || (VAR_2 == ','))
  {
   VAR_8 = 1;
  }

  if (VAR_8 == 0)
  {
   return 0;
  }
 }

 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  VAR_2 = VAR_6[VAR_3];
  if (VAR_2 == '-')
  {
   VAR_5++;
  }
 }
 if (VAR_5 >= 2)
 {
  return 0;
 }

 return 1;
}
