
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t first; int count; int length; scalar_t__* h; int sum; } ;
typedef TYPE_1__ FILTER_T ;


 size_t FUNC_0 (size_t,int ) ;

__attribute__((used)) static void FUNC_1(FILTER_T *VAR_0)
{
   if (!VAR_0->count)
      return;

   VAR_0->sum -= VAR_0->h[VAR_0->first];
   VAR_0->first = FUNC_0(VAR_0->first, VAR_0->length);
   VAR_0->count--;
}
