
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int acpi_handle ;
typedef int acpi_event_status ;
struct TYPE_2__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 struct kobj_attribute* VAR_11 ;
 int FUNC_0 (int,int*,int *) ;
 size_t VAR_12 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_13,
 struct kobj_attribute *VAR_14, char *VAR_15)
{
 int VAR_16 = VAR_14 - VAR_11;
 int VAR_17;
 acpi_handle VAR_18;
 acpi_event_status VAR_19;
 int VAR_20 = 0;

 VAR_10[VAR_12 + VAR_3 + VAR_5].count =
  VAR_8;
 VAR_10[VAR_12 + VAR_3 + VAR_6].count =
  VAR_9;
 VAR_10[VAR_12 + VAR_3 + VAR_4].count =
  VAR_7;

 VAR_17 = FUNC_1(VAR_15, "%8d", VAR_10[VAR_16].count);


 if (VAR_16 >= VAR_12 + VAR_3)
  goto end;

 VAR_20 = FUNC_0(VAR_16, &VAR_19, &VAR_18);
 if (VAR_20)
  goto end;

 if (!(VAR_19 & VAR_1))
  VAR_17 += FUNC_1(VAR_15 + VAR_17, "	invalid");
 else if (VAR_19 & VAR_0)
  VAR_17 += FUNC_1(VAR_15 + VAR_17, "	enabled");
 else if (VAR_19 & VAR_2)
  VAR_17 += FUNC_1(VAR_15 + VAR_17, "	wake_enabled");
 else
  VAR_17 += FUNC_1(VAR_15 + VAR_17, "	disabled");

end:
 VAR_17 += FUNC_1(VAR_15 + VAR_17, "\n");
 return VAR_20 ? VAR_20 : VAR_17;
}
