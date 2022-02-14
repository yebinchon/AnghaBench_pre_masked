
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
struct csr1212_keyval {TYPE_3__ value; TYPE_1__ key; } ;
struct csr1212_dentry {struct csr1212_dentry* prev; struct csr1212_dentry* next; } ;


 int FUNC_0 (struct csr1212_dentry*) ;
 scalar_t__ VAR_0 ;
 struct csr1212_dentry* FUNC_1 (struct csr1212_keyval*,struct csr1212_keyval*) ;
 int FUNC_2 (struct csr1212_keyval*) ;

void FUNC_3(struct csr1212_keyval *VAR_1,
       struct csr1212_keyval *VAR_2)
{
 struct csr1212_dentry *VAR_3;

 if (!VAR_2 || !VAR_1 || VAR_1->key.type != VAR_0)
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_3)
  return;

 if (VAR_3->prev)
  VAR_3->prev->next = VAR_3->next;
 if (VAR_3->next)
  VAR_3->next->prev = VAR_3->prev;
 if (VAR_1->value.directory.dentries_head == VAR_3)
  VAR_1->value.directory.dentries_head = VAR_3->next;
 if (VAR_1->value.directory.dentries_tail == VAR_3)
  VAR_1->value.directory.dentries_tail = VAR_3->prev;

 FUNC_0(VAR_3);

 FUNC_2(VAR_2);
}
