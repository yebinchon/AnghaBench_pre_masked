
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int full_path ;
typedef int exe_dir ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int Buffer; } ;
typedef int SERVER ;
typedef TYPE_1__ RPC_READ_LOG_FILE ;
typedef int IO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *,void*,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,void*,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int) ;
 void* FUNC_12 (scalar_t__) ;

void FUNC_13(SERVER *VAR_3, char *VAR_4, UINT VAR_5, RPC_READ_LOG_FILE *VAR_6)
{
 char VAR_7[VAR_2], VAR_8[VAR_2];
 IO *VAR_9;

 if (VAR_3 == ((void*)0) || VAR_6 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_11(VAR_6, sizeof(RPC_READ_LOG_FILE));

 FUNC_7(VAR_7, sizeof(VAR_7));
 FUNC_5(VAR_8, sizeof(VAR_8), "%s/%s", VAR_7, VAR_4);


 VAR_9 = FUNC_1(VAR_8, 0, 0);
 if (VAR_9 != ((void*)0))
 {
  UINT VAR_10 = FUNC_4(VAR_9);

  if (VAR_5 < VAR_10)
  {
   UINT VAR_11 = FUNC_8(VAR_10 - VAR_5, VAR_1);
   void *VAR_12 = FUNC_12(VAR_11);

   FUNC_3(VAR_9, VAR_0, VAR_5);
   FUNC_2(VAR_9, VAR_12, VAR_11);

   VAR_6->Buffer = FUNC_9();
   FUNC_10(VAR_6->Buffer, VAR_12, VAR_11);
   FUNC_6(VAR_12);
  }

  FUNC_0(VAR_9);
 }
}
