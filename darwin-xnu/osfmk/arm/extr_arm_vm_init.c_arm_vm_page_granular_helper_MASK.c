
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int tt_entry_t ;
typedef int pt_entry_t ;
typedef int pmap_paddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int*,int) ;
 int* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 size_t FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(vm_offset_t VAR_15, vm_offset_t VAR_16, vm_offset_t VAR_17,
                            int VAR_18, int VAR_19)
{
 if (VAR_17 & VAR_8) {
  VAR_17 &= (~VAR_8);
  tt_entry_t *VAR_20 = &VAR_12[FUNC_7(VAR_17)];
  tt_entry_t VAR_21 = *VAR_20;
  pmap_paddr_t VAR_22;
  pt_entry_t *VAR_23, VAR_24;
  unsigned int VAR_25;

  VAR_22 = VAR_17 - VAR_14 + VAR_13;

  if (VAR_22 >= VAR_10)
   return;

  FUNC_2(VAR_16 >= VAR_17);

  if (VAR_7 == (VAR_21 & VAR_6)) {

   VAR_23 = (pt_entry_t *)FUNC_6((VAR_21 & VAR_5));
  } else {

   VAR_23 = (pt_entry_t *)FUNC_6(VAR_11);
   VAR_11 += VAR_0;
   FUNC_3(VAR_23, VAR_0);

   for (VAR_25 = 0; VAR_25 < 4; ++VAR_25)
    VAR_20[VAR_25] = FUNC_5(FUNC_4((vm_offset_t)VAR_23) + (VAR_25 * 0x400)) | VAR_7;
  }

  vm_offset_t VAR_26 = VAR_16 - VAR_17;
  if ((VAR_22 + VAR_26) > VAR_10)
   VAR_16 -= (VAR_22 + VAR_26 - VAR_10);
  FUNC_2((VAR_15 - VAR_14 + VAR_13) >= VAR_13);


  for (VAR_25 = 0; VAR_25 < (VAR_0 / sizeof(*VAR_23)); VAR_25++) {
   if (VAR_15 <= VAR_17 && VAR_17 < VAR_16) {

    VAR_24 = VAR_22 | VAR_1 | VAR_3 | VAR_4;
    VAR_24 = VAR_24 | FUNC_1(VAR_9);
    VAR_24 = VAR_24 | FUNC_0(VAR_18);
    if (VAR_19)
     VAR_24 = VAR_24 | VAR_2;

    VAR_23[VAR_25] = VAR_24;
   }

   VAR_17 += VAR_0;
   VAR_22 += VAR_0;
  }
 }
}
