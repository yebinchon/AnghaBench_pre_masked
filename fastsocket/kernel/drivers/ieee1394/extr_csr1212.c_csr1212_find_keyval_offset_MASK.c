
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct csr1212_keyval {scalar_t__ offset; struct csr1212_keyval* next; } ;



__attribute__((used)) static struct csr1212_keyval *
FUNC_0(struct csr1212_keyval *VAR_0, u32 VAR_1)
{
 struct csr1212_keyval *VAR_2;

 for (VAR_2 = VAR_0->next; VAR_2 && (VAR_2 != VAR_0); VAR_2 = VAR_2->next)
  if (VAR_2->offset == VAR_1)
   return VAR_2;
 return ((void*)0);
}
