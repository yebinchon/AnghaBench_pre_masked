
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
struct processor {int dummy; } ;
struct TYPE_5__ {struct processor* cpu_processor; } ;
typedef TYPE_1__ cpu_data_t ;
typedef scalar_t__ boolean_t ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int) ;
 struct processor* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *,int,int ) ;
 int FUNC_4 (char*) ;

cpu_data_t *
FUNC_5(boolean_t VAR_4)
{
 cpu_data_t *VAR_5 = ((void*)0);

 if (VAR_4)
  VAR_5 = &VAR_0;
 else {
  if ((FUNC_3(VAR_3, (vm_offset_t *)&VAR_5, sizeof(cpu_data_t), VAR_2)) != VAR_1)
   goto cpu_data_alloc_error;

  FUNC_0((void *)VAR_5, sizeof(cpu_data_t));

  FUNC_2(VAR_5);
 }

 VAR_5->cpu_processor = FUNC_1(VAR_4);
 if (VAR_5->cpu_processor == (struct processor *)((void*)0))
  goto cpu_data_alloc_error;

 return VAR_5;

cpu_data_alloc_error:
 FUNC_4("cpu_data_alloc() failed\n");
 return (cpu_data_t *)((void*)0);
}
