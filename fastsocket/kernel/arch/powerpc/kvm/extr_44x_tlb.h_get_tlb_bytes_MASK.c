
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_44x_tlbe {int dummy; } ;
typedef int gva_t ;


 unsigned int FUNC_0 (struct kvmppc_44x_tlbe const*) ;

__attribute__((used)) static inline gva_t FUNC_1(const struct kvmppc_44x_tlbe *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);
 return 1 << 10 << (VAR_1 << 1);
}
