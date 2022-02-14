
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pm_signal {int signal_group; int bus_word; size_t bit; scalar_t__ sub_unit; } ;
struct TYPE_2__ {size_t debug_bus_control; int group_control; int * pm07_cntrl; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct pm_signal* VAR_7 ;

__attribute__((used)) static void FUNC_10(u32 VAR_8, int VAR_9, u32 VAR_10)
{
 struct pm_signal *VAR_11;
 u32 VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19;

 if (VAR_9 == VAR_3) {

  VAR_6.pm07_cntrl[VAR_8] = VAR_0;
  VAR_11 = &(VAR_7[VAR_8]);
  VAR_11->signal_group = VAR_4;
  VAR_11->bus_word = 1;
  VAR_11->sub_unit = 0;
  VAR_11->bit = 0;
  goto out;
 } else {
  VAR_6.pm07_cntrl[VAR_8] = 0;
 }

 VAR_13 = FUNC_1(VAR_10);
 VAR_14 = FUNC_0(VAR_10);
 VAR_15 = FUNC_2(VAR_10);
 VAR_16 = FUNC_4(VAR_10);
 VAR_17 = FUNC_3(VAR_10);
 VAR_12 = (VAR_9 % 100);

 VAR_11 = &(VAR_7[VAR_8]);

 VAR_11->signal_group = VAR_9 / 100;
 VAR_11->bus_word = VAR_13;
 VAR_11->sub_unit = FUNC_5(VAR_10);

 VAR_6.pm07_cntrl[VAR_8] = 0;
 VAR_6.pm07_cntrl[VAR_8] |= FUNC_6(VAR_15);
 VAR_6.pm07_cntrl[VAR_8] |= FUNC_9(VAR_16);
 VAR_6.pm07_cntrl[VAR_8] |= FUNC_7(VAR_17);
 if (VAR_17 == 0) {
  if (VAR_12 > 31) {
   VAR_12 -= 32;
   if (VAR_13 == 0x3)
    VAR_13 = 0x2;
   else if (VAR_13 == 0xc)
    VAR_13 = 0x8;
  }

  if ((VAR_14 == 0) && VAR_11->signal_group >= 60)
   VAR_14 = 2;
  if ((VAR_14 == 1) && VAR_11->signal_group >= 50)
   VAR_14 = 0;

  VAR_6.pm07_cntrl[VAR_8] |= FUNC_8(VAR_12);
 } else {
  VAR_6.pm07_cntrl[VAR_8] = 0;
  VAR_11->bit = VAR_12;
 }

 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
  if (VAR_13 & (1 << VAR_19)) {
   VAR_6.debug_bus_control |=
    (VAR_14 << (30 - (2 * VAR_19)));

   for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
    if (VAR_5[VAR_18] == 0xff) {
     VAR_5[VAR_18] = VAR_19;
     VAR_6.group_control |=
      (VAR_19 << (30 - (2 * VAR_18)));

     break;
    }
   }
  }
 }
out:
 ;
}
