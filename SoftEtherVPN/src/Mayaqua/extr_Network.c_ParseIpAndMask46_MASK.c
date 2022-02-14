
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,int) ;

bool FUNC_12(char *VAR_0, IP *VAR_1, IP *VAR_2)
{
 TOKEN_LIST *VAR_3;
 char *VAR_4;
 char *VAR_5;
 bool VAR_6 = 0;
 IP VAR_7;
 IP VAR_8;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_11(&VAR_7, sizeof(IP));
 FUNC_11(&VAR_8, sizeof(IP));

 VAR_3 = FUNC_7(VAR_0, "/");
 if (VAR_3->NumTokens != 2)
 {
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_4 = VAR_3->Token[0];
 VAR_5 = VAR_3->Token[1];
 FUNC_10(VAR_4);
 FUNC_10(VAR_5);

 if (FUNC_8(&VAR_7, VAR_4))
 {
  if (FUNC_8(&VAR_8, VAR_5))
  {

   if (FUNC_5(&VAR_7) && FUNC_5(&VAR_8))
   {

    VAR_6 = 1;
    FUNC_0(VAR_1, &VAR_7, sizeof(IP));
    FUNC_0(VAR_2, &VAR_8, sizeof(IP));
   }
   else if (FUNC_4(&VAR_7) && FUNC_4(&VAR_8))
   {

    VAR_6 = 1;
    FUNC_0(VAR_1, &VAR_7, sizeof(IP));
    FUNC_0(VAR_2, &VAR_8, sizeof(IP));
   }
  }
  else
  {
   if (FUNC_6(VAR_5))
   {
    UINT VAR_9 = FUNC_9(VAR_5);

    if (FUNC_5(&VAR_7) && VAR_9 <= 128)
    {
     VAR_6 = 1;
     FUNC_0(VAR_1, &VAR_7, sizeof(IP));
     FUNC_3(VAR_2, VAR_9);
    }
    else if (VAR_9 <= 32)
    {
     VAR_6 = 1;
     FUNC_0(VAR_1, &VAR_7, sizeof(IP));
     FUNC_2(VAR_2, VAR_9);
    }
   }
  }
 }

 FUNC_1(VAR_3);

 return VAR_6;
}
