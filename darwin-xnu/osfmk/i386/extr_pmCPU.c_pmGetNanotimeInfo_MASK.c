
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ generation; int shift; int scale; int ns_base; int tsc_base; } ;
typedef TYPE_1__ pm_rtc_nanotime_t ;
struct TYPE_5__ {scalar_t__ generation; int shift; int scale; int ns_base; int tsc_base; } ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(pm_rtc_nanotime_t *VAR_1)
{



 do {
  VAR_1->generation = VAR_0.generation;
  VAR_1->tsc_base = VAR_0.tsc_base;
  VAR_1->ns_base = VAR_0.ns_base;
  VAR_1->scale = VAR_0.scale;
  VAR_1->shift = VAR_0.shift;
 } while(VAR_0.generation != 0
  && VAR_1->generation != VAR_0.generation);
}
