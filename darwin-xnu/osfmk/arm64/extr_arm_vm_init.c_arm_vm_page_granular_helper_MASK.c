
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int tt_entry_t ;
typedef int pt_entry_t ;
typedef int pmap_paddr_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (int) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_21 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_22 ;

__attribute__((used)) static void
FUNC_12(vm_offset_t VAR_23, vm_offset_t VAR_24, vm_offset_t VAR_25, pmap_paddr_t VAR_26,
                            int VAR_27, int VAR_28, bool VAR_29,
                            pt_entry_t **VAR_30, pt_entry_t *VAR_31)
{
 if (VAR_25 & VAR_13) {
  tt_entry_t *VAR_32;
  tt_entry_t VAR_33;
  pmap_paddr_t VAR_34;
  pt_entry_t *VAR_35, *VAR_36 = ((void*)0), VAR_37, VAR_38 = 0;
  addr64_t VAR_39;
  unsigned VAR_40;

  VAR_25 &= ~VAR_13;
  VAR_34 = VAR_25 - VAR_19 + VAR_18 - VAR_26;

  if (VAR_34 >= VAR_21)
   return;

  VAR_32 = FUNC_4(VAR_25);

  FUNC_5(VAR_24 >= VAR_25);
  VAR_33 = *VAR_32;

  if (VAR_11 == (VAR_33 & VAR_10)) {

   VAR_35 = (pt_entry_t *)FUNC_9((VAR_33 & VAR_9));
  } else {

   VAR_35 = (pt_entry_t*)FUNC_3(VAR_26 == 0);
   FUNC_6(VAR_35, VAR_0);
   VAR_39 = FUNC_7((vm_offset_t)VAR_35);

   *VAR_32 = FUNC_8(VAR_39) | VAR_11 | VAR_12;
  }

  vm_offset_t VAR_41 = VAR_24 - VAR_25;
  if ((VAR_34 + VAR_41) > VAR_21)
   VAR_24 -= (VAR_34 + VAR_41 - VAR_21);
  FUNC_5((VAR_23 - VAR_19 + VAR_18 - VAR_26) >= VAR_18);




  vm_offset_t VAR_42 = FUNC_10(VAR_24);

  for (VAR_40 = 0; VAR_40 <= (VAR_14>>VAR_15); VAR_40++) {
   if ((VAR_23 <= VAR_25) && (VAR_25 < VAR_42)) {

    VAR_37 = VAR_34 | VAR_1 | FUNC_2(VAR_17) | VAR_7;
    VAR_37 = VAR_37 | FUNC_1(VAR_16);
    VAR_37 = VAR_37 | FUNC_0(VAR_27);
    VAR_37 = VAR_37 | VAR_5;




    if (VAR_28) {
     VAR_37 = VAR_37 | VAR_6;
    }






    if ((VAR_25 >= FUNC_11(VAR_23)) && (FUNC_11(VAR_25 + 1) <= VAR_24) &&
        !VAR_29 && VAR_22) {
     FUNC_5((VAR_25 & ((1 << VAR_3) - 1)) == ((VAR_34 & ((1 << VAR_3) - 1))));
     VAR_37 |= VAR_2;
    }







    FUNC_5(!VAR_20 || (VAR_35[VAR_40] == VAR_8) || ((VAR_35[VAR_40] & VAR_2) == (VAR_37 & VAR_2)));
    if (VAR_20 && ((pt_entry_t*)(FUNC_9(VAR_34)) == VAR_35)) {
     FUNC_5(VAR_36 == ((void*)0));
     FUNC_5(!VAR_29);
     VAR_36 = &VAR_35[VAR_40];
     VAR_38 = VAR_37;
    } else if ((VAR_30 != ((void*)0)) && (&VAR_35[VAR_40] == &VAR_36[1])) {
     FUNC_5(*VAR_30 == ((void*)0));
     FUNC_5(VAR_31 != ((void*)0));
     *VAR_30 = &VAR_35[VAR_40];
     *VAR_31 = VAR_37;
    } else {
     VAR_35[VAR_40] = VAR_37;
    }
   }

   VAR_25 += VAR_0;
   VAR_34 += VAR_0;
  }
  if (VAR_36 != ((void*)0))
   *VAR_36 = VAR_38;
 }
}
