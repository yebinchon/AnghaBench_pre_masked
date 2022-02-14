
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
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
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int* VAR_23 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ VAR_24 ;

__attribute__((used)) static void
FUNC_10(vm_offset_t VAR_25, vm_size_t VAR_26, bool VAR_27, bool VAR_28)
{
 VAR_26 = (VAR_26 + 0x7UL) & ~0x7UL;
 vm_offset_t VAR_29 = FUNC_9(FUNC_3(VAR_25), VAR_3);
 vm_offset_t VAR_30 = FUNC_8(FUNC_3(VAR_25 + VAR_26), VAR_3);

 FUNC_5(VAR_29 >= VAR_21 && VAR_30 <= VAR_20);
 FUNC_5((VAR_26 & 0x7) == 0);

 for (; VAR_29 < VAR_30; VAR_29 += VAR_2) {
  uint64_t *VAR_31 = VAR_23;
  uint64_t *VAR_32;



  VAR_32 = VAR_31 + ((VAR_29 & VAR_13) >> VAR_14);
  if (*VAR_32 & VAR_12) {
   FUNC_5((*VAR_32 & VAR_10) == VAR_11);
  } else {

   *VAR_32 = ((uint64_t)FUNC_4() & VAR_9) | VAR_12 | VAR_11;
  }
  VAR_31 = (uint64_t *)FUNC_7(*VAR_32 & VAR_9);



  VAR_32 = VAR_31 + ((VAR_29 & VAR_15) >> VAR_16);
  if (*VAR_32 & VAR_12) {
   FUNC_5((*VAR_32 & VAR_10) == VAR_11);
  } else {

   *VAR_32 = ((uint64_t)FUNC_4() & VAR_9) | VAR_12 | VAR_11;
  }
  VAR_31 = (uint64_t *)FUNC_7(*VAR_32 & VAR_9);

  if (!VAR_28) {
   continue;
  }


  VAR_32 = VAR_31 + ((VAR_29 & VAR_17) >> VAR_18);
  if ((*VAR_32 & VAR_8) &&
      ((((*VAR_32) & VAR_5) != FUNC_0(VAR_0)) || VAR_27)) {


  } else {

   uint64_t VAR_33;
   if (VAR_27) {

    VAR_33 = (uint64_t)VAR_24 | FUNC_0(VAR_0);
   } else {

    VAR_33 = (uint64_t)FUNC_4() | FUNC_0(VAR_1);
   }
   VAR_33 |= VAR_8
    | VAR_4
    | FUNC_2(VAR_22)
    | FUNC_1(VAR_19)
    | VAR_6
    | VAR_7;
   *VAR_32 = VAR_33;
  }
 }

 FUNC_6();
}
