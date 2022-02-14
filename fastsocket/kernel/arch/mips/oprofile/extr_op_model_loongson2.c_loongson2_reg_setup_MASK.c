
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_counter_config {scalar_t__ enabled; scalar_t__ user; scalar_t__ kernel; scalar_t__ count; int event; } ;
struct TYPE_2__ {unsigned int ctrl; scalar_t__ cnt2_enabled; scalar_t__ cnt1_enabled; scalar_t__ reset_counter2; scalar_t__ reset_counter1; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2(struct op_counter_config *VAR_5)
{
 unsigned int VAR_6 = 0;

 VAR_4.reset_counter1 = 0;
 VAR_4.reset_counter2 = 0;


 if (VAR_5[0].enabled) {
  VAR_6 |= FUNC_0(VAR_5[0].event);
  VAR_4.reset_counter1 = 0x80000000ULL - VAR_5[0].count;
 }

 if (VAR_5[1].enabled) {
  VAR_6 |= FUNC_1(VAR_5[1].event);
  VAR_4.reset_counter2 = (0x80000000ULL - VAR_5[1].count);
 }

 if (VAR_5[0].enabled || VAR_5[1].enabled) {
  VAR_6 |= VAR_0 | VAR_1;
  if (VAR_5[0].kernel || VAR_5[1].kernel)
   VAR_6 |= VAR_2;
  if (VAR_5[0].user || VAR_5[1].user)
   VAR_6 |= VAR_3;
 }

 VAR_4.ctrl = VAR_6;

 VAR_4.cnt1_enabled = VAR_5[0].enabled;
 VAR_4.cnt2_enabled = VAR_5[1].enabled;

}
