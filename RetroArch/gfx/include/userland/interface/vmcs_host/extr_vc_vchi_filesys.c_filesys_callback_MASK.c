
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCOS_EVENT_T ;
typedef int VCHI_CALLBACK_REASON_T ;





 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( void *VAR_0,
                             const VCHI_CALLBACK_REASON_T VAR_1,
                             void *VAR_2 )
{
   (void)VAR_2;

   switch( VAR_1 ) {

   case 128:
      {
         VCOS_EVENT_T *VAR_3 = (VCOS_EVENT_T *) VAR_0;
         if(VAR_3)
            FUNC_0(VAR_3);
      }
      break;

   case 130:
      break;
   case 129:
      break;

   default:
      return;
   }
}
