
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_address_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_22 ;
 int FUNC_4 (void*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_23 ;
 int FUNC_8 () ;
 scalar_t__ VAR_24 ;

__attribute__((used)) static void
FUNC_9(vm_offset_t VAR_25, vm_size_t VAR_26, bool VAR_27)
{
 FUNC_5(&VAR_25, &VAR_26);

 vm_size_t VAR_28;
 uint64_t *VAR_29;

 for (VAR_28 = 0; VAR_28 < VAR_26; VAR_28 += VAR_2) {
  vm_offset_t VAR_30 = (vm_offset_t)FUNC_3(VAR_25 + VAR_28);

  FUNC_7(VAR_30 >= VAR_21);
  FUNC_7(VAR_30 < VAR_20);

  uint64_t *VAR_31 = (uint64_t *)VAR_23;



  VAR_29 = VAR_31 + ((VAR_30 & VAR_13) >> VAR_14);
  if (*VAR_29 & VAR_12) {
   FUNC_7((*VAR_29 & VAR_10) == VAR_11);
  } else {

   vm_address_t VAR_32 = FUNC_6();
   FUNC_4((void *)VAR_32, VAR_2);
   *VAR_29 = ((uint64_t)VAR_32 & VAR_9) | VAR_12 | VAR_11;
  }
  VAR_31 = (uint64_t *)(*VAR_29 & VAR_9);



  VAR_29 = VAR_31 + ((VAR_30 & VAR_15) >> VAR_16);
  if (*VAR_29 & VAR_12) {
   FUNC_7((*VAR_29 & VAR_10) == VAR_11);
  } else {

   vm_address_t VAR_33 = FUNC_6();
   FUNC_4((void *)VAR_33, VAR_2);
   *VAR_29 = ((uint64_t)VAR_33 & VAR_9) | VAR_12 | VAR_11;
  }
  VAR_31 = (uint64_t *)(*VAR_29 & VAR_9);


  VAR_29 = VAR_31 + ((VAR_30 & VAR_17) >> VAR_18);

  if ((*VAR_29 & (VAR_7|VAR_4)) == (VAR_8|FUNC_0(VAR_1))) {

  } else {


   uint64_t VAR_34;
   if (VAR_27) {

    VAR_34 = (uint64_t)VAR_24 | FUNC_0(VAR_0);
   } else {

    vm_address_t VAR_35 = FUNC_6();
    FUNC_4((void *)VAR_35, VAR_2);
    VAR_34 = VAR_35 | FUNC_0(VAR_1);
   }


   VAR_34 |= VAR_8
    | VAR_3
    | FUNC_2(VAR_22)
    | FUNC_1(VAR_19)
    | VAR_5
    | VAR_6;

   *VAR_29 = VAR_34;
  }
 }

 FUNC_8();
}
