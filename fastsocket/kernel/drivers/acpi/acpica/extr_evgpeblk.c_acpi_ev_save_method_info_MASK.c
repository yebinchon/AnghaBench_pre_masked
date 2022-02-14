
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int integer; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
struct TYPE_4__ {struct acpi_namespace_node* method_node; } ;
struct acpi_gpe_event_info {int flags; TYPE_2__ dispatch; } ;
struct acpi_gpe_block_info {scalar_t__ block_base_number; int register_count; struct acpi_gpe_event_info* event_info; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*,int *,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct acpi_gpe_event_info*,int ) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static acpi_status
FUNC_6(acpi_handle VAR_10,
    u32 VAR_11, void *VAR_12, void **VAR_13)
{
 struct acpi_gpe_block_info *VAR_14 = (void *)VAR_12;
 struct acpi_gpe_event_info *VAR_15;
 u32 VAR_16;
 char VAR_17[VAR_5 + 1];
 u8 VAR_18;
 acpi_status VAR_19;

 FUNC_1(VAR_9);






 FUNC_2(VAR_17,
      &((struct acpi_namespace_node *)VAR_10)->name.
      integer);
 VAR_17[VAR_5] = 0;
 switch (VAR_17[1]) {
 case 'L':
  VAR_18 = VAR_3;
  break;

 case 'E':
  VAR_18 = VAR_2;
  break;

 default:


  FUNC_0((VAR_0,
      "Ignoring unknown GPE method type: %s "
      "(name not of form _Lxx or _Exx)", VAR_17));
  FUNC_5(VAR_7);
 }



 VAR_16 = FUNC_3(&VAR_17[2], ((void*)0), 16);
 if (VAR_16 == VAR_6) {



  FUNC_0((VAR_0,
      "Could not extract GPE number from name: %s "
      "(name is not of form _Lxx or _Exx)", VAR_17));
  FUNC_5(VAR_7);
 }



 if ((VAR_16 < VAR_14->block_base_number) ||
     (VAR_16 >= (VAR_14->block_base_number +
       (VAR_14->register_count * 8)))) {





  FUNC_5(VAR_7);
 }






 VAR_15 =
     &VAR_14->event_info[VAR_16 - VAR_14->block_base_number];

 VAR_15->flags = (u8)
     (VAR_18 | VAR_1 | VAR_4);

 VAR_15->dispatch.method_node =
     (struct acpi_namespace_node *)VAR_10;



 VAR_19 = FUNC_4(VAR_15, VAR_8);

 FUNC_0((VAR_0,
     "Registered GPE method %s as GPE number 0x%.2X\n",
     VAR_17, VAR_16));
 FUNC_5(VAR_19);
}
