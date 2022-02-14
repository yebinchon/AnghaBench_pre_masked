
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hi; scalar_t__ lo; } ;
union uint64_overlay {scalar_t__ full; TYPE_1__ part; } ;
typedef void* u32 ;
typedef scalar_t__ s32 ;
typedef int acpi_status ;
typedef scalar_t__ acpi_integer ;


 int FUNC_0 (void*,scalar_t__,scalar_t__,scalar_t__,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

acpi_status
FUNC_5(acpi_integer VAR_4,
        acpi_integer VAR_5,
        acpi_integer * VAR_6, acpi_integer * VAR_7)
{
 union uint64_overlay VAR_8;
 union uint64_overlay VAR_9;
 union uint64_overlay VAR_10;
 union uint64_overlay VAR_11;
 union uint64_overlay VAR_12;
 union uint64_overlay VAR_13;
 u32 VAR_14;
 union uint64_overlay VAR_15;
 union uint64_overlay VAR_16;

 FUNC_2(VAR_3);



 if (VAR_5 == 0) {
  FUNC_1((VAR_1, "Divide by zero"));
  FUNC_4(VAR_0);
 }

 VAR_9.full = VAR_5;
 VAR_8.full = VAR_4;
 if (VAR_9.part.hi == 0) {




  VAR_11.part.hi = 0;





  FUNC_0(0, VAR_8.part.hi, VAR_9.part.lo,
      VAR_10.part.hi, VAR_14);
  FUNC_0(VAR_14, VAR_8.part.lo, VAR_9.part.lo,
      VAR_10.part.lo, VAR_11.part.lo);
 }

 else {




  VAR_10.part.hi = 0;
  VAR_12 = VAR_8;
  VAR_13 = VAR_9;



  do {
   FUNC_3(VAR_13.part.hi,
         VAR_13.part.lo);
   FUNC_3(VAR_12.part.hi,
         VAR_12.part.lo);

  } while (VAR_13.part.hi != 0);



  FUNC_0(VAR_12.part.hi,
      VAR_12.part.lo,
      VAR_13.part.lo,
      VAR_10.part.lo, VAR_14);





  VAR_14 = VAR_10.part.lo * VAR_9.part.hi;
  VAR_15 =
      (acpi_integer) VAR_10.part.lo * VAR_9.part.lo;
  VAR_16 = (acpi_integer) VAR_15 + VAR_14;

  VAR_11.part.hi = VAR_16;
  VAR_11.part.lo = VAR_15;

  if (VAR_16 == 0) {
   if (VAR_16 >= VAR_8.part.hi) {
    if (VAR_16 == VAR_8.part.hi) {
     if (VAR_15 > VAR_8.part.lo) {
      VAR_10.part.lo--;
      VAR_11.full -= VAR_9.full;
     }
    } else {
     VAR_10.part.lo--;
     VAR_11.full -= VAR_9.full;
    }
   }

   VAR_11.full = VAR_11.full - VAR_8.full;
   VAR_11.part.hi = (u32) - ((s32) VAR_11.part.hi);
   VAR_11.part.lo = (u32) - ((s32) VAR_11.part.lo);

   if (VAR_11.part.lo) {
    VAR_11.part.hi--;
   }
  }
 }



 if (VAR_6) {
  *VAR_6 = VAR_10.full;
 }
 if (VAR_7) {
  *VAR_7 = VAR_11.full;
 }

 FUNC_4(VAR_2);
}
