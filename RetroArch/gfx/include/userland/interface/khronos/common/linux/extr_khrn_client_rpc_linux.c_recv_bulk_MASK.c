
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_4__ {scalar_t__ size; int data; } ;
typedef TYPE_1__ VCHIQ_HEADER_T ;
typedef int CLIENT_THREAD_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,void*,int ,int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(CLIENT_THREAD_STATE_T *VAR_4, void *VAR_5, uint32_t VAR_6)
{
   if (VAR_6 <= VAR_0) {
      VCHIQ_HEADER_T *VAR_7 = FUNC_7(FUNC_2(VAR_4));
      FUNC_8(VAR_7->size == VAR_6);
      FUNC_3(VAR_5, VAR_7->data, VAR_6);
      FUNC_6(FUNC_1(VAR_4), VAR_7);
   } else {
      VCHIQ_STATUS_T VAR_8 = FUNC_5(FUNC_1(VAR_4), VAR_5, FUNC_4(VAR_6), ((void*)0));
      FUNC_0(VAR_8);
      FUNC_8(VAR_8 == VAR_1);
      VCOS_STATUS_T VAR_9 = FUNC_9(&VAR_3);
      FUNC_0(VAR_9);
      FUNC_8(VAR_9 == VAR_2);
   }
}
