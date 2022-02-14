
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef scalar_t__ VCHI_INSTANCE_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_INSTANCE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int32_t
FUNC_1( VCHI_INSTANCE_T VAR_1 )
{
   VCHIQ_STATUS_T VAR_2;

   VAR_2 = FUNC_0((VCHIQ_INSTANCE_T)VAR_1);

   return (VAR_2 == VAR_0) ? 0 : -1;
}
