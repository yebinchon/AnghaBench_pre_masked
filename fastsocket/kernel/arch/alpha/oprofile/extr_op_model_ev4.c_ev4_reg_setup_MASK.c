
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_system_config {int dummy; } ;
struct op_register_config {unsigned long mux_select; scalar_t__ need_reset; scalar_t__ reset_values; scalar_t__ freq; scalar_t__ proc_mode; } ;
struct op_counter_config {int event; unsigned long count; scalar_t__ enabled; } ;



__attribute__((used)) static void
FUNC_0(struct op_register_config *VAR_0,
       struct op_counter_config *VAR_1,
       struct op_system_config *VAR_2)
{
 unsigned long VAR_3 = 0, VAR_4, VAR_5;
 VAR_3 |= (VAR_1[0].enabled ? VAR_1[0].event << 8 : 14 << 8);
 VAR_3 |= (VAR_1[1].enabled ? (VAR_1[1].event - 16) << 32 : 7ul << 32);







 VAR_4 = VAR_1[0].count;
 if (VAR_4 <= 4096)
  VAR_4 = 4096, VAR_5 = 1;
 else
  VAR_4 = 65536, VAR_5 = 0;
 VAR_1[0].count = VAR_4;
 VAR_3 |= (VAR_1[0].enabled && VAR_5) << 3;

 VAR_4 = VAR_1[1].count;
 if (VAR_4 <= 256)
  VAR_4 = 256, VAR_5 = 1;
 else
  VAR_4 = 4096, VAR_5 = 0;
 VAR_1[1].count = VAR_4;
 VAR_3 |= (VAR_1[1].enabled && VAR_5);

 VAR_0->mux_select = VAR_3;





 VAR_0->proc_mode = 0;


 VAR_0->freq = 0;


 VAR_0->reset_values = 0;
 VAR_0->need_reset = 0;

}
