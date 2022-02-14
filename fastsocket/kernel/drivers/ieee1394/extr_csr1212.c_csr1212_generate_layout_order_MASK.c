
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_8__ {TYPE_3__ directory; TYPE_2__ leaf; } ;
struct TYPE_5__ {int type; } ;
struct csr1212_keyval {struct csr1212_keyval* next; TYPE_4__ value; TYPE_1__ key; } ;




 int FUNC_0 (struct csr1212_keyval*,struct csr1212_keyval**) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static size_t FUNC_2(struct csr1212_keyval *VAR_0)
{
 struct csr1212_keyval *VAR_1 = VAR_0;
 size_t VAR_2 = 0;

 while (VAR_0) {
  switch (VAR_0->key.type) {
  case 128:

   VAR_2 += VAR_0->value.leaf.len + 1;
   break;

  case 129:
   VAR_0->value.directory.len =
    FUNC_0(VAR_0, &VAR_1);

   VAR_2 += VAR_0->value.directory.len + 1;
   break;
  }
  VAR_0 = VAR_0->next;
 }
 return FUNC_1(VAR_2);
}
