
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int X ;
typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;

void FUNC_9(FOLDER *VAR_1, LIST *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_2);
 {
  UINT VAR_3;
  X *VAR_4;
  for (VAR_3 = 0;VAR_3 < FUNC_5(VAR_2);VAR_3++)
  {
   char VAR_5[VAR_0];
   BUF *VAR_6;
   VAR_4 = FUNC_4(VAR_2, VAR_3);
   FUNC_2(VAR_5, sizeof(VAR_5), "Cert%u", VAR_3);
   VAR_6 = FUNC_8(VAR_4, 0);
   if (VAR_6 != ((void*)0))
   {
    FUNC_0(FUNC_1(VAR_1, VAR_5), "X509", VAR_6);
    FUNC_3(VAR_6);
   }
  }
 }
 FUNC_7(VAR_2);
}
