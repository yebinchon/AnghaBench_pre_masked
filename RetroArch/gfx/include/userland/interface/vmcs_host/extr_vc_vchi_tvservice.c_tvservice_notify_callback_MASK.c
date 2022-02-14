
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCOS_EVENT_T ;
typedef scalar_t__ VCHI_CALLBACK_REASON_T ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2( void *VAR_2,
                                       const VCHI_CALLBACK_REASON_T VAR_3,
                                       void *VAR_4 ) {
   VCOS_EVENT_T *VAR_5 = (VCOS_EVENT_T *)VAR_2;

   FUNC_1("[%s]", VAR_1);
   (void)VAR_4;

   if ( VAR_3 != VAR_0 || VAR_5 == ((void*)0))
      return;

   FUNC_0(VAR_5);
}
