
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tmrHw_RATE_t ;
typedef size_t tmrHw_ID_t ;
struct TYPE_2__ {int Control; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;

tmrHw_RATE_t FUNC_2(tmrHw_ID_t VAR_4
) {
 uint32_t VAR_5 = 0;

 switch (VAR_0[VAR_4].Control & VAR_1) {
 case 130:
  VAR_5 = 1;
  break;
 case 129:
  VAR_5 = 16;
  break;
 case 128:
  VAR_5 = 256;
  break;
 default:
  FUNC_0(0);
 }

 if (VAR_4 == 0 || VAR_4 == 1) {
  return FUNC_1(VAR_3, VAR_5);
 } else {
  return FUNC_1(VAR_2, VAR_5);
 }
 return 0;
}
