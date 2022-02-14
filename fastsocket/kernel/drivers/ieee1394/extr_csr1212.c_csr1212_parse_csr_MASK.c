
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


struct csr1212_dentry {TYPE_6__* kv; struct csr1212_dentry* next; } ;
struct csr1212_csr {int max_rom; TYPE_6__* root_kv; scalar_t__ bus_info_len; TYPE_2__* cache_head; TYPE_1__* ops; } ;
struct TYPE_11__ {scalar_t__ id; } ;
struct TYPE_9__ {struct csr1212_dentry* dentries_head; } ;
struct TYPE_10__ {TYPE_3__ directory; } ;
struct TYPE_12__ {scalar_t__ valid; TYPE_5__ key; TYPE_4__ value; struct TYPE_12__* prev; struct TYPE_12__* next; scalar_t__ offset; } ;
struct TYPE_8__ {TYPE_6__* layout_tail; TYPE_6__* layout_head; } ;
struct TYPE_7__ {int bus_read; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct csr1212_csr*) ;
 int FUNC_2 (struct csr1212_csr*,TYPE_6__*) ;

int FUNC_3(struct csr1212_csr *VAR_3)
{
 struct csr1212_dentry *VAR_4;
 int VAR_5;

 FUNC_0(!VAR_3 || !VAR_3->ops || !VAR_3->ops->bus_read);

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 != VAR_2)
  return VAR_5;







 VAR_3->max_rom = 4;

 VAR_3->cache_head->layout_head = VAR_3->root_kv;
 VAR_3->cache_head->layout_tail = VAR_3->root_kv;

 VAR_3->root_kv->offset = (VAR_0 & 0xffff) +
  VAR_3->bus_info_len;

 VAR_3->root_kv->valid = 0;
 VAR_3->root_kv->next = VAR_3->root_kv;
 VAR_3->root_kv->prev = VAR_3->root_kv;
 VAR_5 = FUNC_2(VAR_3, VAR_3->root_kv);
 if (VAR_5 != VAR_2)
  return VAR_5;



 for (VAR_4 = VAR_3->root_kv->value.directory.dentries_head;
      VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->kv->key.id == VAR_1 &&
   !VAR_4->kv->valid) {
   VAR_5 = FUNC_2(VAR_3, VAR_4->kv);
   if (VAR_5 != VAR_2)
    return VAR_5;
  }
 }

 return VAR_2;
}
