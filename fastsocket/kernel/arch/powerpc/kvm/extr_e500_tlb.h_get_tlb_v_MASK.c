
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe {int mas1; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct tlbe *VAR_0)
{
 return (VAR_0->mas1 >> 31) & 0x1;
}
