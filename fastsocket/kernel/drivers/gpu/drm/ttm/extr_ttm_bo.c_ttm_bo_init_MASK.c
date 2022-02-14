
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_placement {int dummy; } ;
struct ttm_mem_global {int dummy; } ;
struct TYPE_4__ {int io_reserved_vm; scalar_t__ io_reserved_count; } ;
struct TYPE_5__ {unsigned long size; unsigned long num_pages; int placement; TYPE_1__ bus; int page_alignment; int * mm_node; int mem_type; } ;
struct ttm_buffer_object {void (* destroy ) (struct ttm_buffer_object*) ;int type; unsigned long num_pages; int seq_valid; size_t acc_size; TYPE_3__* glob; struct sg_table* sg; struct file* persistent_swap_storage; TYPE_2__ mem; scalar_t__ priv_flags; struct ttm_bo_device* bdev; int io_reserve_lru; int swap; int ddestroy; int lru; int event_queue; int reserved; int cpu_writers; int list_kref; int kref; } ;
struct ttm_bo_device {TYPE_3__* glob; } ;
struct sg_table {int dummy; } ;
struct file {int dummy; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;
struct TYPE_6__ {int bo_count; struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_buffer_object*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 void FUNC_7 (struct ttm_buffer_object*) ;
 void FUNC_8 (struct ttm_buffer_object*) ;
 int FUNC_9 (struct ttm_buffer_object*,struct ttm_placement*) ;
 int FUNC_10 (struct ttm_buffer_object*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (struct ttm_buffer_object**) ;
 int FUNC_12 (struct ttm_buffer_object*) ;
 int FUNC_13 (struct ttm_buffer_object*,struct ttm_placement*,int,int) ;
 int FUNC_14 (struct ttm_mem_global*,size_t,int,int) ;
 int FUNC_15 (struct ttm_mem_global*,size_t) ;
 scalar_t__ FUNC_16 (int) ;

int FUNC_17(struct ttm_bo_device *VAR_9,
  struct ttm_buffer_object *VAR_10,
  unsigned long VAR_11,
  enum ttm_bo_type VAR_12,
  struct ttm_placement *VAR_13,
  uint32_t VAR_14,
  bool VAR_15,
  struct file *VAR_16,
  size_t VAR_17,
  struct sg_table *VAR_18,
  void (*VAR_19) (struct ttm_buffer_object *))
{
 int VAR_20 = 0;
 unsigned long VAR_21;
 struct ttm_mem_global *VAR_22 = VAR_9->glob->mem_glob;

 VAR_20 = FUNC_14(VAR_22, VAR_17, 0, 0);
 if (VAR_20) {
  FUNC_6("Out of kernel memory\n");
  if (VAR_19)
   (*VAR_19)(VAR_10);
  else
   FUNC_4(VAR_10);
  return -VAR_1;
 }

 VAR_21 = (VAR_11 + VAR_3 - 1) >> VAR_2;
 if (VAR_21 == 0) {
  FUNC_6("Illegal buffer object size\n");
  if (VAR_19)
   (*VAR_19)(VAR_10);
  else
   FUNC_4(VAR_10);
  FUNC_15(VAR_22, VAR_17);
  return -VAR_0;
 }
 VAR_10->destroy = VAR_19;

 FUNC_5(&VAR_10->kref);
 FUNC_5(&VAR_10->list_kref);
 FUNC_2(&VAR_10->cpu_writers, 0);
 FUNC_2(&VAR_10->reserved, 1);
 FUNC_3(&VAR_10->event_queue);
 FUNC_0(&VAR_10->lru);
 FUNC_0(&VAR_10->ddestroy);
 FUNC_0(&VAR_10->swap);
 FUNC_0(&VAR_10->io_reserve_lru);
 VAR_10->bdev = VAR_9;
 VAR_10->glob = VAR_9->glob;
 VAR_10->type = VAR_12;
 VAR_10->num_pages = VAR_21;
 VAR_10->mem.size = VAR_21 << VAR_2;
 VAR_10->mem.mem_type = VAR_6;
 VAR_10->mem.num_pages = VAR_10->num_pages;
 VAR_10->mem.mm_node = ((void*)0);
 VAR_10->mem.page_alignment = VAR_14;
 VAR_10->mem.bus.io_reserved_vm = 0;
 VAR_10->mem.bus.io_reserved_count = 0;
 VAR_10->priv_flags = 0;
 VAR_10->mem.placement = (VAR_5 | VAR_4);
 VAR_10->seq_valid = 0;
 VAR_10->persistent_swap_storage = VAR_16;
 VAR_10->acc_size = VAR_17;
 VAR_10->sg = VAR_18;
 FUNC_1(&VAR_10->glob->bo_count);

 VAR_20 = FUNC_9(VAR_10, VAR_13);
 if (FUNC_16(VAR_20 != 0))
  goto out_err;





 if (VAR_10->type == VAR_7 ||
     VAR_10->type == VAR_8) {
  VAR_20 = FUNC_10(VAR_10);
  if (VAR_20)
   goto out_err;
 }

 VAR_20 = FUNC_13(VAR_10, VAR_13, VAR_15, 0);
 if (VAR_20)
  goto out_err;

 FUNC_12(VAR_10);
 return 0;

out_err:
 FUNC_12(VAR_10);
 FUNC_11(&VAR_10);

 return VAR_20;
}
