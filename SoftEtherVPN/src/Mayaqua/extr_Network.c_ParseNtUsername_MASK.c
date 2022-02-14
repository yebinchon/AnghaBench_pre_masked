
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp_username ;
typedef int tmp_domain ;
typedef int UINT ;
struct TYPE_4__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*) ;

void FUNC_5(char *VAR_1, char *VAR_2, UINT VAR_3, char *VAR_4, UINT VAR_5, bool VAR_6)
{
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 TOKEN_LIST *VAR_9;

 if (VAR_1 != VAR_2)
 {
  FUNC_0(VAR_2, VAR_3);
 }

 FUNC_0(VAR_4, VAR_5);

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_7, sizeof(VAR_7), VAR_1);
 FUNC_0(VAR_8, sizeof(VAR_8));


 if (VAR_6 == 0)
 {
  VAR_9 = FUNC_3(VAR_7, "@");
  if (VAR_9->NumTokens >= 1)
  {
   FUNC_4(VAR_7, sizeof(VAR_7), VAR_9->Token[0]);
  }
  if (VAR_9->NumTokens >= 2)
  {
   FUNC_4(VAR_8, sizeof(VAR_8), VAR_9->Token[1]);
  }
  FUNC_1(VAR_9);
 }


 VAR_9 = FUNC_3(VAR_7, "\\");
 if (VAR_9->NumTokens >= 2)
 {
  if (FUNC_2(VAR_8))
  {
   FUNC_4(VAR_8, sizeof(VAR_8), VAR_9->Token[0]);
  }

  FUNC_4(VAR_7, sizeof(VAR_7), VAR_9->Token[1]);
 }
 FUNC_1(VAR_9);

 FUNC_4(VAR_2, VAR_3, VAR_7);
 FUNC_4(VAR_4, VAR_5, VAR_8);
}
