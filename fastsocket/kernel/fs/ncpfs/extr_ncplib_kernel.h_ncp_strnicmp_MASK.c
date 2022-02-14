
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct nls_table *VAR_0, const unsigned char *VAR_1,
  const unsigned char *VAR_2, int VAR_3)
{
 while (VAR_3--) {
  if (FUNC_0(*VAR_1++) != FUNC_0(*VAR_2++))
   return 1;
 }

 return 0;
}
