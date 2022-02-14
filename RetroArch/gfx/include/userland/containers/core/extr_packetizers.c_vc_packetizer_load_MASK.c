
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VC_PACKETIZER_T ;
struct TYPE_3__ {scalar_t__ (* open ) (int *) ;struct TYPE_3__* next; } ;
typedef TYPE_1__ VC_PACKETIZER_REGISTRY_ENTRY_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(VC_PACKETIZER_T *VAR_2)
{
   VC_CONTAINER_STATUS_T VAR_3 = VAR_0;
   VC_PACKETIZER_REGISTRY_ENTRY_T *VAR_4;


   for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
   {
      VAR_3 = VAR_4->open(VAR_2);
      if(VAR_3 != VAR_0)
         break;
   }

   return VAR_3;
}
