
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tmrHw_RATE_t ;
typedef size_t tmrHw_ID_t ;
struct TYPE_2__ {int Control; } ;


 int FUNC_0 (size_t) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;

tmrHw_RATE_t FUNC_2(tmrHw_ID_t VAR_8,
           uint32_t VAR_9
) {
 uint32_t VAR_10 = 0;

 FUNC_0(VAR_8);

 VAR_0[VAR_8].Control &= ~VAR_2;
 VAR_0[VAR_8].Control &= ~VAR_1;

 if (VAR_9 >= 64) {
  VAR_0[VAR_8].Control |= VAR_5;
  VAR_10 = 256;
 } else if (VAR_9 >= 8) {
  VAR_0[VAR_8].Control |= VAR_4;
  VAR_10 = 16;
 } else {
  VAR_0[VAR_8].Control |= VAR_3;
  VAR_10 = 1;
 }

 if (VAR_8 == 0 || VAR_8 == 1) {
  return FUNC_1(VAR_7, VAR_10);
 } else if (VAR_8 == 2 || VAR_8 == 3) {
  return FUNC_1(VAR_6, VAR_10);
 }

 return 0;
}
