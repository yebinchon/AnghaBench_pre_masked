
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {scalar_t__ Buf; } ;
struct TYPE_9__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,char) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 () ;
 int * FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*,char*,int) ;
 void* FUNC_14 (int) ;

TOKEN_LIST *FUNC_15(char *VAR_0, char *VAR_1)
{
 LIST *VAR_2;
 UINT VAR_3, VAR_4;
 bool VAR_5;
 BUF *VAR_6;
 char VAR_7 = 0;
 TOKEN_LIST *VAR_8;

 if (VAR_0 == ((void*)0))
 {
  return FUNC_10();
 }
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = FUNC_2();
 }

 VAR_6 = FUNC_8();
 VAR_2 = FUNC_9(((void*)0));

 VAR_4 = FUNC_12(VAR_0);
 VAR_5 = 0;

 for (VAR_3 = 0;VAR_3 < (VAR_4 + 1);VAR_3++)
 {
  char VAR_9 = VAR_0[VAR_3];
  bool VAR_10 = FUNC_5(VAR_1, VAR_9);

  if (VAR_9 == '\0')
  {
   VAR_10 = 1;
  }

  if (VAR_10 == 0)
  {
   FUNC_13(VAR_6, &VAR_9, sizeof(char));
  }
  else
  {
   if (VAR_5 == 0)
   {
    FUNC_13(VAR_6, &VAR_7, sizeof(char));

    if ((FUNC_12((char *)VAR_6->Buf)) != 0)
    {
     FUNC_4(VAR_2, FUNC_1((char *)VAR_6->Buf));
    }
    FUNC_0(VAR_6);
   }
  }

  VAR_5 = VAR_10;
 }

 VAR_8 = FUNC_14(sizeof(TOKEN_LIST));
 VAR_8->NumTokens = FUNC_7(VAR_2);
 VAR_8->Token = FUNC_14(sizeof(char *) * VAR_8->NumTokens);

 for (VAR_3 = 0;VAR_3 < VAR_8->NumTokens;VAR_3++)
 {
  VAR_8->Token[VAR_3] = FUNC_6(VAR_2, VAR_3);
 }

 FUNC_11(VAR_2);
 FUNC_3(VAR_6);

 return VAR_8;
}
