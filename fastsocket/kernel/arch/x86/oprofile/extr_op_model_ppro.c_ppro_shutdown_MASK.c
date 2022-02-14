
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_msrs {TYPE_1__* counters; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(struct op_msrs const * const VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  if (!VAR_4->counters[VAR_5].addr)
   continue;
  FUNC_2(VAR_1 + VAR_5);
  FUNC_1(VAR_0 + VAR_5);
 }
 if (VAR_3) {
  FUNC_0(VAR_3);
  VAR_3 = ((void*)0);
 }
}
