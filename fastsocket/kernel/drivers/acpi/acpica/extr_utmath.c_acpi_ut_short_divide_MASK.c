
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lo; int hi; } ;
union uint64_overlay {int full; TYPE_1__ part; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef int acpi_integer ;


 int FUNC_0 (scalar_t__,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

acpi_status
FUNC_4(acpi_integer VAR_4,
       u32 VAR_5,
       acpi_integer * VAR_6, u32 * VAR_7)
{
 union uint64_overlay VAR_8;
 union uint64_overlay VAR_9;
 u32 VAR_10;

 FUNC_2(VAR_3);



 if (VAR_5 == 0) {
  FUNC_1((VAR_1, "Divide by zero"));
  FUNC_3(VAR_0);
 }

 VAR_8.full = VAR_4;





 FUNC_0(0, VAR_8.part.hi, VAR_5,
     VAR_9.part.hi, VAR_10);
 FUNC_0(VAR_10, VAR_8.part.lo, VAR_5,
     VAR_9.part.lo, VAR_10);



 if (VAR_6) {
  *VAR_6 = VAR_9.full;
 }
 if (VAR_7) {
  *VAR_7 = VAR_10;
 }

 FUNC_3(VAR_2);
}
