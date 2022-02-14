
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_44x_tlbe {int word0; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct kvmppc_44x_tlbe *VAR_0)
{
 return (VAR_0->word0 >> 4) & 0xf;
}
