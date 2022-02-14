
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_cli {int dummy; } ;
struct TYPE_7__ {int num_pages; } ;
struct TYPE_10__ {TYPE_3__* bdev; TYPE_1__ mem; } ;
struct TYPE_11__ {int virtual; } ;
struct nouveau_bo {int validate_mapped; TYPE_4__ bo; TYPE_6__ kmap; } ;
struct drm_nouveau_gem_pushbuf_reloc {size_t bo_index; size_t reloc_bo_index; int reloc_bo_offset; int flags; int data; int tor; int vor; } ;
struct TYPE_8__ {int offset; scalar_t__ domain; scalar_t__ valid; } ;
struct drm_nouveau_gem_pushbuf_bo {TYPE_2__ presumed; scalar_t__ user_priv; } ;
struct drm_nouveau_gem_pushbuf {unsigned int nr_relocs; size_t nr_buffers; int relocs; } ;
struct TYPE_9__ {int fence_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_nouveau_gem_pushbuf_reloc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nouveau_cli*,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (struct drm_nouveau_gem_pushbuf_reloc*) ;
 int FUNC_3 (struct drm_nouveau_gem_pushbuf_reloc*) ;
 int FUNC_4 (struct nouveau_bo*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*,int ,int,TYPE_6__*) ;
 int FUNC_8 (TYPE_4__*,int,int,int) ;
 struct drm_nouveau_gem_pushbuf_reloc* FUNC_9 (int ,unsigned int,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_cli *VAR_6,
    struct drm_nouveau_gem_pushbuf *VAR_7,
    struct drm_nouveau_gem_pushbuf_bo *VAR_8)
{
 struct drm_nouveau_gem_pushbuf_reloc *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 unsigned VAR_11;

 VAR_9 = FUNC_9(VAR_7->relocs, VAR_7->nr_relocs, sizeof(*VAR_9));
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_7->nr_relocs; VAR_11++) {
  struct drm_nouveau_gem_pushbuf_reloc *VAR_12 = &VAR_9[VAR_11];
  struct drm_nouveau_gem_pushbuf_bo *VAR_13;
  struct nouveau_bo *VAR_14;
  uint32_t VAR_15;

  if (FUNC_10(VAR_12->bo_index > VAR_7->nr_buffers)) {
   FUNC_1(VAR_6, "reloc bo index invalid\n");
   VAR_10 = -VAR_0;
   break;
  }

  VAR_13 = &VAR_8[VAR_12->bo_index];
  if (VAR_13->presumed.valid)
   continue;

  if (FUNC_10(VAR_12->reloc_bo_index > VAR_7->nr_buffers)) {
   FUNC_1(VAR_6, "reloc container bo index invalid\n");
   VAR_10 = -VAR_0;
   break;
  }
  VAR_14 = (void *)(unsigned long)VAR_8[VAR_12->reloc_bo_index].user_priv;

  if (FUNC_10(VAR_12->reloc_bo_offset + 4 >
        VAR_14->bo.mem.num_pages << VAR_5)) {
   FUNC_1(VAR_6, "reloc outside of bo\n");
   VAR_10 = -VAR_0;
   break;
  }

  if (!VAR_14->kmap.virtual) {
   VAR_10 = FUNC_7(&VAR_14->bo, 0, VAR_14->bo.mem.num_pages,
       &VAR_14->kmap);
   if (VAR_10) {
    FUNC_1(VAR_6, "failed kmap for reloc\n");
    break;
   }
   VAR_14->validate_mapped = 1;
  }

  if (VAR_12->flags & VAR_3)
   VAR_15 = VAR_13->presumed.offset + VAR_12->data;
  else
  if (VAR_12->flags & VAR_2)
   VAR_15 = (VAR_13->presumed.offset + VAR_12->data) >> 32;
  else
   VAR_15 = VAR_12->data;

  if (VAR_12->flags & VAR_4) {
   if (VAR_13->presumed.domain == VAR_1)
    VAR_15 |= VAR_12->tor;
   else
    VAR_15 |= VAR_12->vor;
  }

  FUNC_5(&VAR_14->bo.bdev->fence_lock);
  VAR_10 = FUNC_8(&VAR_14->bo, 0, 0, 0);
  FUNC_6(&VAR_14->bo.bdev->fence_lock);
  if (VAR_10) {
   FUNC_1(VAR_6, "reloc wait_idle failed: %d\n", VAR_10);
   break;
  }

  FUNC_4(VAR_14, VAR_12->reloc_bo_offset >> 2, VAR_15);
 }

 FUNC_3(VAR_9);
 return VAR_10;
}
