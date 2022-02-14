
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int* block; } ;
struct TYPE_6__ {int pointer; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_5__ {union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ buffer; TYPE_3__ integer; TYPE_1__ package; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dev; struct acpi_smbus_cmi* algo_data; } ;
struct acpi_smbus_cmi {int handle; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_8__ {char* mt_sbr; char* mt_sbw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;




 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

 int VAR_20 ;



 char VAR_21 ;

 char VAR_22 ;
 int FUNC_3 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (union acpi_object*) ;
 int FUNC_7 (int ,int ,int) ;
 TYPE_4__ VAR_23 ;

__attribute__((used)) static int
FUNC_8(struct i2c_adapter *VAR_24, u16 VAR_25, unsigned short VAR_26,
     char VAR_27, u8 VAR_28, int VAR_29,
     union i2c_smbus_data *VAR_30)
{
 int VAR_31 = 0;
 struct acpi_smbus_cmi *VAR_32 = VAR_24->algo_data;
 unsigned char VAR_33;
 acpi_status VAR_34 = 0;
 struct acpi_object_list VAR_35;
 union acpi_object VAR_36[5];
 struct acpi_buffer VAR_37 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_38;
 union acpi_object *VAR_39;
 char *VAR_40;
 int VAR_41 = 0;

 FUNC_4(&VAR_24->dev, "access size: %d %s\n", VAR_29,
  (VAR_27) ? "READ" : "WRITE");
 switch (VAR_29) {
 case 129:
  VAR_33 = VAR_5;
  VAR_28 = 0;
  if (VAR_27 == VAR_22) {
   VAR_36[3].type = VAR_10;
   VAR_36[3].integer.value = 0;
   VAR_36[4].type = VAR_10;
   VAR_36[4].integer.value = 0;
  }
  break;

 case 131:
  VAR_33 = VAR_3;
  if (VAR_27 == VAR_22) {
   VAR_36[3].type = VAR_10;
   VAR_36[3].integer.value = 0;
   VAR_36[4].type = VAR_10;
   VAR_36[4].integer.value = 0;
  } else {
   VAR_28 = 0;
  }
  break;

 case 130:
  VAR_33 = VAR_4;
  if (VAR_27 == VAR_22) {
   VAR_36[3].type = VAR_10;
   VAR_36[3].integer.value = 1;
   VAR_36[4].type = VAR_10;
   VAR_36[4].integer.value = VAR_30->byte;
  }
  break;

 case 128:
  VAR_33 = VAR_7;
  if (VAR_27 == VAR_22) {
   VAR_36[3].type = VAR_10;
   VAR_36[3].integer.value = 2;
   VAR_36[4].type = VAR_10;
   VAR_36[4].integer.value = VAR_30->word;
  }
  break;

 case 132:
  VAR_33 = VAR_2;
  if (VAR_27 == VAR_22) {
   VAR_41 = VAR_30->block[0];
   if (VAR_41 == 0 || VAR_41 > VAR_20)
    return -VAR_14;
   VAR_36[3].type = VAR_10;
   VAR_36[3].integer.value = VAR_41;
   VAR_36[4].type = VAR_9;
   VAR_36[4].buffer.pointer = *(VAR_30->block + 1);
  }
  break;

 default:
  FUNC_5(&VAR_24->dev, "Unsupported transaction %d\n", VAR_29);
  return -VAR_17;
 }

 if (VAR_27 == VAR_21) {
  VAR_33 |= VAR_6;
  VAR_40 = VAR_23.mt_sbr;
  VAR_35.count = 3;
 } else {
  VAR_33 |= VAR_8;
  VAR_40 = VAR_23.mt_sbw;
  VAR_35.count = 5;
 }

 VAR_35.pointer = VAR_36;
 VAR_36[0].type = VAR_10;
 VAR_36[0].integer.value = VAR_33;
 VAR_36[1].type = VAR_10;
 VAR_36[1].integer.value = VAR_25;
 VAR_36[2].type = VAR_10;
 VAR_36[2].integer.value = VAR_28;

 VAR_34 = FUNC_3(VAR_32->handle, VAR_40, &VAR_35,
          &VAR_37);
 if (FUNC_2(VAR_34)) {
  FUNC_1((VAR_12, "Evaluating %s: %i", VAR_40, VAR_34));
  return -VAR_15;
 }

 VAR_39 = VAR_37.pointer;
 if (VAR_39 && VAR_39->type == VAR_11)
  VAR_38 = VAR_39->package.elements;
 else {
  FUNC_1((VAR_12, "Invalid argument type"));
  VAR_31 = -VAR_15;
  goto out;
 }
 if (VAR_38 == ((void*)0) || VAR_38->type != VAR_10) {
  FUNC_1((VAR_12, "Invalid argument type"));
  VAR_31 = -VAR_15;
  goto out;
 }

 VAR_31 = VAR_38->integer.value;
 FUNC_0((VAR_1, "%s return status: %i\n",
     VAR_40, VAR_31));

 switch (VAR_31) {
 case 134:
  VAR_31 = 0;
  break;
 case 136:
  VAR_31 = -VAR_13;
  goto out;
 case 133:
  VAR_31 = -VAR_19;
  goto out;
 case 135:
  VAR_31 = -VAR_16;
  goto out;
 default:
  VAR_31 = -VAR_15;
  goto out;
 }

 if (VAR_27 == VAR_22 || VAR_29 == 129)
  goto out;

 VAR_38 = VAR_39->package.elements + 1;
 if (VAR_38 == ((void*)0) || VAR_38->type != VAR_10) {
  FUNC_1((VAR_12, "Invalid argument type"));
  VAR_31 = -VAR_15;
  goto out;
 }

 VAR_41 = VAR_38->integer.value;
 VAR_38 = VAR_39->package.elements + 2;
 switch (VAR_29) {
 case 131:
 case 130:
 case 128:
  if (VAR_38 == ((void*)0) || VAR_38->type != VAR_10) {
   FUNC_1((VAR_12, "Invalid argument type"));
   VAR_31 = -VAR_15;
   goto out;
  }
  if (VAR_41 == 2)
   VAR_30->word = VAR_38->integer.value;
  else
   VAR_30->byte = VAR_38->integer.value;
  break;
 case 132:
  if (VAR_38 == ((void*)0) || VAR_38->type != VAR_9) {
   FUNC_1((VAR_12, "Invalid argument type"));
   VAR_31 = -VAR_15;
   goto out;
  }
  if (VAR_41 == 0 || VAR_41 > VAR_20)
   return -VAR_18;
  VAR_30->block[0] = VAR_41;
  FUNC_7(*(VAR_30->block + 1), VAR_38->buffer.pointer, VAR_41);
  break;
 }

out:
 FUNC_6(VAR_37.pointer);
 FUNC_4(&VAR_24->dev, "Transaction status: %i\n", VAR_31);
 return VAR_31;
}
