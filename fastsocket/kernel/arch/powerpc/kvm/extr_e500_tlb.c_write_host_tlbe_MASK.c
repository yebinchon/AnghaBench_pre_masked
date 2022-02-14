
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int dummy; } ;
struct kvmppc_vcpu_e500 {struct tlbe** shadow_tlb; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct tlbe*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(struct kvmppc_vcpu_e500 *VAR_1,
  int VAR_2, int VAR_3)
{
 struct tlbe *VAR_4 = &VAR_1->shadow_tlb[VAR_2][VAR_3];

 FUNC_3();
 if (VAR_2 == 0) {
  FUNC_2(VAR_4);
 } else {
  unsigned register VAR_5;

  VAR_5 = FUNC_5(VAR_0);

  FUNC_6(VAR_0, FUNC_1(1) | FUNC_0(FUNC_7(VAR_3)));
  FUNC_2(VAR_4);

  FUNC_6(VAR_0, VAR_5);
 }
 FUNC_4();
}
