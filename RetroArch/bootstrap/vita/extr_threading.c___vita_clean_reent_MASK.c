
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int needs_reclaim; scalar_t__ thread_id; } ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ SceKernelThreadInfo ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(void)
{
 int VAR_2;
 SceKernelThreadInfo VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
 {
  VAR_3.size = sizeof(SceKernelThreadInfo);

  if (FUNC_0(VAR_1[VAR_2].thread_id, &VAR_3) < 0)
  {
   VAR_1[VAR_2].thread_id = 0;
   VAR_1[VAR_2].needs_reclaim = 1;
  }
 }
}
