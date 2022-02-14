
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {char** Token; int NumTokens; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 char* FUNC_7 (char*,char*) ;
 int VAR_0 ;

TOKEN_LIST *FUNC_8(char *VAR_1, char *VAR_2)
{
 TOKEN_LIST *VAR_3;
 char *VAR_4;
 char *VAR_5, *VAR_6;
 UINT VAR_7;
 UINT VAR_8;
 if (VAR_1 == ((void*)0))
 {
  VAR_3 = FUNC_6(sizeof(TOKEN_LIST));
  VAR_3->Token = FUNC_6(0);
  return VAR_3;
 }
 if (VAR_2 == ((void*)0))
 {
  VAR_2 = " ,\t\r\n";
 }
 VAR_7 = FUNC_4(VAR_1);
 VAR_5 = FUNC_2(VAR_7 + 1);
 VAR_6 = FUNC_2(VAR_7 + 1);
 FUNC_3(VAR_5, 0, VAR_1);
 FUNC_3(VAR_6, 0, VAR_1);

 FUNC_1(VAR_0);
 {
  VAR_4 = FUNC_7(VAR_5, VAR_2);
  VAR_8 = 0;
  while (VAR_4 != ((void*)0))
  {
   VAR_8++;
   VAR_4 = FUNC_7(((void*)0), VAR_2);
  }
  VAR_3 = FUNC_2(sizeof(TOKEN_LIST));
  VAR_3->NumTokens = VAR_8;
  VAR_3->Token = (char **)FUNC_2(sizeof(char *) * VAR_8);
  VAR_8 = 0;
  VAR_4 = FUNC_7(VAR_6, VAR_2);
  while (VAR_4 != ((void*)0))
  {
   VAR_3->Token[VAR_8] = (char *)FUNC_2(FUNC_4(VAR_4) + 1);
   FUNC_3(VAR_3->Token[VAR_8], 0, VAR_4);
   VAR_8++;
   VAR_4 = FUNC_7(((void*)0), VAR_2);
  }
 }
 FUNC_5(VAR_0);

 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 return VAR_3;
}
