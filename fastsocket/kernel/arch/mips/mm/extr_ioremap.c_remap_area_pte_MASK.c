
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef unsigned long phys_t ;
typedef int pgprot_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static inline void FUNC_7(pte_t * VAR_8, unsigned long VAR_9,
 phys_t VAR_10, phys_t VAR_11, unsigned long VAR_12)
{
 phys_t VAR_13;
 unsigned long VAR_14;
 pgprot_t VAR_15 = FUNC_2(VAR_4 | VAR_5 | VAR_6
                            | VAR_7 | VAR_12);

 VAR_9 &= ~VAR_2;
 VAR_13 = VAR_9 + VAR_10;
 if (VAR_13 > VAR_3)
  VAR_13 = VAR_3;
 FUNC_1(VAR_9 >= VAR_13);
 VAR_14 = VAR_11 >> VAR_0;
 do {
  if (!FUNC_5(*VAR_8)) {
   FUNC_4("remap_area_pte: page already exists\n");
   FUNC_0();
  }
  FUNC_6(VAR_8, FUNC_3(VAR_14, VAR_15));
  VAR_9 += VAR_1;
  VAR_14++;
  VAR_8++;
 } while (VAR_9 && (VAR_9 < VAR_13));
}
