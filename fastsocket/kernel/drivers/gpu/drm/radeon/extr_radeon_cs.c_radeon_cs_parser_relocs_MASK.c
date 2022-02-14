
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct radeon_cs_reloc {int dummy; } ;
struct radeon_cs_parser {int chunk_relocs_idx; int nrelocs; int validated; TYPE_3__* relocs; TYPE_3__** relocs_ptr; int filp; scalar_t__ dma_reloc_idx; struct radeon_cs_chunk* chunks; TYPE_1__* rdev; } ;
struct radeon_cs_chunk {int length_dw; int * kdata; } ;
struct drm_radeon_cs_reloc {scalar_t__ handle; int flags; int read_domains; int write_domain; } ;
struct drm_device {int dummy; } ;
struct TYPE_10__ {int tbo; } ;
struct TYPE_7__ {int * bo; } ;
struct TYPE_9__ {TYPE_2__ tv; int rdomain; int wdomain; TYPE_5__* bo; } ;
struct TYPE_8__ {scalar_t__ handle; TYPE_4__ lobj; int flags; TYPE_5__* robj; int * gobj; } ;
struct TYPE_6__ {struct drm_device* ddev; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct drm_device*,int ,scalar_t__) ;
 TYPE_5__* FUNC_2 (int *) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct radeon_cs_parser *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->rdev->ddev;
 struct radeon_cs_chunk *VAR_5;
 unsigned VAR_6, VAR_7;
 bool VAR_8;

 if (VAR_3->chunk_relocs_idx == -1) {
  return 0;
 }
 VAR_5 = &VAR_3->chunks[VAR_3->chunk_relocs_idx];
 VAR_3->dma_reloc_idx = 0;

 VAR_3->nrelocs = VAR_5->length_dw / 4;
 VAR_3->relocs_ptr = FUNC_3(VAR_3->nrelocs, sizeof(void *), VAR_2);
 if (VAR_3->relocs_ptr == ((void*)0)) {
  return -VAR_1;
 }
 VAR_3->relocs = FUNC_3(VAR_3->nrelocs, sizeof(struct radeon_cs_reloc), VAR_2);
 if (VAR_3->relocs == ((void*)0)) {
  return -VAR_1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_3->nrelocs; VAR_6++) {
  struct drm_radeon_cs_reloc *VAR_9;

  VAR_8 = 0;
  VAR_9 = (struct drm_radeon_cs_reloc *)&VAR_5->kdata[VAR_6*4];
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   if (VAR_9->handle == VAR_3->relocs[VAR_7].handle) {
    VAR_3->relocs_ptr[VAR_6] = &VAR_3->relocs[VAR_7];
    VAR_8 = 1;
    break;
   }
  }
  if (!VAR_8) {
   VAR_3->relocs[VAR_6].gobj = FUNC_1(VAR_4,
          VAR_3->filp,
          VAR_9->handle);
   if (VAR_3->relocs[VAR_6].gobj == ((void*)0)) {
    FUNC_0("gem object lookup failed 0x%x\n",
       VAR_9->handle);
    return -VAR_0;
   }
   VAR_3->relocs_ptr[VAR_6] = &VAR_3->relocs[VAR_6];
   VAR_3->relocs[VAR_6].robj = FUNC_2(VAR_3->relocs[VAR_6].gobj);
   VAR_3->relocs[VAR_6].lobj.bo = VAR_3->relocs[VAR_6].robj;
   VAR_3->relocs[VAR_6].lobj.wdomain = VAR_9->write_domain;
   VAR_3->relocs[VAR_6].lobj.rdomain = VAR_9->read_domains;
   VAR_3->relocs[VAR_6].lobj.tv.bo = &VAR_3->relocs[VAR_6].robj->tbo;
   VAR_3->relocs[VAR_6].handle = VAR_9->handle;
   VAR_3->relocs[VAR_6].flags = VAR_9->flags;
   FUNC_4(&VAR_3->relocs[VAR_6].lobj,
        &VAR_3->validated);

  } else
   VAR_3->relocs[VAR_6].handle = 0;
 }
 return FUNC_5(&VAR_3->validated);
}
