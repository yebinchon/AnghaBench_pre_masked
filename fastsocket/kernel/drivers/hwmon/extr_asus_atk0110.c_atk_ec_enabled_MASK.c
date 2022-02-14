
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
struct device {int dummy; } ;
struct atk_data {TYPE_2__* acpi_dev; } ;
struct atk_acpi_ret_buffer {scalar_t__ flags; scalar_t__ value; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (union acpi_object*) ;
 int FUNC_2 (union acpi_object*) ;
 union acpi_object* FUNC_3 (struct atk_data*,int ) ;
 int FUNC_4 (struct device*,char*,char*) ;
 int FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct atk_data *VAR_2)
{
 struct device *VAR_3 = &VAR_2->acpi_dev->dev;
 union acpi_object *VAR_4;
 struct atk_acpi_ret_buffer *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (FUNC_1(VAR_4)) {
  FUNC_5(VAR_3, "Unable to query EC status\n");
  return FUNC_2(VAR_4);
 }
 VAR_5 = (struct atk_acpi_ret_buffer *)VAR_4->buffer.pointer;

 if (VAR_5->flags == 0) {
  FUNC_5(VAR_3, "Unable to query EC status\n");
  VAR_6 = -VAR_1;
 } else {
  VAR_6 = (VAR_5->value != 0);
  FUNC_4(VAR_3, "EC is %sabled\n",
    VAR_6 ? "en" : "dis");
 }

 FUNC_0(VAR_4);
 return VAR_6;
}
