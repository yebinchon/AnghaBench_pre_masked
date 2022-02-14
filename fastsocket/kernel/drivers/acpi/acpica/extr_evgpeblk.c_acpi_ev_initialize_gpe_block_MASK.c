
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_gpe_walk_info {struct acpi_namespace_node* gpe_device; struct acpi_gpe_block_info* gpe_block; } ;
struct acpi_gpe_event_info {int flags; } ;
struct acpi_gpe_block_info {scalar_t__ register_count; struct acpi_gpe_event_info* event_info; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int *,struct acpi_gpe_block_info*,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,struct acpi_gpe_walk_info*,int *) ;
 int VAR_14 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(struct acpi_namespace_node *VAR_15,
        struct acpi_gpe_block_info *VAR_16)
{
 acpi_status VAR_17;
 struct acpi_gpe_event_info *VAR_18;
 struct acpi_gpe_walk_info VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;

 FUNC_3(VAR_14);



 if (!VAR_16) {
  FUNC_6(VAR_11);
 }





 if (VAR_13) {






  VAR_19.gpe_block = VAR_16;
  VAR_19.gpe_device = VAR_15;

  VAR_17 =
      FUNC_5(VAR_8, VAR_7,
        VAR_9, VAR_6,
        VAR_12, &VAR_19,
        ((void*)0));
 }
 VAR_20 = 0;
 VAR_21 = 0;

 for (VAR_22 = 0; VAR_22 < VAR_16->register_count; VAR_22++) {
  for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {



   VAR_18 = &VAR_16->event_info[((acpi_size) VAR_22 *
         VAR_3)
        + VAR_23];

   if (((VAR_18->flags & VAR_1) ==
        VAR_2) &&
       (VAR_18->flags & VAR_4)) {
    VAR_21++;
   }

   if (VAR_18->flags & VAR_5) {
    VAR_20++;
   }
  }
 }

 FUNC_0((VAR_0,
     "Found %u Wake, Enabled %u Runtime GPEs in this block\n",
     VAR_20, VAR_21));



 VAR_17 = FUNC_4(((void*)0), VAR_16, ((void*)0));
 if (FUNC_2(VAR_17)) {
  FUNC_1((VAR_10, "Could not enable GPEs in GpeBlock %p",
       VAR_16));
 }

 FUNC_6(VAR_17);
}
