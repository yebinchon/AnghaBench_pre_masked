
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct csr1212_keyval_img {int data; void* crc; void* length; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {int len; int data; } ;
struct TYPE_11__ {TYPE_4__ directory; TYPE_3__ leaf; } ;
struct TYPE_8__ {int type; int id; } ;
struct csr1212_keyval {struct csr1212_keyval* next; TYPE_6__* prev; TYPE_5__ value; TYPE_2__ key; scalar_t__ offset; } ;
struct csr1212_csr_rom_cache {scalar_t__ offset; scalar_t__ data; TYPE_1__* layout_tail; struct csr1212_keyval* layout_head; } ;
struct TYPE_12__ {int * next; } ;
struct TYPE_7__ {struct csr1212_keyval* next; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct csr1212_keyval*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct csr1212_csr_rom_cache *VAR_1)
{
 struct csr1212_keyval *VAR_2, *VAR_3;
 struct csr1212_keyval_img *VAR_4;

 for (VAR_2 = VAR_1->layout_head;
      VAR_2 != VAR_1->layout_tail->next;
      VAR_2 = VAR_3) {
  VAR_4 = (struct csr1212_keyval_img *)(VAR_1->data +
    FUNC_1(VAR_2->offset - VAR_1->offset));
  switch (VAR_2->key.type) {
  default:
  case 129:
  case 131:

   FUNC_0(1);
   break;

  case 128:


   if (VAR_2->key.id != VAR_0)
    FUNC_5(VAR_4->data, VAR_2->value.leaf.data,
           FUNC_6(VAR_2->value.leaf.len));

   VAR_4->length = FUNC_2(VAR_2->value.leaf.len);
   VAR_4->crc = FUNC_3(VAR_4->data, VAR_2->value.leaf.len);
   break;

  case 130:
   FUNC_4(VAR_2, VAR_4->data);

   VAR_4->length = FUNC_2(VAR_2->value.directory.len);
   VAR_4->crc = FUNC_3(VAR_4->data,
       VAR_2->value.directory.len);
   break;
  }

  VAR_3 = VAR_2->next;
  if (VAR_2->prev)
   VAR_2->prev->next = ((void*)0);
  if (VAR_2->next)
   VAR_2->next->prev = ((void*)0);
  VAR_2->prev = ((void*)0);
  VAR_2->next = ((void*)0);
 }
}
