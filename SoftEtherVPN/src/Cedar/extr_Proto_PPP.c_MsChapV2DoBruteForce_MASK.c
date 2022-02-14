
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int IPC_MSCHAP_V2_AUTHINFO ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*,int,char*) ;
 scalar_t__ FUNC_8 (char*) ;

char *FUNC_9(IPC_MSCHAP_V2_AUTHINFO *VAR_1, LIST *VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_2);VAR_3++)
 {
  char *VAR_4 = FUNC_1(VAR_2, VAR_3);
  char VAR_5[VAR_0];
  UINT VAR_6, VAR_7;
  UINT VAR_8;

  FUNC_7(VAR_5, sizeof(VAR_5), VAR_4);

  VAR_8 = FUNC_8(VAR_5);
  VAR_7 = FUNC_5(2, FUNC_3(VAR_8, 9));

  for (VAR_6 = 0;VAR_6 < VAR_7;VAR_6++)
  {
   FUNC_6(VAR_5, VAR_6);
   if (FUNC_4(VAR_1, VAR_5))
   {
    return FUNC_0(VAR_5);
   }
  }
 }

 return ((void*)0);
}
