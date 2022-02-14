
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int VC_URI_PARTS_T ;
typedef int VC_CONTAINERS_LIST_T ;
typedef int VC_CONTAINERS_LIST_COMPARATOR_T ;
struct TYPE_3__ {int value; int name; } ;
typedef TYPE_1__ PARAMETER_T ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int *,int *) ;

__attribute__((used)) static VC_CONTAINERS_LIST_T *FUNC_6(VC_URI_PARTS_T *VAR_1)
{
   uint32_t VAR_2 = FUNC_4(VAR_1);
   VC_CONTAINERS_LIST_T *VAR_3;
   uint32_t VAR_4;

   VAR_3 = FUNC_0(VAR_2, sizeof(PARAMETER_T), (VC_CONTAINERS_LIST_COMPARATOR_T)VAR_0);
   if (!VAR_3)
      return ((void*)0);

   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   {
      PARAMETER_T VAR_5;

      FUNC_5(VAR_1, VAR_4, &VAR_5.name, &VAR_5.value);
      if (!FUNC_2(VAR_3, &VAR_5, 0))
      {
         FUNC_1(VAR_3);
         return ((void*)0);
      }
   }





   return VAR_3;
}
