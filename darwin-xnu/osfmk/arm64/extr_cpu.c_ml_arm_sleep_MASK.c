
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ cpu_sleep_token; scalar_t__* coresight_base; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_6__ {scalar_t__ cpu_data_vaddr; } ;
typedef int SleepToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (void const*,void*,int) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((noreturn))
void
FUNC_12(void)
{
 cpu_data_t *VAR_13 = FUNC_6();

 if (VAR_13 == &VAR_4) {
  cpu_data_t *VAR_14;
  int VAR_15;
  int VAR_16;

  VAR_16 = FUNC_7();
  for (VAR_15=0; VAR_15 <= VAR_16; VAR_15++) {
   VAR_14 = (cpu_data_t *)VAR_6[VAR_15].cpu_data_vaddr;

   if ((VAR_14 == ((void*)0)) || (VAR_14 == VAR_13))
    continue;

   while (VAR_14->cpu_sleep_token != VAR_0);
  }





  VAR_12 = FUNC_8();
 } else {
  FUNC_0();
 }

 VAR_13->cpu_sleep_token = VAR_0;

 if (VAR_13 == &VAR_4) {
  if (VAR_13->coresight_base[VAR_5]) {
   *(volatile uint32_t *)(VAR_13->coresight_base[VAR_5] + VAR_2) = VAR_1;
   *(volatile uint32_t *)(VAR_13->coresight_base[VAR_5] + VAR_3) = 0;
  }





  FUNC_4();
 } else {
  FUNC_1((vm_offset_t) VAR_13, sizeof(cpu_data_t));





  if (VAR_13->coresight_base[VAR_5]) {
   *(volatile uint32_t *)(VAR_13->coresight_base[VAR_5] + VAR_2) = VAR_1;
   *(volatile uint32_t *)(VAR_13->coresight_base[VAR_5] + VAR_3) = 0;
  }


  FUNC_4();
 }
}
