
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ** uint32_t ;
typedef int int32_t ;
typedef scalar_t__ VCHI_INSTANCE_T ;
typedef int VCHI_CONNECTION_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_INSTANCE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ** const) ;

int32_t
FUNC_2( VCHI_CONNECTION_T **VAR_1,
   const uint32_t VAR_2,
   VCHI_INSTANCE_T VAR_3 )
{
   VCHIQ_STATUS_T VAR_4;

   FUNC_1(VAR_1);
   FUNC_1(VAR_2);

   VAR_4 = FUNC_0((VCHIQ_INSTANCE_T)VAR_3);

   return (VAR_4 == VAR_0) ? 0 : -1;
}
