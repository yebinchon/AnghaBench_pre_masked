
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef int boolean_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,scalar_t__,...) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int* FUNC_9 (scalar_t__,int) ;
 int* FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (int) ;
 size_t FUNC_12 (int) ;
 scalar_t__ FUNC_13 () ;

mach_vm_size_t
FUNC_14(
 pmap_t VAR_10,
 addr64_t VAR_11,
 addr64_t VAR_12,
 mach_vm_size_t *VAR_13)
{
 pt_entry_t *VAR_14;
 pt_entry_t *VAR_15, *VAR_16;
 addr64_t VAR_17;
 uint64_t VAR_18;
 mach_vm_size_t VAR_19;
 mach_vm_size_t VAR_20;
 boolean_t VAR_21;

 FUNC_8();

 if (VAR_10 == VAR_3 || VAR_10 == VAR_7 || VAR_11 == VAR_12) {
  if (VAR_13) {
   *VAR_13 = 0;
  }
  return 0;
 }

 VAR_21 = FUNC_7(VAR_10);

 FUNC_2(FUNC_0(VAR_4) | VAR_1,
            FUNC_5(VAR_10), FUNC_5(VAR_11),
            FUNC_5(VAR_12));

 VAR_19 = 0;
 VAR_20 = 0;

 FUNC_1(VAR_10);

 VAR_18 = FUNC_13() + VAR_8;

 while (VAR_11 < VAR_12) {
  VAR_17 = (VAR_11 + VAR_9) & ~(VAR_9 - 1);
  if (VAR_17 > VAR_12)
   VAR_17 = VAR_12;
  VAR_14 = FUNC_9(VAR_10, VAR_11);

  if (VAR_14 && (*VAR_14 & FUNC_4(VAR_21))) {
   if (*VAR_14 & VAR_6) {

   } else {
    VAR_15 = FUNC_10(VAR_10,
      (VAR_11 & ~(VAR_9 - 1)));
    VAR_15 = &VAR_15[FUNC_12(VAR_11)];
    VAR_16 = &VAR_15[FUNC_6(VAR_17 - VAR_11)];

    for (; VAR_15 < VAR_16; VAR_15++) {
     if (FUNC_11(*VAR_15) != 0) {
      VAR_19 += VAR_2;
     } else if (*VAR_15 & VAR_5) {
      VAR_20 += VAR_2;
     }
    }

   }
  }
  VAR_11 = VAR_17;

  if (VAR_11 < VAR_12 && FUNC_13() >= VAR_18) {
   FUNC_3(VAR_10);
   FUNC_1(VAR_10);
   VAR_18 = FUNC_13() + VAR_8;
  }
 }

 FUNC_3(VAR_10);

 FUNC_2(FUNC_0(VAR_4) | VAR_0,
            VAR_19);

 if (VAR_13) {
  *VAR_13 = VAR_20;
 }
 return VAR_19;
}
