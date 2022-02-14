
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ integer; TYPE_2__ package; } ;
struct device {int dummy; } ;
struct atk_data {TYPE_1__* acpi_dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (union acpi_object*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (union acpi_object*) ;
 int FUNC_2 (union acpi_object*) ;
 union acpi_object* FUNC_3 (struct atk_data*,int ) ;
 int FUNC_4 (struct device*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct atk_data *VAR_5)
{
 struct device *VAR_6 = &VAR_5->acpi_dev->dev;
 union acpi_object *VAR_7;
 union acpi_object *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(VAR_5, VAR_3);
 if (FUNC_1(VAR_7)) {
  if (FUNC_2(VAR_7) == -VAR_4) {

   FUNC_4(VAR_6, "Class %#llx not found\n", VAR_3);
   return 0;
  }
  return FUNC_2(VAR_7);
 }


 VAR_8 = ((void*)0);
 for (VAR_10 = 0; VAR_10 < VAR_7->package.count; VAR_10++) {
  union acpi_object *VAR_11 = &VAR_7->package.elements[VAR_10];
  union acpi_object *VAR_12;

  if (VAR_11->type != VAR_1)
   continue;

  VAR_12 = &VAR_11->package.elements[0];
  if (VAR_12->type != VAR_0)
   continue;

  if (VAR_12->integer.value == VAR_2) {
   VAR_8 = VAR_11;
   break;
  }
 }

 VAR_9 = (VAR_8 != ((void*)0));
 if (!VAR_9)

  FUNC_4(VAR_6, "EC not found\n");

 FUNC_0(VAR_7);
 return VAR_9;
}
