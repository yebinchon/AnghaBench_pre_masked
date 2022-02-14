
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char wchar_t ;
typedef int machine_name ;
typedef int exe_path ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int Size; int Buf; } ;
typedef int LIST ;
typedef char IP ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_8 (int ,char*,char*) ;
 TYPE_1__* FUNC_9 () ;
 int VAR_2 ;
 int FUNC_10 (void*,int ,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_1__*,char*,int) ;

void FUNC_18(void *VAR_3)
{
 BUF *VAR_4;
 LIST *VAR_5;
 char VAR_6[VAR_1];
 wchar_t VAR_7[VAR_0];
 char *VAR_8 = ((void*)0);

 if (VAR_3 == ((void*)0))
 {
  return;
 }
 VAR_4 = FUNC_9();

 FUNC_5(VAR_6, sizeof(VAR_6));
 FUNC_13(VAR_6);
 FUNC_12(VAR_6);

 FUNC_3(VAR_7, sizeof(VAR_7));
 FUNC_16(VAR_7);
 FUNC_15(VAR_7);

 FUNC_17(VAR_4, VAR_6, FUNC_11(VAR_6));
 FUNC_17(VAR_4, VAR_7, FUNC_14(VAR_7));
 FUNC_17(VAR_4, VAR_8, FUNC_11(VAR_8));

 VAR_5 = FUNC_4();
 if (VAR_5 != ((void*)0))
 {
  UINT VAR_9;
  for (VAR_9 = 0;VAR_9 < FUNC_7(VAR_5);VAR_9++)
  {
   IP *VAR_10 = FUNC_6(VAR_5, VAR_9);

   FUNC_17(VAR_4, VAR_10, sizeof(IP));
  }
 }
 FUNC_2(VAR_5);

 FUNC_10(VAR_3, VAR_4->Buf, VAR_4->Size);

 FUNC_1(VAR_4);

 FUNC_0(VAR_8);
}
