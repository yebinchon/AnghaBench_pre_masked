
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct tlbe {int dummy; } ;
typedef scalar_t__ gva_t ;


 scalar_t__ FUNC_0 (struct tlbe const*) ;
 scalar_t__ FUNC_1 (struct tlbe const*) ;

__attribute__((used)) static inline gva_t FUNC_2(const struct tlbe *VAR_0)
{
 u64 VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_0) + VAR_1 - 1;
}
