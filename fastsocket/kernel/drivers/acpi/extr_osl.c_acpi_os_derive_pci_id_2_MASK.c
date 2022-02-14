
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_pci_id {int bus; int function; int device; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__,int ,int *,unsigned long long*) ;
 int FUNC_6 (scalar_t__,scalar_t__*) ;
 int FUNC_7 (scalar_t__,scalar_t__*) ;
 int FUNC_8 (struct acpi_pci_id*,int,int*,int) ;

__attribute__((used)) static void FUNC_9(acpi_handle VAR_2,
        acpi_handle VAR_3,
        struct acpi_pci_id **VAR_4,
        int *VAR_5, u8 * VAR_6)
{
 acpi_handle VAR_7;
 struct acpi_pci_id *VAR_8 = *VAR_4;
 acpi_status VAR_9;
 unsigned long long VAR_10;
 acpi_object_type VAR_11;

 FUNC_6(VAR_3, &VAR_7);
 if (VAR_7 != VAR_2) {
  FUNC_9(VAR_2, VAR_7, &VAR_8, VAR_5,
     VAR_6);

  VAR_9 = FUNC_7(VAR_7, &VAR_11);
  if ((FUNC_0(VAR_9)) || (VAR_11 != VAR_0))
   return;

  VAR_9 = FUNC_5(VAR_7, VAR_1, ((void*)0),
       &VAR_10);
  if (FUNC_4(VAR_9)) {
   u32 VAR_12;
   VAR_8->device = FUNC_1(FUNC_2(VAR_10));
   VAR_8->function = FUNC_3(FUNC_2(VAR_10));

   if (*VAR_5)
    VAR_8->bus = *VAR_6;


   VAR_9 =
       FUNC_8(VAR_8, 0x0e, &VAR_12,
          8);
   if (FUNC_4(VAR_9)
       && ((VAR_12 & 0x7f) == 1 || (VAR_12 & 0x7f) == 2)) {
    VAR_9 =
        FUNC_8(VAR_8, 0x18,
           &VAR_12, 8);
    if (!FUNC_4(VAR_9)) {

     return;
    }
    *VAR_5 = 1;
    VAR_8->bus = VAR_12;
    VAR_9 =
        FUNC_8(VAR_8, 0x19,
           &VAR_12, 8);
    if (FUNC_4(VAR_9)) {
     *VAR_6 = VAR_12;
    }
   } else
    *VAR_5 = 0;
  }
 }
}
