
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct TYPE_5__ {struct csr1212_dentry* dentries_head; } ;
struct TYPE_8__ {scalar_t__ immediate; TYPE_3__ leaf; TYPE_1__ directory; } ;
struct TYPE_6__ {scalar_t__ id; int type; } ;
struct csr1212_keyval {struct csr1212_keyval* next; struct csr1212_keyval* prev; TYPE_4__ value; TYPE_2__ key; struct csr1212_keyval* associate; } ;
struct csr1212_dentry {struct csr1212_keyval* kv; struct csr1212_dentry* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





__attribute__((used)) static int FUNC_0(struct csr1212_keyval *VAR_3,
       struct csr1212_keyval **VAR_4)
{
 struct csr1212_dentry *VAR_5;
 struct csr1212_keyval *VAR_6;
 struct csr1212_keyval *VAR_7 = ((void*)0);
 struct csr1212_keyval *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 for (VAR_5 = VAR_3->value.directory.dentries_head; VAR_5;
      VAR_5 = VAR_5->next) {
  for (VAR_6 = VAR_5->kv; VAR_6; VAR_6 = VAR_6->associate) {

   if (VAR_6->key.id ==
       VAR_1) {
    if (VAR_7 == ((void*)0))
     VAR_7 = VAR_6;
    else if (VAR_6->value.immediate !=
      VAR_7->value.immediate)
     VAR_7 = VAR_6;
    else
     continue;

   } else if (VAR_6->key.id == VAR_0) {
    if (VAR_8 == ((void*)0))
     VAR_8 = VAR_6;
    else if (VAR_6->value.immediate !=
      VAR_8->value.immediate)
     VAR_8 = VAR_6;
    else
     continue;
   }

   VAR_9 += 1;

   switch (VAR_6->key.type) {
   default:
   case 129:
   case 131:
    break;
   case 128:
   case 130:

    if (VAR_6->prev && (VAR_6->prev->next == VAR_6))
     VAR_6->prev->next = VAR_6->next;
    if (VAR_6->next && (VAR_6->next->prev == VAR_6))
     VAR_6->next->prev = VAR_6->prev;




    if (VAR_6->key.id == VAR_2) {
     VAR_6->value.leaf.len = -1;



     break;
    }


    VAR_6->next = ((void*)0);
    VAR_6->prev = *VAR_4;
    (*VAR_4)->next = VAR_6;
    *VAR_4 = VAR_6;
    break;
   }
  }
 }
 return VAR_9;
}
