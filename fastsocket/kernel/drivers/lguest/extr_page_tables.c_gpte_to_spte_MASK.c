
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lg_cpu {TYPE_1__* lg; } ;
typedef int pte_t ;
struct TYPE_2__ {scalar_t__ mem_base; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct lg_cpu*,char*,scalar_t__) ;
 int FUNC_3 (unsigned long,int ) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static pte_t FUNC_6(struct lg_cpu *VAR_2, pte_t VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;







 VAR_7 = (FUNC_4(VAR_3) & ~VAR_1);


 VAR_6 = (unsigned long)VAR_2->lg->mem_base / VAR_0;







 VAR_5 = FUNC_1(VAR_6 + FUNC_5(VAR_3), VAR_4);
 if (VAR_5 == -1UL) {
  FUNC_2(VAR_2, "failed to get page %lu", FUNC_5(VAR_3));





  VAR_7 = 0;
 }

 return FUNC_3(VAR_5, FUNC_0(VAR_7));
}
