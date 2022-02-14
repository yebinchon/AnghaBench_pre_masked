
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int RemoteIP; } ;
struct TYPE_6__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ SOCK ;
typedef int IP ;
typedef int BUF ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t VAR_1 ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,int *,int *) ;
 TYPE_1__* FUNC_10 (char*,char*) ;
 int * FUNC_11 (int ) ;
 size_t FUNC_12 (char*,char*,int ,int) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 int FUNC_15 (char*) ;

bool FUNC_16(SOCK *VAR_2, char *VAR_3)
{
 BUF *VAR_4;
 char *VAR_5;
 bool VAR_6 = 0;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_11(VAR_0);
 if (VAR_4 == ((void*)0))
 {
  return 1;
 }

 while (1)
 {
  UINT VAR_7;
  TOKEN_LIST *VAR_8;
  IP VAR_9;
  IP VAR_10;
  IP VAR_11;
  IP VAR_12;
  VAR_5 = FUNC_0(VAR_4);

  if (VAR_5 == ((void*)0))
  {
   break;
  }

  FUNC_15(VAR_5);

  VAR_7 = FUNC_12(VAR_5, "//", 0, 0);
  if (VAR_7 != VAR_1)
  {
   VAR_5[VAR_7] = 0;
  }

  VAR_7 = FUNC_12(VAR_5, "#", 0, 0);
  if (VAR_7 != VAR_1)
  {
   VAR_5[VAR_7] = 0;
  }

  FUNC_15(VAR_5);

  VAR_8 = FUNC_10(VAR_5, " \t");
  if (VAR_8 != ((void*)0))
  {
   if (VAR_8->NumTokens >= 1)
   {
    if (VAR_8->NumTokens == 1 || FUNC_13(VAR_3, VAR_8->Token[1]) == 0)
    {
     if (FUNC_9(VAR_8->Token[0], &VAR_9, &VAR_10))
     {
      if (FUNC_7(&VAR_2->RemoteIP) && FUNC_7(&VAR_9))
      {
       FUNC_5(&VAR_11, &VAR_2->RemoteIP, &VAR_10);
       FUNC_5(&VAR_12, &VAR_9, &VAR_10);

       if (FUNC_1(&VAR_11, &VAR_12) == 0)
       {
        VAR_6 = 1;
       }
      }
      else if (FUNC_8(&VAR_2->RemoteIP) && FUNC_8(&VAR_9))
      {
       FUNC_6(&VAR_11, &VAR_2->RemoteIP, &VAR_10);
       FUNC_6(&VAR_12, &VAR_9, &VAR_10);

       if (FUNC_1(&VAR_11, &VAR_12) == 0)
       {
        VAR_6 = 1;
       }
      }
     }
     else if (FUNC_14(&VAR_9, VAR_8->Token[0]))
     {
      if (FUNC_1(&VAR_2->RemoteIP, &VAR_9) == 0)
      {
       VAR_6 = 1;
      }
     }

     if (FUNC_13(VAR_8->Token[0], "*") == 0)
     {
      VAR_6 = 1;
     }
    }
   }

   FUNC_4(VAR_8);
  }

  FUNC_2(VAR_5);
 }

 FUNC_3(VAR_4);

 return VAR_6;
}
