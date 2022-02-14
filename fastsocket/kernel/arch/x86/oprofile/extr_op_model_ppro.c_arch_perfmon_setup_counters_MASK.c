
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int version_id; int num_counters; int bit_width; } ;
union cpuid10_eax {TYPE_1__ split; int full; } ;
struct TYPE_6__ {int x86; int x86_model; } ;
struct TYPE_5__ {void* num_controls; void* num_counters; } ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 void* VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 union cpuid10_eax VAR_3;

 VAR_3.full = FUNC_0(0xa);


 if (VAR_3.split.version_id == 0 && VAR_0.x86 == 6 &&
  VAR_0.x86_model == 15) {
  VAR_3.split.version_id = 2;
  VAR_3.split.num_counters = 2;
  VAR_3.split.bit_width = 40;
 }

 VAR_1 = VAR_3.split.num_counters;

 VAR_2.num_counters = VAR_1;
 VAR_2.num_controls = VAR_1;
}
