
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlb_info {unsigned long long next; unsigned long long last; unsigned long long first; } ;
typedef int pte_t ;
struct TYPE_2__ {struct tlb_info dtlb; struct tlb_info itlb; } ;


 unsigned long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_0 (unsigned long long) ;
 TYPE_1__* VAR_5 ;
 unsigned long long FUNC_1 () ;
 unsigned long long FUNC_2 (unsigned long) ;
 unsigned long long FUNC_3 (int ) ;

inline void FUNC_4(unsigned long VAR_6,
                            unsigned long long VAR_7, pte_t *VAR_8)
{
 unsigned long long VAR_9;
 unsigned long long VAR_10=0;
 struct tlb_info *VAR_11;
 unsigned long long VAR_12;


 VAR_9 = FUNC_3(*VAR_8);




 VAR_10 = FUNC_2(VAR_6 & VAR_0);


 VAR_10 |= FUNC_1() << VAR_1;
 VAR_10 |= VAR_2;


 VAR_9 &= VAR_4;

 VAR_11 = VAR_7 ? &(VAR_5->itlb) : &(VAR_5->dtlb);
 VAR_12 = VAR_11->next;
 FUNC_0(VAR_12);
 asm volatile ("putcfg %0,1,%2\n\n\t"
        "putcfg %0,0,%1\n"
        : : "r" (VAR_12), "r" (VAR_10), "r" (VAR_9) );

 VAR_12 += VAR_3;
 if (VAR_12 > VAR_11->last) VAR_12 = VAR_11->first;
 VAR_11->next = VAR_12;

}
