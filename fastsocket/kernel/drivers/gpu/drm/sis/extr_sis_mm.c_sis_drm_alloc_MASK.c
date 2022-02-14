
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned long start; } ;
struct TYPE_8__ {unsigned long size; unsigned long offset; } ;
struct sis_memblock {TYPE_4__ mm_node; int owner_list; TYPE_3__ req; } ;
struct sis_file_private {int obj_list; } ;
struct drm_file {struct sis_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; TYPE_1__* dev_private; } ;
struct TYPE_6__ {scalar_t__ vram_initialized; scalar_t__ agp_initialized; unsigned long vram_offset; unsigned long agp_offset; int object_idr; int vram_mm; int agp_mm; } ;
typedef TYPE_1__ drm_sis_private_t ;
struct TYPE_7__ {unsigned long size; unsigned long offset; int free; } ;
typedef TYPE_2__ drm_sis_mem_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned long,unsigned long) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_2 (int *,TYPE_4__*,unsigned long,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,struct sis_memblock*,int,int*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct sis_memblock*) ;
 struct sis_memblock* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(struct drm_device *VAR_7, struct drm_file *VAR_8,
    void *VAR_9, int VAR_10)
{
 drm_sis_private_t *VAR_11 = VAR_7->dev_private;
 drm_sis_mem_t *VAR_12 = VAR_9;
 int VAR_13 = 0, VAR_14;
 struct sis_memblock *VAR_15;
 struct sis_file_private *VAR_16 = VAR_8->driver_priv;
 unsigned long VAR_17;

 FUNC_9(&VAR_7->struct_mutex);

 if (0 == ((VAR_10 == 0) ? VAR_11->vram_initialized :
        VAR_11->agp_initialized)) {
  FUNC_1
      ("Attempt to allocate from uninitialized memory manager.\n");
  FUNC_10(&VAR_7->struct_mutex);
  return -VAR_2;
 }

 VAR_15 = FUNC_7(sizeof(*VAR_15), VAR_4);
 if (!VAR_15) {
  VAR_13 = -VAR_3;
  goto fail_alloc;
 }

 VAR_12->size = (VAR_12->size + VAR_5) >> VAR_6;
 if (VAR_10 == VAR_0) {
  VAR_13 = FUNC_2(&VAR_11->agp_mm,
         &VAR_15->mm_node,
         VAR_12->size, 0);
  VAR_17 = VAR_15->mm_node.start;
 } else {







  VAR_13 = FUNC_2(&VAR_11->vram_mm,
         &VAR_15->mm_node,
         VAR_12->size, 0);
  VAR_17 = VAR_15->mm_node.start;

 }
 if (VAR_13)
  goto fail_alloc;

again:
 if (FUNC_5(&VAR_11->object_idr, VAR_4) == 0) {
  VAR_13 = -VAR_3;
  goto fail_idr;
 }

 VAR_13 = FUNC_4(&VAR_11->object_idr, VAR_15, 1, &VAR_14);
 if (VAR_13 == -VAR_1)
  goto again;
 if (VAR_13)
  goto fail_idr;

 FUNC_8(&VAR_15->owner_list, &VAR_16->obj_list);
 FUNC_10(&VAR_7->struct_mutex);

 VAR_12->offset = ((VAR_10 == 0) ?
        VAR_11->vram_offset : VAR_11->agp_offset) +
     (VAR_17 << VAR_6);
 VAR_12->free = VAR_14;
 VAR_12->size = VAR_12->size << VAR_6;

 return 0;

fail_idr:
 FUNC_3(&VAR_15->mm_node);
fail_alloc:
 FUNC_6(VAR_15);
 FUNC_10(&VAR_7->struct_mutex);

 VAR_12->offset = 0;
 VAR_12->size = 0;
 VAR_12->free = 0;

 FUNC_0("alloc %d, size = %ld, offset = %ld\n", VAR_10, VAR_12->size,
    VAR_12->offset);

 return VAR_13;
}
