
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct debug_store {int bts_buffer_base; int bts_index; } ;
struct TYPE_4__ {int ds; } ;
struct TYPE_3__ {int num_counters; int num_counters_fixed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned long long) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct debug_store* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct debug_store *VAR_3 = FUNC_3(VAR_1.ds);
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_2.num_counters)
  return;

 FUNC_2(VAR_4);

 FUNC_4("clearing PMU state on CPU#%d\n", FUNC_5());

 for (VAR_5 = 0; VAR_5 < VAR_2.num_counters; VAR_5++) {
  FUNC_0(FUNC_6(VAR_5), 0ull);
  FUNC_0(FUNC_7(VAR_5), 0ull);
 }
 for (VAR_5 = 0; VAR_5 < VAR_2.num_counters_fixed; VAR_5++)
  FUNC_0(VAR_0 + VAR_5, 0ull);

 if (VAR_3)
  VAR_3->bts_index = VAR_3->bts_buffer_base;

 FUNC_1(VAR_4);
}
