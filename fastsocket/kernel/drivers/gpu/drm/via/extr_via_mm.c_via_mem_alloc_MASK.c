
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long start; } ;
struct via_memblock {TYPE_3__ mm_node; int owner_list; } ;
struct via_file_private {int obj_list; } ;
struct drm_file {struct via_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; scalar_t__ dev_private; } ;
struct TYPE_5__ {scalar_t__ vram_initialized; scalar_t__ agp_initialized; scalar_t__ agp_offset; scalar_t__ vram_offset; int object_idr; int vram_mm; int agp_mm; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_6__ {scalar_t__ type; unsigned long size; int index; scalar_t__ offset; } ;
typedef TYPE_2__ drm_via_mem_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_2 (int *,TYPE_3__*,unsigned long,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,struct via_memblock*,int,int*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct via_memblock*) ;
 struct via_memblock* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct drm_device *VAR_8, void *VAR_9,
    struct drm_file *VAR_10)
{
 drm_via_mem_t *VAR_11 = VAR_9;
 int VAR_12 = 0, VAR_13;
 struct via_memblock *VAR_14;
 drm_via_private_t *VAR_15 = (drm_via_private_t *) VAR_8->dev_private;
 struct via_file_private *VAR_16 = VAR_10->driver_priv;
 unsigned long VAR_17;

 if (VAR_11->type > VAR_4) {
  FUNC_1("Unknown memory type allocation\n");
  return -VAR_1;
 }
 FUNC_9(&VAR_8->struct_mutex);
 if (0 == ((VAR_11->type == VAR_5) ? VAR_15->vram_initialized :
        VAR_15->agp_initialized)) {
  FUNC_1
      ("Attempt to allocate from uninitialized memory manager.\n");
  FUNC_10(&VAR_8->struct_mutex);
  return -VAR_1;
 }

 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_12 = -VAR_2;
  goto fail_alloc;
 }

 VAR_17 = (VAR_11->size + VAR_6) >> VAR_7;
 if (VAR_11->type == VAR_4)
  VAR_12 = FUNC_2(&VAR_15->agp_mm,
         &VAR_14->mm_node,
         VAR_17, 0);
 else
  VAR_12 = FUNC_2(&VAR_15->vram_mm,
         &VAR_14->mm_node,
         VAR_17, 0);
 if (VAR_12)
  goto fail_alloc;

again:
 if (FUNC_5(&VAR_15->object_idr, VAR_3) == 0) {
  VAR_12 = -VAR_2;
  goto fail_idr;
 }

 VAR_12 = FUNC_4(&VAR_15->object_idr, VAR_14, 1, &VAR_13);
 if (VAR_12 == -VAR_0)
  goto again;
 if (VAR_12)
  goto fail_idr;

 FUNC_8(&VAR_14->owner_list, &VAR_16->obj_list);
 FUNC_10(&VAR_8->struct_mutex);

 VAR_11->offset = ((VAR_11->type == VAR_5) ?
        VAR_15->vram_offset : VAR_15->agp_offset) +
     ((VAR_14->mm_node.start) << VAR_7);
 VAR_11->index = VAR_13;

 return 0;

fail_idr:
 FUNC_3(&VAR_14->mm_node);
fail_alloc:
 FUNC_6(VAR_14);
 FUNC_10(&VAR_8->struct_mutex);

 VAR_11->offset = 0;
 VAR_11->size = 0;
 VAR_11->index = 0;
 FUNC_0("Video memory allocation failed\n");

 return VAR_12;
}
