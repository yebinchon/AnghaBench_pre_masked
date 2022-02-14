
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tlbe {int mas7; int mas3; } ;



__attribute__((used)) static inline u64 FUNC_0(const struct tlbe *VAR_0)
{
 u64 VAR_1 = VAR_0->mas7;
 return (VAR_1 << 32) | (VAR_0->mas3 & 0xfffff000);
}
