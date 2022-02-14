
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4;

   VAR_4 = FUNC_0(VAR_3, VAR_1);
   if(VAR_4 != VAR_2) return VAR_4;

   VAR_4 = FUNC_0(VAR_3, VAR_0);
   if(VAR_4 != VAR_2) return VAR_4;

   return VAR_4;
}
