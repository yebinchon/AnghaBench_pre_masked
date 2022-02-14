
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum cpu_clock_t { ____Placeholder_cpu_clock_t } cpu_clock_t ;
struct TYPE_3__ {int frequency; } ;
struct TYPE_4__ {int ticks_per_usec; TYPE_1__ phy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(enum cpu_clock_t VAR_4, bool VAR_5)
{
 FUNC_2(VAR_2, 0x5163);


 VAR_3.ticks_per_usec = FUNC_0(VAR_0,
  FUNC_1(VAR_2));

 FUNC_2(VAR_1, (uint32_t) ((VAR_5 ? 0x70 : 0x600) | VAR_4));

 switch (VAR_4) {
 case 131:
  VAR_3.ticks_per_usec >>= 1;
 case 130:
 case 129:
  VAR_3.ticks_per_usec >>= 1;
 case 128:
  break;
 }
}
