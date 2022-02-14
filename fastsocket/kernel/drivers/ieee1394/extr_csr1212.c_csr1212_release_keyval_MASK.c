
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct csr1212_dentry* dentries_tail; struct csr1212_dentry* dentries_head; } ;
struct TYPE_6__ {TYPE_2__ directory; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct csr1212_keyval {TYPE_3__ value; TYPE_1__ key; struct csr1212_keyval* associate; int refcnt; } ;
struct csr1212_dentry {struct csr1212_dentry* prev; struct csr1212_dentry* next; struct csr1212_keyval* kv; } ;


 int FUNC_0 (struct csr1212_dentry*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct csr1212_keyval*) ;

void FUNC_3(struct csr1212_keyval *VAR_1)
{
 struct csr1212_keyval *VAR_2, *VAR_3;
 struct csr1212_dentry VAR_4;
 struct csr1212_dentry *VAR_5, *VAR_6;

 if (!FUNC_1(&VAR_1->refcnt))
  return;

 VAR_4.kv = VAR_1;
 VAR_4.next = ((void*)0);
 VAR_4.prev = ((void*)0);

 VAR_5 = &VAR_4;
 VAR_6 = VAR_5;

 while (VAR_5) {
  VAR_2 = VAR_5->kv;

  while (VAR_2) {

   if (VAR_2 != VAR_1 && !FUNC_1(&VAR_2->refcnt))
    break;

   VAR_3 = VAR_2->associate;

   if (VAR_2->key.type == VAR_0) {


    if (VAR_2->value.directory.dentries_head) {
     VAR_6->next =
         VAR_2->value.directory.dentries_head;
     VAR_2->value.directory.dentries_head->prev =
         VAR_6;
     VAR_6 = VAR_2->value.directory.dentries_tail;
    }
   }
   FUNC_2(VAR_2);
   VAR_2 = VAR_3;
  }

  VAR_5 = VAR_5->next;
  if (VAR_5) {
   if (VAR_5->prev && VAR_5->prev != &VAR_4)
    FUNC_0(VAR_5->prev);
   VAR_5->prev = ((void*)0);
  } else if (VAR_6 != &VAR_4) {
   FUNC_0(VAR_6);
  }
 }
}
