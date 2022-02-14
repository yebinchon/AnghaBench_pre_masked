
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
struct TYPE_8__ {int * FirstSock; } ;
struct TYPE_7__ {TYPE_3__* Connection; } ;
struct TYPE_6__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int SOCK ;
typedef TYPE_2__ SESSION ;
typedef int PACK ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*,char*,int,int) ;
 int FUNC_9 (int *,int) ;
 void* FUNC_10 (int) ;

TOKEN_LIST *FUNC_11(SESSION *VAR_1)
{
 SOCK *VAR_2;
 TOKEN_LIST *VAR_3;
 PACK *VAR_4;
 UINT VAR_5;
 UINT VAR_6;

 if (VAR_1 == ((void*)0) || VAR_1->Connection == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = VAR_1->Connection->FirstSock;
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_9(VAR_2, 10000);

 VAR_4 = FUNC_4();
 FUNC_6(VAR_4, "method", "enum_hub");

 FUNC_5(VAR_4, VAR_1->Connection);

 if (FUNC_3(VAR_2, VAR_4) == 0)
 {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 FUNC_1(VAR_4);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_7(VAR_4, "NumHub");
 VAR_3 = FUNC_10(sizeof(TOKEN_LIST));
 VAR_3->NumTokens = VAR_5;
 VAR_3->Token = FUNC_10(sizeof(char *) * VAR_5);
 for (VAR_6 = 0;VAR_6 < VAR_5;VAR_6++)
 {
  char VAR_7[VAR_0];
  if (FUNC_8(VAR_4, "HubName", VAR_7, sizeof(VAR_7), VAR_6))
  {
   VAR_3->Token[VAR_6] = FUNC_0(VAR_7);
  }
 }
 FUNC_1(VAR_4);

 return VAR_3;
}
