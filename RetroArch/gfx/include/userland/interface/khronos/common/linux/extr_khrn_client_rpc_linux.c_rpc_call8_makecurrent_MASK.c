
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int data ;
struct TYPE_6__ {scalar_t__ merge_pos; int merge_buffer; } ;
typedef TYPE_1__ CLIENT_THREAD_STATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

void FUNC_6(CLIENT_THREAD_STATE_T *VAR_3, uint32_t VAR_4, uint32_t VAR_5,
   uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9, uint32_t VAR_10, uint32_t VAR_11, uint32_t VAR_12)
{
   uint32_t VAR_13;
   if (VAR_3->merge_pos == VAR_0 && (FUNC_1(&VAR_13,VAR_3->merge_buffer,sizeof(VAR_13)), VAR_13 == VAR_1))
   {
      FUNC_2(VAR_3);
      FUNC_5("rpc_call8_makecurrent collapse onto previous makecurrent");

      VAR_3->merge_pos = 0;

      FUNC_0(VAR_2, VAR_3, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
      FUNC_4(VAR_3->merge_pos == VAR_0);

      FUNC_3(VAR_3);
   }
   else
   {
      FUNC_0(VAR_2, VAR_3, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
   }
}
