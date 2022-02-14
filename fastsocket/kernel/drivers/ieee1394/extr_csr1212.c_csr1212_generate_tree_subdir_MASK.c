
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int id; int type; } ;
struct TYPE_4__ {struct csr1212_dentry* dentries_head; } ;
struct TYPE_5__ {scalar_t__ immediate; int csr_offset; TYPE_1__ directory; } ;
struct csr1212_keyval {int offset; TYPE_3__ key; TYPE_2__ value; struct csr1212_keyval* associate; } ;
struct csr1212_dentry {struct csr1212_keyval* kv; struct csr1212_dentry* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct csr1212_keyval *VAR_6, u32 *VAR_7)
{
 struct csr1212_dentry *VAR_8;
 struct csr1212_keyval *VAR_9 = ((void*)0);
 struct csr1212_keyval *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 for (VAR_8 = VAR_6->value.directory.dentries_head;
      VAR_8;
      VAR_8 = VAR_8->next) {
  struct csr1212_keyval *VAR_12;

  for (VAR_12 = VAR_8->kv; VAR_12; VAR_12 = VAR_12->associate) {
   u32 VAR_13 = 0;


   if (VAR_12->key.id ==
       VAR_1) {
    if (VAR_9 == ((void*)0))
     VAR_9 = VAR_12;
    else if (VAR_12->value.immediate !=
      VAR_9->value.immediate)
     VAR_9 = VAR_12;
    else
     continue;


   } else if (VAR_12->key.id == VAR_0) {
    if (VAR_10 == ((void*)0))
     VAR_10 = VAR_12;
    else if (VAR_12->value.immediate !=
      VAR_10->value.immediate)
     VAR_10 = VAR_12;
    else
     continue;
   }

   switch (VAR_12->key.type) {
   case 129:
    VAR_13 = VAR_12->value.immediate;
    break;
   case 131:
    VAR_13 = VAR_12->value.csr_offset;
    break;
   case 128:
    VAR_13 = VAR_12->offset;
    VAR_13 -= VAR_6->offset + FUNC_3(1+VAR_11);
    VAR_13 = FUNC_1(VAR_13);
    break;
   case 130:
    VAR_13 = VAR_12->offset;
    VAR_13 -= VAR_6->offset + FUNC_3(1+VAR_11);
    VAR_13 = FUNC_1(VAR_13);
    break;
   default:

    FUNC_0(1);
    break;
   }

   VAR_13 |= (VAR_12->key.id & VAR_2) <<
     VAR_3;
   VAR_13 |= (VAR_12->key.type & VAR_4) <<
     (VAR_3 +
      VAR_5);
   VAR_7[VAR_11] = FUNC_2(VAR_13);
   VAR_11++;
  }
 }
}
