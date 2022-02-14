
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union pte_flags {unsigned long val; unsigned long ppn; } ;
typedef unsigned long u64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;

u64 FUNC_2(u64 *VAR_7, u64 VAR_8, u64 VAR_9)
{
 u64 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 union pte_flags VAR_15;

 VAR_10 = FUNC_0(VAR_8);
 VAR_11 = ~((1UL << VAR_10) - 1);
 VAR_15.val = *VAR_7;
 VAR_12 = *VAR_7;
 VAR_12 = ((VAR_12 & VAR_6) & VAR_11) | (VAR_9 & ~VAR_11);
 VAR_13 = FUNC_1(VAR_12 >> VAR_4);
 VAR_14 = VAR_13 & VAR_1;
 if (VAR_14 && (VAR_14 != VAR_2)) {
  *VAR_7 |= VAR_5;
  return -1;
 }
 VAR_13 = ((VAR_13 & VAR_6) & VAR_3) |
     (VAR_12 & ~VAR_3);
 VAR_15.ppn = VAR_13 >> VAR_0;
 return VAR_15.val;
}
