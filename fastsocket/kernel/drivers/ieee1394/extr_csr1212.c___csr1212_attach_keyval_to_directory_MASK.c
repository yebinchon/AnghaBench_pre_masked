
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
struct csr1212_dentry {struct csr1212_dentry* next; struct csr1212_dentry* prev; struct csr1212_keyval* kv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct csr1212_dentry* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct csr1212_keyval*) ;

__attribute__((used)) static int FUNC_3(struct csr1212_keyval *VAR_3,
      struct csr1212_keyval *VAR_4,
      bool VAR_5)
{
 struct csr1212_dentry *VAR_6;

 FUNC_0(!VAR_4 || !VAR_3 || VAR_3->key.type != VAR_0);

 VAR_6 = FUNC_1(sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_2;

 if (VAR_5)
  FUNC_2(VAR_4);
 VAR_6->kv = VAR_4;

 VAR_6->next = ((void*)0);
 VAR_6->prev = VAR_3->value.directory.dentries_tail;

 if (!VAR_3->value.directory.dentries_head)
  VAR_3->value.directory.dentries_head = VAR_6;

 if (VAR_3->value.directory.dentries_tail)
  VAR_3->value.directory.dentries_tail->next = VAR_6;
 VAR_3->value.directory.dentries_tail = VAR_6;

 return VAR_1;
}
