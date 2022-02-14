
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCOS_EVENT_T ;
typedef scalar_t__ VCHI_CALLBACK_REASON_T ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( void *VAR_1,
                                        const VCHI_CALLBACK_REASON_T VAR_2,
                                        void *VAR_3 ) {
   VCOS_EVENT_T *VAR_4 = (VCOS_EVENT_T *)VAR_1;

   if ( VAR_2 != VAR_0 || VAR_4 == ((void*)0))
      return;

   FUNC_0(VAR_4);
}
