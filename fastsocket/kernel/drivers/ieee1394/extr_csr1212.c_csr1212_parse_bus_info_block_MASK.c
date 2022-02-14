
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct csr1212_csr {int bus_info_len; int crc_len; TYPE_2__* cache_head; int * bus_info_data; int private; TYPE_1__* ops; } ;
struct csr1212_cache_region {int offset_end; scalar_t__ offset_start; int * prev; int * next; } ;
struct csr1212_bus_info_block_img {int crc; int crc_length; int data; } ;
struct TYPE_4__ {struct csr1212_cache_region* filled_tail; struct csr1212_cache_region* filled_head; int * data; } ;
struct TYPE_3__ {int (* bus_read ) (struct csr1212_csr*,scalar_t__,int *,int ) ;} ;


 scalar_t__ VAR_0 ;
 struct csr1212_cache_region* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct csr1212_csr*,scalar_t__,int *,int ) ;
 int FUNC_6 (struct csr1212_csr*,scalar_t__,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct csr1212_csr *VAR_4)
{
 struct csr1212_bus_info_block_img *VAR_5;
 struct csr1212_cache_region *VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4->bus_info_len; VAR_7 += sizeof(u32)) {
  VAR_8 = VAR_4->ops->bus_read(VAR_4, VAR_0 + VAR_7,
    &VAR_4->cache_head->data[FUNC_2(VAR_7)],
    VAR_4->private);
  if (VAR_8 != VAR_1)
   return VAR_8;


  if (VAR_7 == 0 &&
      FUNC_1(VAR_4->cache_head->data[0]) >> 24 !=
      FUNC_2(VAR_4->bus_info_len) - 1)
   return -VAR_2;
 }

 VAR_5 = (struct csr1212_bus_info_block_img*)VAR_4->cache_head->data;
 VAR_4->crc_len = FUNC_4(VAR_5->crc_length);




 for (VAR_7 = VAR_4->bus_info_len; VAR_7 <= VAR_4->crc_len; VAR_7 += sizeof(u32)) {
  VAR_8 = VAR_4->ops->bus_read(VAR_4, VAR_0 + VAR_7,
    &VAR_4->cache_head->data[FUNC_2(VAR_7)],
    VAR_4->private);
  if (VAR_8 != VAR_1)
   return VAR_8;
 }

 FUNC_3(VAR_5->data, VAR_5->crc_length, VAR_5->crc,
     &VAR_4->bus_info_data[3]);

 VAR_6 = FUNC_0(sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_3;

 VAR_6->next = ((void*)0);
 VAR_6->prev = ((void*)0);
 VAR_6->offset_start = 0;
 VAR_6->offset_end = VAR_4->crc_len + 4;

 VAR_4->cache_head->filled_head = VAR_6;
 VAR_4->cache_head->filled_tail = VAR_6;

 return VAR_1;
}
