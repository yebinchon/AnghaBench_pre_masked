
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ dbgwrap_status_t ;
struct TYPE_3__ {scalar_t__* coresight_base; } ;
typedef TYPE_1__ cpu_data_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int volatile VAR_6 ;
 int volatile VAR_7 ;
 int volatile VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int VAR_12 ;
 int* VAR_13 ;

__attribute__((used)) static void
FUNC_3(cpu_data_t *VAR_14, uint32_t VAR_15, uint64_t VAR_16, dbgwrap_status_t *VAR_17)
{
 if (*VAR_17 < 0)
  return;

 volatile uint32_t *VAR_18 = (volatile uint32_t *)(VAR_14->coresight_base[VAR_0] + VAR_3);
 volatile uint32_t *VAR_19 = (volatile uint32_t *)(VAR_14->coresight_base[VAR_0] + VAR_9);
 volatile uint32_t *VAR_20 = (volatile uint32_t *)(VAR_14->coresight_base[VAR_0] + VAR_5);

 int VAR_21 = 0;

 uint64_t VAR_22;
 FUNC_2(VAR_16, &VAR_22);
 uint64_t VAR_23 = FUNC_1() + VAR_22;






 do {
  *VAR_18 = VAR_15;
  volatile uint32_t VAR_24;
  while (!((VAR_24 = *VAR_19) & VAR_7)) {
   if (FUNC_1() > VAR_23) {
    *VAR_17 = VAR_2;
    return;
   }
   if (VAR_24 & VAR_6)
    break;
  }
  if (VAR_24 & VAR_6) {


   if (VAR_24 & VAR_8)
    *VAR_19 = VAR_24 & ~VAR_8;
   *VAR_20 = VAR_4;
   ++VAR_21;
  } else
   break;
 } while (VAR_21 < VAR_10);

 if (VAR_21 >= VAR_10) {
  *VAR_17 = VAR_1;
  return;
 }
}
