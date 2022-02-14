
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int len; int * data; } ;
struct TYPE_4__ {TYPE_1__ leaf; } ;
struct csr1212_keyval {int valid; scalar_t__ offset; TYPE_2__ value; } ;


 int FUNC_0 (struct csr1212_keyval*) ;
 int VAR_0 ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 struct csr1212_keyval* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,void const*,size_t) ;

__attribute__((used)) static struct csr1212_keyval *
FUNC_5(u8 VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct csr1212_keyval *VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_3 > 0) {
  VAR_4->value.leaf.data = FUNC_1(VAR_3);
  if (!VAR_4->value.leaf.data) {
   FUNC_0(VAR_4);
   return ((void*)0);
  }

  if (VAR_2)
   FUNC_4(VAR_4->value.leaf.data, VAR_2, VAR_3);
 } else {
  VAR_4->value.leaf.data = ((void*)0);
 }

 VAR_4->value.leaf.len = FUNC_2(VAR_3);
 VAR_4->offset = 0;
 VAR_4->valid = 1;

 return VAR_4;
}
