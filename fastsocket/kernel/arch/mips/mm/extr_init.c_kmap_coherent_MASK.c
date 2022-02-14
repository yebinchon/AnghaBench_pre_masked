
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_5__ {unsigned long pte_high; } ;
typedef TYPE_1__ pte_t ;
typedef enum fixed_addresses { ____Placeholder_fixed_addresses } fixed_addresses ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_3 (struct page*) ;
 unsigned long FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_6 ;
 TYPE_1__ FUNC_7 (struct page*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__) ;
 unsigned long FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int,TYPE_1__) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (unsigned long) ;
 int FUNC_21 (unsigned long) ;
 int FUNC_22 (unsigned long) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;

void *FUNC_25(struct page *VAR_7, unsigned long VAR_8)
{
 enum fixed_addresses VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;
 pte_t VAR_14;
 int VAR_15;

 FUNC_0(FUNC_3(VAR_7));

 FUNC_6();
 VAR_9 = (VAR_8 >> VAR_5) & (VAR_1 - 1);




 VAR_9 += FUNC_5() ? VAR_1 : 0;

 VAR_10 = FUNC_4(VAR_0 - VAR_9);
 VAR_14 = FUNC_7(VAR_7, VAR_3);



 VAR_12 = FUNC_9(VAR_14) >> 6;


 FUNC_1(VAR_11);
 VAR_13 = FUNC_10();
 FUNC_20(VAR_10 & (VAR_4 << 1));
 FUNC_21(VAR_12);
 FUNC_22(VAR_12);
 VAR_15 = FUNC_12();
 FUNC_24(VAR_15 + 1);
 FUNC_23(VAR_15);
 FUNC_8();
 FUNC_17();

 FUNC_19();
 FUNC_20(VAR_13);
 FUNC_2(VAR_11);

 return (void*) VAR_10;
}
