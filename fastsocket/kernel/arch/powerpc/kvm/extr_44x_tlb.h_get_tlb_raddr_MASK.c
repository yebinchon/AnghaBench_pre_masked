
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_44x_tlbe {int word1; } ;



__attribute__((used)) static inline u64 FUNC_0(const struct kvmppc_44x_tlbe *VAR_0)
{
 u64 VAR_1 = VAR_0->word1;
 return ((VAR_1 & 0xf) << 32) | (VAR_1 & 0xfffffc00);
}
