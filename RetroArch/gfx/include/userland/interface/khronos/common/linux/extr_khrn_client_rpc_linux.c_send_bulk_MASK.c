
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ VCOS_STATUS_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_3__ {scalar_t__ size; void const* data; } ;
typedef TYPE_1__ VCHIQ_ELEMENT_T ;
typedef int CLIENT_THREAD_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,void const*,int ,int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(CLIENT_THREAD_STATE_T *VAR_4, const void *VAR_5, uint32_t VAR_6)
{
   if (VAR_6 <= VAR_0) {
      VCHIQ_ELEMENT_T VAR_7;

      VAR_7.data = VAR_5;
      VAR_7.size = VAR_6;

      VCHIQ_STATUS_T VAR_8 = FUNC_4(FUNC_1(VAR_4), &VAR_7, 1);
      FUNC_0(VAR_8);
      FUNC_5(VAR_8 == VAR_1);
   } else {
      VCHIQ_STATUS_T VAR_9 = FUNC_3(FUNC_1(VAR_4), VAR_5, FUNC_2(VAR_6), ((void*)0));
      FUNC_0(VAR_9);
      FUNC_5(VAR_9 == VAR_1);
      VCOS_STATUS_T VAR_10 = FUNC_6(&VAR_3);
      FUNC_0(VAR_10);
      FUNC_5(VAR_10 == VAR_2);
   }
}
