
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct csr1212_dentry* dentries_head; } ;
struct TYPE_4__ {TYPE_1__ directory; } ;
struct csr1212_keyval {TYPE_2__ value; } ;
struct csr1212_dentry {struct csr1212_keyval* kv; struct csr1212_dentry* next; } ;



__attribute__((used)) static struct csr1212_dentry *
FUNC_0(struct csr1212_keyval *VAR_0, struct csr1212_keyval *VAR_1)
{
 struct csr1212_dentry *VAR_2;

 for (VAR_2 = VAR_0->value.directory.dentries_head;
      VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
  if (VAR_2->kv == VAR_1)
   return VAR_2;
 return ((void*)0);
}
