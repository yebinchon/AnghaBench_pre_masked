
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; scalar_t__ length; size_t last; int sum; int * h; } ;
typedef int TIME_T ;
typedef TYPE_1__ FILTER_T ;


 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(FILTER_T *VAR_0, TIME_T VAR_1)
{
   if (VAR_0->count == VAR_0->length)
      FUNC_0(VAR_0);

   VAR_0->last = FUNC_1(VAR_0->last, VAR_0->length);
   VAR_0->h[VAR_0->last] = VAR_1;
   VAR_0->sum = FUNC_2(VAR_0->sum, VAR_1);
   VAR_0->count++;
}
