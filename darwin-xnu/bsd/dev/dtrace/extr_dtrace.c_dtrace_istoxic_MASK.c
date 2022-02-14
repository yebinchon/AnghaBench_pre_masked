
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t cpu_id; } ;
struct TYPE_5__ {uintptr_t cpuc_dtrace_illval; } ;
struct TYPE_4__ {uintptr_t dtt_base; uintptr_t dtt_limit; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(uintptr_t VAR_5, size_t VAR_6)
{
 uintptr_t VAR_7, VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = VAR_3[VAR_9].dtt_base;
  VAR_8 = VAR_3[VAR_9].dtt_limit - VAR_7;

  if (VAR_5 - VAR_7 < VAR_8) {
   FUNC_0(VAR_1);
   VAR_2[VAR_0->cpu_id].cpuc_dtrace_illval = VAR_5;
   return (1);
  }

  if (VAR_7 - VAR_5 < VAR_6) {
   FUNC_0(VAR_1);
   VAR_2[VAR_0->cpu_id].cpuc_dtrace_illval = VAR_7;
   return (1);
  }
 }

 return (0);
}
