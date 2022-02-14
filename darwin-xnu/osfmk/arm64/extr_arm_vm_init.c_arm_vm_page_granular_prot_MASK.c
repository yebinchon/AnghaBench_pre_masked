
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int tt_entry_t ;
typedef int pt_entry_t ;
typedef int pmap_paddr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int,int,int,int,int,int,int,int **,int *) ;
 int FUNC_5 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_6(vm_offset_t VAR_14, unsigned long VAR_15, pmap_paddr_t VAR_16,
                          int VAR_17, int VAR_18, int VAR_19,
                          bool VAR_20)
{
 pt_entry_t *VAR_21 = ((void*)0), VAR_22 = 0;
 vm_offset_t VAR_23 = VAR_14 + VAR_15;
 vm_offset_t VAR_24 = (VAR_14 + VAR_7) & ~VAR_7;

 if (VAR_15 == 0x0UL)
  return;

 if (VAR_24 > VAR_23) {
  FUNC_4(VAR_14, VAR_23, VAR_14, VAR_16, VAR_18, VAR_19, VAR_20, ((void*)0), ((void*)0));
  return;
 }

 FUNC_4(VAR_14, VAR_24, VAR_14, VAR_16, VAR_18, VAR_19, VAR_20, &VAR_21, &VAR_22);

 while ((VAR_23 - VAR_24) >= VAR_8) {
  if (VAR_20)
   FUNC_4(VAR_24, VAR_24+VAR_8, VAR_24 + 1, VAR_16,
                               VAR_18, VAR_19, VAR_20, ((void*)0), ((void*)0));
  else {
   pmap_paddr_t VAR_25 = VAR_24 - VAR_12 + VAR_11 - VAR_16;
   FUNC_5((VAR_25 & VAR_7) == 0);
   tt_entry_t *VAR_26;
   tt_entry_t VAR_27;

   VAR_26 = FUNC_3(VAR_24);

   if ((VAR_25 >= VAR_11) && (VAR_25 < VAR_13)) {
    VAR_27 = (VAR_25 & VAR_1) | VAR_5
     | VAR_6 | VAR_0 | VAR_3
     | FUNC_0(VAR_18) | FUNC_2(VAR_10)
     | FUNC_1(VAR_9);




    if (VAR_17)
     VAR_27 = VAR_27 | VAR_4;

    *VAR_26 = VAR_27;
   }
  }
  VAR_24 += VAR_8;
 }

 if (VAR_24 < VAR_23)
  FUNC_4(VAR_24, VAR_23, VAR_23, VAR_16, VAR_18, VAR_19, VAR_20, &VAR_21, &VAR_22);

 if (VAR_21 != ((void*)0))
  *VAR_21 = VAR_22;
}
