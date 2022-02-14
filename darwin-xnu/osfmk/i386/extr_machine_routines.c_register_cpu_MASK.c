
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * processor_t ;
typedef int kern_return_t ;
struct TYPE_6__ {int * core; } ;
struct TYPE_7__ {int cpu_number; int * cpu_console_buf; int * cpu_pmap; int * cpu_processor; TYPE_1__ lcpu; int cpu_phys_number; } ;
typedef TYPE_2__ cpu_data_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int) ;
 int * FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static kern_return_t
FUNC_12(
        uint32_t VAR_3,
 processor_t *VAR_4,
 boolean_t VAR_5 )
{
 int VAR_6;
 cpu_data_t *VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 == ((void*)0)) {
  return VAR_0;
 }
 VAR_6 = VAR_7->cpu_number;
 FUNC_0((VAR_5 && (VAR_6 == 0)) ||
       (!VAR_5 && (VAR_6 != 0)));

 FUNC_9(VAR_3, VAR_6);




 VAR_7->cpu_phys_number = VAR_3;

 VAR_7->cpu_console_buf = FUNC_1(VAR_5);
 if (VAR_7->cpu_console_buf == ((void*)0))
  goto failed;






 if (!VAR_5) {
  FUNC_6(VAR_7->cpu_number);
  if (VAR_7->lcpu.core == ((void*)0))
   goto failed;







  VAR_7->cpu_processor = FUNC_4(VAR_5);
  if (VAR_7->cpu_processor == ((void*)0))
   goto failed;





 }

 *VAR_4 = VAR_7->cpu_processor;

 return VAR_1;

failed:
 FUNC_5(VAR_7->cpu_processor);



 FUNC_2(VAR_7->cpu_console_buf);




 return VAR_0;
}
