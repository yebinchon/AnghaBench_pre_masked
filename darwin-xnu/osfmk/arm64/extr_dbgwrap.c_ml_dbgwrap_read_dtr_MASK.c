
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
 scalar_t__ VAR_4 ;
 int volatile VAR_5 ;
 scalar_t__ VAR_6 ;
 int volatile VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static uint64_t
FUNC_2(cpu_data_t *VAR_8, uint64_t VAR_9, dbgwrap_status_t *VAR_10)
{
 if (*VAR_10 < 0)
  return 0;

 uint64_t VAR_11;
 FUNC_1(VAR_9, &VAR_11);
 uint64_t VAR_12 = FUNC_0() + VAR_11;



 volatile uint32_t *VAR_13 = (volatile uint32_t *)(VAR_8->coresight_base[VAR_0] + VAR_6);

 while (!(*VAR_13 & VAR_7)) {
  if (*VAR_13 & VAR_5) {
   *VAR_10 = VAR_1;
   return 0;
  }
  if (FUNC_0() > VAR_12) {
   *VAR_10 = VAR_2;
   return 0;
  }
 }

 uint32_t VAR_14 = *((volatile uint32_t*)(VAR_8->coresight_base[VAR_0] + VAR_3));
 uint32_t VAR_15 = *((volatile uint32_t*)(VAR_8->coresight_base[VAR_0] + VAR_4));

 return (((uint64_t)VAR_14 << 32) | VAR_15);
}
