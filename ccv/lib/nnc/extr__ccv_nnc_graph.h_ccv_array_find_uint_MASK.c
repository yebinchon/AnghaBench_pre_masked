
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ const uint32_t ;
struct TYPE_4__ {int rnum; } ;
typedef TYPE_1__ ccv_array_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) inline static int FUNC_1(ccv_array_t* VAR_0, const uint32_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->rnum; VAR_2++)
  if (*(uint32_t*)FUNC_0(VAR_0, VAR_2) == VAR_1)
   return 1;
 return 0;
}
