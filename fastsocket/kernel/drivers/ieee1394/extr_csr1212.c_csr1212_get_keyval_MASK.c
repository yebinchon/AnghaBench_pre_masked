
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csr1212_keyval {int valid; } ;
struct csr1212_csr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct csr1212_csr*,struct csr1212_keyval*) ;

struct csr1212_keyval *
FUNC_1(struct csr1212_csr *VAR_1, struct csr1212_keyval *VAR_2)
{
 if (!VAR_2)
  return ((void*)0);
 if (!VAR_2->valid)
  if (FUNC_0(VAR_1, VAR_2) != VAR_0)
   return ((void*)0);
 return VAR_2;
}
