
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* acpi_processor_get_throttling ) (struct acpi_processor*) ;} ;
struct TYPE_5__ {int throttling; } ;
struct acpi_processor {TYPE_2__ throttling; int id; TYPE_1__ flags; } ;
typedef int cpumask_var_t ;
struct TYPE_7__ {int cpus_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (struct acpi_processor*) ;

__attribute__((used)) static int FUNC_6(struct acpi_processor *VAR_5)
{
 cpumask_var_t VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;

 if (!VAR_5->flags.throttling)
  return -VAR_1;

 if (!FUNC_0(&VAR_6, VAR_3))
  return -VAR_2;




 FUNC_1(VAR_6, &VAR_4->cpus_allowed);

 FUNC_4(VAR_4, FUNC_2(VAR_5->id));
 VAR_7 = VAR_5->throttling.acpi_processor_get_throttling(VAR_5);

 FUNC_4(VAR_4, VAR_6);
 FUNC_3(VAR_6);

 return VAR_7;
}
