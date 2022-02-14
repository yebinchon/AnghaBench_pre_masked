
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int result_t ;
typedef int ipc_request_t ;
typedef int ipc_object_t ;
typedef int ipc_buffer_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*,int*,int*,int*) ;
 int FUNC_13 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_14(
      char *VAR_5, size_t VAR_6, int *VAR_7, int *VAR_8)
{



   int VAR_9;
   char VAR_10[0x100];
   result_t VAR_11;
   ipc_object_t VAR_12;
   ipc_request_t VAR_13;


   FUNC_13(VAR_5, "Horizon OS", VAR_6);
   *VAR_7 = 0;
   *VAR_8 = 0;

   FUNC_2(VAR_1, FUNC_11());
   FUNC_2(VAR_3, FUNC_10(&VAR_12, "set:sys"));

   VAR_13 = FUNC_6(3);
   ipc_buffer_t VAR_14[] = {
      FUNC_5(VAR_10, 0x100, 0x1a),
   };
   FUNC_7(VAR_13, VAR_14, VAR_0);

   FUNC_2(VAR_2, FUNC_8(VAR_12, &VAR_13, &VAR_4));

   FUNC_12(VAR_10 + 0x68, "%d.%d.%d", VAR_7, VAR_8, &VAR_9);

fail_object:
   FUNC_4(VAR_12);
fail_sm:
   FUNC_9();
fail:
   return;

}
