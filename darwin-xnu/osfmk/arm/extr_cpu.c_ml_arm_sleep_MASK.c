
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_5__ {scalar_t__ cpu_sleep_token; scalar_t__ cpu_CLW_active; scalar_t__ cpu_CLWClean_req; scalar_t__ cpu_CLWFlush_req; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_6__ {scalar_t__ cpu_data_vaddr; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (void const*,void*,int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((noreturn))
void
FUNC_10(void)
{
 cpu_data_t *VAR_12 = FUNC_6();

 if (VAR_12 == &VAR_1) {
  cpu_data_t *VAR_13;
  unsigned int VAR_14;

  for (VAR_14=0; VAR_14 < VAR_7; VAR_14++) {
   VAR_13 = (cpu_data_t *)VAR_2[VAR_14].cpu_data_vaddr;
   if(VAR_13 == (cpu_data_t *)((void*)0))
    break;

   if (VAR_13 == VAR_12)
    continue;

   while (VAR_13->cpu_sleep_token != VAR_0);
  }



  VAR_9 = FUNC_7();
  VAR_11 = VAR_9;

 } else {
  FUNC_8();
  FUNC_1();
 }
 VAR_12->cpu_sleep_token = VAR_0;






 if (VAR_12 == &VAR_1) {
  FUNC_8();
  FUNC_9();
  FUNC_5((const void *)VAR_10, (void *)(VAR_5), VAR_6);
 } else
  FUNC_0((vm_offset_t) VAR_12, sizeof(cpu_data_t));

 FUNC_3(VAR_4);
 while (VAR_8) {



 }
}
