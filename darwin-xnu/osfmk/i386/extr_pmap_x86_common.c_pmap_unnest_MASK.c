
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
typedef int kern_return_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,int,...) ;
 int FUNC_9 (int,int) ;
 int* FUNC_10 (int,int) ;
 int VAR_11 ;
 int* FUNC_11 (int,int ) ;
 int FUNC_12 (int*,int) ;

kern_return_t FUNC_13(pmap_t VAR_12, addr64_t VAR_13, uint64_t VAR_14) {
 pd_entry_t *VAR_15;
 unsigned int VAR_16;
 uint64_t VAR_17;
 addr64_t VAR_18, VAR_19;
 uint64_t VAR_20 = VAR_8;

 FUNC_2(FUNC_0(VAR_9) | VAR_1,
            FUNC_5(VAR_12), FUNC_5(VAR_13));

 if ((VAR_14 & (VAR_11-1)) ||
     (VAR_13 & (VAR_11-1))) {
  FUNC_8("pmap_unnest(%p,0x%llx,0x%llx): unaligned...\n",
      VAR_12, VAR_13, VAR_14);
 }

 FUNC_6(!FUNC_7(VAR_12));


 VAR_18 = VAR_13 & ~(VAR_4-1);
 VAR_19 = (VAR_13 + VAR_14 + VAR_4 - 1) & ~(VAR_4-1);
 VAR_14 = VAR_19 - VAR_18;

 FUNC_1(VAR_12);

 VAR_17 = VAR_14 >> VAR_7;
 VAR_13 = VAR_18;

 for (VAR_16 = 0; VAR_16 < VAR_17; ) {
  if ((FUNC_9(VAR_12, VAR_13) != VAR_20) && VAR_10) {
   VAR_20 = FUNC_9(VAR_12, VAR_13);
   VAR_15 = FUNC_10(VAR_12, VAR_13);
   if (VAR_15 && (*VAR_15 & VAR_2)) {
    FUNC_12(VAR_15, (pd_entry_t)0);
    VAR_16 += (uint32_t) VAR_6;
    VAR_13 += VAR_5;
    continue;
   }
  }
  VAR_15 = FUNC_11(VAR_12, (vm_map_offset_t)VAR_13);
  if (VAR_15 == 0)
   FUNC_8("pmap_unnest: no pde, grand %p vaddr 0x%llx\n", VAR_12, VAR_13);
  FUNC_12(VAR_15, (pd_entry_t)0);
  VAR_16++;
  VAR_13 += VAR_4;
 }

 FUNC_4(VAR_12, VAR_18, VAR_19);

 FUNC_3(VAR_12);

 FUNC_2(FUNC_0(VAR_9) | VAR_0, VAR_3);

 return VAR_3;
}
