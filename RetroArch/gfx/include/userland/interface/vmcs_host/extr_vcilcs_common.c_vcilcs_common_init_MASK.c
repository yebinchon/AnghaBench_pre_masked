
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * component_list; int * ilcs; int component_lock; } ;
typedef int ILCS_SERVICE_T ;
typedef TYPE_1__ ILCS_COMMON_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;

__attribute__((used)) static ILCS_COMMON_T *FUNC_3(ILCS_SERVICE_T *VAR_1)
{
   ILCS_COMMON_T *VAR_2;

   VAR_2 = FUNC_1(sizeof(ILCS_COMMON_T), "ILCS_HOST_COMMON");
   if(!VAR_2)
      return ((void*)0);

   if(FUNC_2(&VAR_2->component_lock, "ILCS", 1) != VAR_0)
   {
      FUNC_0(VAR_2);
      return ((void*)0);
   }

   VAR_2->ilcs = VAR_1;
   VAR_2->component_list = ((void*)0);
   return VAR_2;
}
