
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int CLIENT_THREAD_STATE_T ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void const*,void const*,int,int,int) ;
 int FUNC_4 (int *,void const*,int) ;
 void const* VAR_0 ;

void FUNC_5(CLIENT_THREAD_STATE_T *VAR_1, const void *VAR_2, uint32_t VAR_3, int32_t VAR_4, uint32_t VAR_5)
{

   if (VAR_2 && VAR_3) {


      FUNC_2(VAR_1);

      if (VAR_3 == VAR_4) {

         FUNC_4(VAR_1, VAR_2, VAR_5 * VAR_3);
      } else {
         FUNC_1(VAR_5 * VAR_3);
         FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
         FUNC_4(VAR_1, VAR_0, VAR_5 * VAR_3);
      }
   }



}
