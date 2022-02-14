
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct csr1212_csr_rom_cache {struct csr1212_csr_rom_cache* next; struct csr1212_csr_rom_cache* prev; int data; TYPE_4__* ext_rom; } ;
struct csr1212_csr {int max_rom; struct csr1212_csr_rom_cache* cache_tail; int private; TYPE_1__* ops; int root_kv; } ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_9__ {TYPE_2__ leaf; } ;
struct TYPE_10__ {TYPE_3__ value; scalar_t__ offset; } ;
struct TYPE_7__ {scalar_t__ (* allocate_addr_range ) (size_t,int,int ) ;int (* release_addr ) (scalar_t__,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct csr1212_csr_rom_cache*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 struct csr1212_csr_rom_cache* FUNC_5 (scalar_t__,size_t) ;
 scalar_t__ FUNC_6 (size_t,int,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct csr1212_csr *VAR_6, size_t VAR_7)
{
 struct csr1212_csr_rom_cache *VAR_8;
 u64 VAR_9;

 FUNC_0(!VAR_6 || !VAR_6->ops || !VAR_6->ops->allocate_addr_range ||
        !VAR_6->ops->release_addr || VAR_6->max_rom < 1);


 VAR_7 = (VAR_7 + (VAR_6->max_rom - 1)) & ~(VAR_6->max_rom - 1);

 VAR_9 = VAR_6->ops->allocate_addr_range(VAR_7, VAR_6->max_rom,
       VAR_6->private);
 if (VAR_9 == VAR_0)
  return -VAR_5;

 if (VAR_9 < VAR_3) {

  VAR_6->ops->release_addr(VAR_9, VAR_6->private);
  return -VAR_5;
 }

 VAR_8 = FUNC_5(VAR_9 - VAR_3,
      VAR_7);
 if (!VAR_8) {
  VAR_6->ops->release_addr(VAR_9, VAR_6->private);
  return -VAR_5;
 }

 VAR_8->ext_rom = FUNC_3(VAR_2,
         VAR_1);
 if (!VAR_8->ext_rom) {
  VAR_6->ops->release_addr(VAR_9, VAR_6->private);
  FUNC_1(VAR_8);
  return -VAR_5;
 }

 if (FUNC_2(VAR_6->root_kv, VAR_8->ext_rom) !=
     VAR_4) {
  FUNC_4(VAR_8->ext_rom);
  VAR_6->ops->release_addr(VAR_9, VAR_6->private);
  FUNC_1(VAR_8);
  return -VAR_5;
 }
 VAR_8->ext_rom->offset = VAR_9 - VAR_3;
 VAR_8->ext_rom->value.leaf.len = -1;
 VAR_8->ext_rom->value.leaf.data = VAR_8->data;


 VAR_8->prev = VAR_6->cache_tail;
 VAR_6->cache_tail->next = VAR_8;
 VAR_6->cache_tail = VAR_8;
 return VAR_4;
}
