
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor {int performance_platform_limit; int id; int handle; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ,int,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_processor *VAR_6)
{
 acpi_status VAR_7 = 0;
 unsigned long long VAR_8 = 0;


 if (!VAR_6)
  return -VAR_2;





 VAR_7 = FUNC_2(VAR_6->handle, "_PPC", ((void*)0), &VAR_8);

 if (VAR_7 != VAR_1)
  VAR_5 |= VAR_4;

 if (FUNC_1(VAR_7) && VAR_7 != VAR_1) {
  FUNC_0((VAR_0, VAR_7, "Evaluating _PPC"));
  return -VAR_3;
 }

 FUNC_3("CPU %d: _PPC is %d - frequency %s limited\n", VAR_6->id,
         (int)VAR_8, VAR_8 ? "" : "not");

 VAR_6->performance_platform_limit = (int)VAR_8;

 return 0;
}
