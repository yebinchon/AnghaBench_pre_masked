
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* pointer; } ;
struct TYPE_4__ {char* pointer; } ;
union acpi_object {int type; TYPE_2__ buffer; TYPE_1__ string; } ;
typedef char* uint ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_6__ {int handle; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long long VAR_7 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,int,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_3__* VAR_18 ;
 int FUNC_4 (union acpi_object*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (char*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_9 (int ,char*,int ,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct acpi_buffer VAR_32 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_33 = ((void*)0);
 unsigned long long VAR_34, VAR_35;
 char *VAR_36 = ((void*)0);
 acpi_status VAR_37;
 VAR_37 = FUNC_3(VAR_1, 1, &VAR_8);
 if (FUNC_0(VAR_37))
  FUNC_8("Couldn't get the DSDT table header\n");


 if (FUNC_9(VAR_18->handle, "INIT", 0, &VAR_32)) {
  FUNC_6("Hotkey initialization failed\n");
  return -VAR_4;
 }


 VAR_37 =
     FUNC_2(VAR_18->handle, "BSTS", ((void*)0), &VAR_34);
 if (FUNC_0(VAR_37))
  FUNC_8("Error calling BSTS\n");
 else if (VAR_34)
  FUNC_7("BSTS called, 0x%02x returned\n",
         (uint) VAR_34);


 FUNC_9(VAR_18->handle, "CWAP", VAR_29, ((void*)0));







 if (VAR_32.pointer) {
  VAR_33 = VAR_32.pointer;
  switch (VAR_33->type) {
  case 128:
   VAR_36 = VAR_33->string.pointer;
   break;
  case 129:
   VAR_36 = VAR_33->buffer.pointer;
   break;
  default:
   VAR_36 = "";
   break;
  }
 }
 VAR_18->name = FUNC_5(VAR_36, VAR_6);
 if (!VAR_18->name)
  return -VAR_5;

 if (*VAR_36)
  FUNC_7("  %s model detected\n", VAR_36);

 FUNC_1(VAR_25);
 FUNC_1(VAR_28);
 FUNC_1(VAR_27);
 FUNC_1(VAR_26);
 FUNC_1(VAR_14);

 FUNC_1(VAR_22);

 FUNC_1(VAR_20);
 FUNC_1(VAR_19);







 VAR_37 =
     FUNC_2(VAR_18->handle, "HRWS", ((void*)0), &VAR_35);
 if (FUNC_0(VAR_37))
  VAR_35 = VAR_7 | VAR_3;

 if (VAR_35 & VAR_7)
  FUNC_1(VAR_31);
 if (VAR_35 & VAR_3)
  FUNC_1(VAR_11);

 FUNC_1(VAR_30);

 FUNC_1(VAR_10);
 FUNC_1(VAR_9);

 FUNC_1(VAR_21);

 FUNC_1(VAR_13);
 FUNC_1(VAR_12);





 if (!FUNC_1(VAR_24))
  FUNC_1(VAR_23);

 FUNC_1(VAR_16);
 FUNC_1(VAR_15);
 FUNC_1(VAR_17);

 FUNC_4(VAR_33);

 return VAR_2;
}
