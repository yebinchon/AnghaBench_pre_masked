
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
struct TYPE_5__ {scalar_t__ id; int type; } ;
struct csr1212_keyval {scalar_t__ offset; struct csr1212_keyval* next; TYPE_4__ value; TYPE_1__ key; } ;
struct csr1212_csr_rom_cache {int size; scalar_t__ offset; scalar_t__ len; struct csr1212_keyval* layout_tail; struct csr1212_keyval* layout_head; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct csr1212_keyval *
FUNC_2(struct csr1212_csr_rom_cache *VAR_1,
      struct csr1212_keyval *VAR_2, int VAR_3)
{
 struct csr1212_keyval *VAR_4 = VAR_2;
 struct csr1212_keyval *VAR_5 = VAR_2;
 int VAR_6 = VAR_3;
 int VAR_7 = 0, VAR_8 = 0;

 VAR_1->layout_head = VAR_4;

 while (VAR_4 && VAR_6 < VAR_1->size) {

  if (VAR_4->key.id != VAR_0)
   VAR_4->offset = VAR_1->offset + VAR_6;

  switch (VAR_4->key.type) {
  case 128:
   VAR_7 = VAR_4->value.leaf.len;
   break;

  case 129:
   VAR_7 = VAR_4->value.directory.len;
   break;

  default:

   FUNC_0(1);
   break;
  }

  VAR_6 += FUNC_1(VAR_7 + 1);

  if (VAR_6 <= VAR_1->size) {
   VAR_5 = VAR_4;
   VAR_8 = VAR_7;
   VAR_4 = VAR_4->next;
  }
 }

 VAR_1->layout_tail = VAR_5;
 VAR_1->len = VAR_5->offset - VAR_1->offset + FUNC_1(VAR_8 + 1);

 return VAR_4;
}
