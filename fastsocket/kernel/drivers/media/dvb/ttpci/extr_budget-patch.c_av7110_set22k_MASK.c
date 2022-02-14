
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct budget_patch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct budget_patch*,int*,int) ;
 int FUNC_1 (int,char*,struct budget_patch*) ;

__attribute__((used)) static void FUNC_2(struct budget_patch *VAR_3, int VAR_4)
{
 u16 VAR_5[2] = {( VAR_0 << 8) | (VAR_4 ? VAR_2 : VAR_1), 0};

 FUNC_1(2, "budget: %p\n", VAR_3);
 FUNC_0(VAR_3, VAR_5, 2);
}
