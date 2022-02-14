
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_4__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int) ;

bool FUNC_7(char *VAR_0, bool *VAR_1, UCHAR *VAR_2, UCHAR *VAR_3)
{
 TOKEN_LIST *VAR_4;
 char *VAR_5, *VAR_6;
 UCHAR VAR_7[6], VAR_8[6];
 bool VAR_9 = 0;


 if (VAR_0 == ((void*)0))
 {
  return 0;
 }




 if(VAR_1 != ((void*)0) && VAR_2 != ((void*)0) && VAR_3 != ((void*)0))
 {
  VAR_9 = 1;
 }
 if(FUNC_2(VAR_0) != 0)
 {
  if(VAR_9 != 0)
  {
   *VAR_1 = 0;
   FUNC_6(VAR_2, 6);
   FUNC_6(VAR_3, 6);
  }
  return 1;
 }

 VAR_4 = FUNC_3(VAR_0, "/");
 if(VAR_4->NumTokens != 2)
 {
  FUNC_1(VAR_4);
  return 0;
 }

 VAR_5 = VAR_4->Token[0];
 VAR_6 = VAR_4->Token[1];

 FUNC_5(VAR_5);
 FUNC_5(VAR_6);

 if(FUNC_4(VAR_7, VAR_5) == 0 || FUNC_4(VAR_8, VAR_6) == 0)
 {
  FUNC_1(VAR_4);
  return 0;
 }
 else
 {
  if(VAR_9 != 0)
  {
   FUNC_0(VAR_2, VAR_7, 6);
   FUNC_0(VAR_3, VAR_8, 6);
   *VAR_1 = 1;
  }
 }
 FUNC_1(VAR_4);

 return 1;
}
