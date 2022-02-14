
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int mas7; int mas3; int mas2; int mas1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct tlbe *VAR_4)
{
 FUNC_0(VAR_0, VAR_4->mas1);
 FUNC_0(VAR_1, VAR_4->mas2);
 FUNC_0(VAR_2, VAR_4->mas3);
 FUNC_0(VAR_3, VAR_4->mas7);
 __asm__ __volatile__ ("tlbwe\n" : : );
}
