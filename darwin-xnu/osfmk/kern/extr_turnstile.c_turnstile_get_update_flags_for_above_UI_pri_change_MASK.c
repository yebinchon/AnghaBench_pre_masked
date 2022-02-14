
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int turnstile_stats_update_flags_t ;
struct turnstile {scalar_t__ ts_priority; } ;
struct TYPE_2__ {scalar_t__* qos_pri; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_0 (struct turnstile*) ;

__attribute__((used)) static turnstile_stats_update_flags_t
FUNC_1(struct turnstile *VAR_5)
{
 if (VAR_5->ts_priority >
     (VAR_4.qos_pri[VAR_0] + 1) &&
     FUNC_0(VAR_5) != VAR_3) {
  return VAR_1;

 }

 return VAR_2;
}
