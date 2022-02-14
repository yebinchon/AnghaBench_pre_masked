
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct csr1212_keyval_img {int length; } ;
struct TYPE_7__ {int len; int* data; } ;
struct TYPE_8__ {TYPE_3__ leaf; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct csr1212_keyval {int offset; TYPE_4__ value; TYPE_1__ key; } ;
struct csr1212_csr_rom_cache {int offset; int size; int* data; struct csr1212_cache_region* filled_head; struct csr1212_cache_region* filled_tail; struct csr1212_csr_rom_cache* next; struct csr1212_csr_rom_cache* prev; } ;
struct csr1212_csr {int max_rom; int private; TYPE_2__* ops; struct csr1212_csr_rom_cache* cache_tail; struct csr1212_csr_rom_cache* cache_head; } ;
struct csr1212_cache_region {int offset_start; int offset_end; struct csr1212_cache_region* prev; struct csr1212_cache_region* next; } ;
struct TYPE_6__ {scalar_t__ (* bus_read ) (struct csr1212_csr*,int,int*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct csr1212_cache_region*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (int) ;
 int FUNC_6 (struct csr1212_keyval*,struct csr1212_csr_rom_cache*) ;
 struct csr1212_csr_rom_cache* FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct csr1212_csr*,int,int*,int ) ;
 scalar_t__ FUNC_10 (struct csr1212_csr*,int,int*,int ) ;

__attribute__((used)) static int
FUNC_11(struct csr1212_csr *VAR_6, struct csr1212_keyval *VAR_7)
{
 struct csr1212_cache_region *VAR_8, *VAR_9, *VAR_10 = ((void*)0);
 struct csr1212_keyval_img *VAR_11 = ((void*)0);
 struct csr1212_csr_rom_cache *VAR_12;
 int VAR_13;
 u64 VAR_14;
 u32 *VAR_15;
 u16 VAR_16 = 0;

 FUNC_0(!VAR_6 || !VAR_7 || VAR_6->max_rom < 1);



 for (VAR_12 = VAR_6->cache_head; VAR_12; VAR_12 = VAR_12->next)
  if (VAR_7->offset >= VAR_12->offset &&
      VAR_7->offset < (VAR_12->offset + VAR_12->size))
   break;

 if (!VAR_12) {
  u32 VAR_17, VAR_18;


  if (VAR_7->key.id != VAR_1)
   return -VAR_3;

  if (VAR_6->ops->bus_read(VAR_6,
           VAR_2 + VAR_7->offset,
           &VAR_17, VAR_6->private))
   return -VAR_4;

  VAR_7->value.leaf.len = FUNC_4(VAR_17) >> 16;

  VAR_18 = (FUNC_8(VAR_7->value.leaf.len + 1) +
         (VAR_6->max_rom - 1)) & ~(VAR_6->max_rom - 1);

  VAR_12 = FUNC_7(VAR_7->offset, VAR_18);
  if (!VAR_12)
   return -VAR_5;

  VAR_7->value.leaf.data = &VAR_12->data[1];
  VAR_6->cache_tail->next = VAR_12;
  VAR_12->prev = VAR_6->cache_tail;
  VAR_12->next = ((void*)0);
  VAR_6->cache_tail = VAR_12;
  VAR_12->filled_head =
   FUNC_2(sizeof(*VAR_12->filled_head));
  if (!VAR_12->filled_head)
   return -VAR_5;

  VAR_12->filled_head->offset_start = 0;
  VAR_12->filled_head->offset_end = sizeof(u32);
  VAR_12->filled_tail = VAR_12->filled_head;
  VAR_12->filled_head->next = ((void*)0);
  VAR_12->filled_head->prev = ((void*)0);
  VAR_12->data[0] = VAR_17;



  return FUNC_6(VAR_7, VAR_12);
 }

 VAR_13 = VAR_7->offset - VAR_12->offset;


 for (VAR_8 = VAR_12->filled_head; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_13 < VAR_8->offset_start) {
   VAR_10 = FUNC_2(sizeof(*VAR_10));
   if (!VAR_10)
    return -VAR_5;

   VAR_10->offset_start = VAR_13 & ~(VAR_6->max_rom - 1);
   VAR_10->offset_end = VAR_10->offset_start;
   VAR_10->next = VAR_8;
   VAR_10->prev = VAR_8->prev;
   VAR_8->prev = VAR_10;
   VAR_8 = VAR_10;
   break;
  } else if ((VAR_13 >= VAR_8->offset_start) &&
      (VAR_13 < VAR_8->offset_end)) {
   VAR_11 = (struct csr1212_keyval_img*)
    (&VAR_12->data[FUNC_5(VAR_13)]);
   VAR_16 = FUNC_8(FUNC_3(VAR_11->length) + 1);
   break;
  } else if (VAR_13 == VAR_8->offset_end) {
   break;
  }
 }

 if (!VAR_8) {
  VAR_8 = VAR_12->filled_tail;
  VAR_10 = FUNC_2(sizeof(*VAR_10));
  if (!VAR_10)
   return -VAR_5;

  VAR_10->offset_start = VAR_13 & ~(VAR_6->max_rom - 1);
  VAR_10->offset_end = VAR_10->offset_start;
  VAR_10->prev = VAR_8;
  VAR_10->next = VAR_8->next;
  VAR_8->next = VAR_10;
  VAR_8 = VAR_10;
  VAR_12->filled_tail = VAR_10;
 }

 while(!VAR_11 || VAR_8->offset_end < VAR_13 + VAR_16) {
  VAR_15 = &VAR_12->data[FUNC_5(VAR_8->offset_end &
       ~(VAR_6->max_rom - 1))];

  VAR_14 = (VAR_0 + VAR_12->offset +
   VAR_8->offset_end) & ~(VAR_6->max_rom - 1);

  if (VAR_6->ops->bus_read(VAR_6, VAR_14, VAR_15, VAR_6->private))
   return -VAR_4;

  VAR_8->offset_end += VAR_6->max_rom - (VAR_8->offset_end &
        (VAR_6->max_rom - 1));

  if (!VAR_11 && (VAR_8->offset_end > VAR_13)) {
   VAR_11 = (struct csr1212_keyval_img*)
    (&VAR_12->data[FUNC_5(VAR_13)]);
   VAR_16 = FUNC_8(FUNC_3(VAR_11->length) + 1);
  }

  if ((VAR_16 + (VAR_7->offset - VAR_12->offset)) > VAR_12->size) {




   return -VAR_4;
  }

  VAR_9 = VAR_8->next;

  if (VAR_9 && (VAR_8->offset_end >= VAR_9->offset_start)) {

   VAR_9->offset_start = VAR_8->offset_start;

   if (VAR_8->prev)
    VAR_8->prev->next = VAR_8->next;
   VAR_9->prev = VAR_8->prev;
   if (VAR_12->filled_head == VAR_8)
    VAR_12->filled_head = VAR_9;
   FUNC_1(VAR_8);
   VAR_8 = VAR_9;
  }
 }

 return FUNC_6(VAR_7, VAR_12);
}
