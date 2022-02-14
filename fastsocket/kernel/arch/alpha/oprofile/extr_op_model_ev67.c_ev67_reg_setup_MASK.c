
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_system_config {int dummy; } ;
struct op_register_config {unsigned long mux_select; unsigned long reset_values; unsigned long need_reset; scalar_t__ proc_mode; } ;
struct op_counter_config {int event; unsigned long count; scalar_t__ enabled; } ;



__attribute__((used)) static void
FUNC_0(struct op_register_config *VAR_0,
        struct op_counter_config *VAR_1,
        struct op_system_config *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_3 = 1UL << 4;



 if (VAR_1[1].enabled) {
  VAR_3 |= (VAR_1[1].event & 3) << 2;
 } else {
  if (VAR_1[0].event == 0)
   VAR_3 |= 1UL << 2;
 }
 VAR_0->mux_select = VAR_3;





 VAR_0->proc_mode = 0;





 VAR_4 = VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < 2; ++VAR_6) {
  unsigned long VAR_7 = VAR_1[VAR_6].count;
  if (!VAR_1[VAR_6].enabled)
   continue;

  if (VAR_7 > 0x100000)
   VAR_7 = 0x100000;
  VAR_1[VAR_6].count = VAR_7;
  VAR_4 |= (0x100000 - VAR_7) << (VAR_6 ? 6 : 28);
  if (VAR_7 != 0x100000)
   VAR_5 |= 1 << VAR_6;
 }
 VAR_0->reset_values = VAR_4;
 VAR_0->need_reset = VAR_5;
}
