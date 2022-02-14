
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_mem_reg {int start; scalar_t__ mem_type; } ;
struct radeon_vm {int last_flush; int fence; int * page_directory; } ;
struct radeon_ib {int fence; scalar_t__ length_dw; } ;
struct TYPE_6__ {scalar_t__ vram_base_offset; } ;
struct radeon_device {TYPE_3__ vm_manager; int dev; TYPE_2__* asic; } ;
struct radeon_bo_va {int valid; int flags; int eoffset; int soffset; } ;
struct radeon_bo {int dummy; } ;
struct TYPE_4__ {unsigned int pt_ring_index; } ;
struct TYPE_5__ {TYPE_1__ vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,struct radeon_bo*,struct radeon_vm*) ;
 unsigned int FUNC_1 (struct radeon_bo*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_5 (struct radeon_device*,unsigned int,struct radeon_ib*,int *,unsigned int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ib*,int *) ;
 int FUNC_7 (struct radeon_ib*,int ) ;
 struct radeon_bo_va* FUNC_8 (struct radeon_vm*,struct radeon_bo*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_vm*,struct radeon_ib*,int ,int ) ;
 int FUNC_10 (struct radeon_device*,struct radeon_vm*,struct radeon_ib*,int ,int ,int,int ) ;

int FUNC_11(struct radeon_device *VAR_8,
       struct radeon_vm *VAR_9,
       struct radeon_bo *VAR_10,
       struct ttm_mem_reg *VAR_11)
{
 unsigned VAR_12 = VAR_8->asic->vm.pt_ring_index;
 struct radeon_ib VAR_13;
 struct radeon_bo_va *VAR_14;
 unsigned VAR_15, VAR_16, VAR_17;
 uint64_t VAR_18;
 int VAR_19;


 if (VAR_9->page_directory == ((void*)0))
  return 0;

 VAR_14 = FUNC_8(VAR_9, VAR_10);
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_8->dev, "bo %p not in vm %p\n", VAR_10, VAR_9);
  return -VAR_0;
 }

 if (!VAR_14->soffset) {
  FUNC_0(VAR_8->dev, "bo %p don't has a mapping in vm %p\n",
   VAR_10, VAR_9);
  return -VAR_0;
 }

 if ((VAR_14->valid && VAR_11) || (!VAR_14->valid && VAR_11 == ((void*)0)))
  return 0;

 VAR_14->flags &= ~VAR_5;
 VAR_14->flags &= ~VAR_4;
 if (VAR_11) {
  VAR_18 = VAR_11->start << VAR_2;
  if (VAR_11->mem_type != VAR_6) {
   VAR_14->flags |= VAR_5;
   VAR_14->valid = 1;
  }
  if (VAR_11->mem_type == VAR_7) {
   VAR_14->flags |= VAR_4;
  } else {
   VAR_18 += VAR_8->vm_manager.vram_base_offset;
  }
 } else {
  VAR_18 = 0;
  VAR_14->valid = 0;
 }

 VAR_15 = FUNC_1(VAR_10);


 VAR_16 = (VAR_15 >> VAR_3) + 2;


 VAR_17 = 64;

 if (VAR_3 > 11)

  VAR_17 += (VAR_15 >> 11) * 4;
 else


  VAR_17 += (VAR_15 >> VAR_3) * 4;


 VAR_17 += VAR_15 * 2;


 VAR_17 += (VAR_16 >> 11) * 4;


 VAR_17 += VAR_16 * 2;


 if (VAR_17 > 0xfffff)
  return -VAR_1;

 VAR_19 = FUNC_5(VAR_8, VAR_12, &VAR_13, ((void*)0), VAR_17 * 4);
 VAR_13.length_dw = 0;

 VAR_19 = FUNC_9(VAR_8, VAR_9, &VAR_13, VAR_14->soffset, VAR_14->eoffset);
 if (VAR_19) {
  FUNC_4(VAR_8, &VAR_13);
  return VAR_19;
 }

 FUNC_10(VAR_8, VAR_9, &VAR_13, VAR_14->soffset, VAR_14->eoffset,
         VAR_18, VAR_14->flags);

 FUNC_7(&VAR_13, VAR_9->fence);
 VAR_19 = FUNC_6(VAR_8, &VAR_13, ((void*)0));
 if (VAR_19) {
  FUNC_4(VAR_8, &VAR_13);
  return VAR_19;
 }
 FUNC_3(&VAR_9->fence);
 VAR_9->fence = FUNC_2(VAR_13.fence);
 FUNC_4(VAR_8, &VAR_13);
 FUNC_3(&VAR_9->last_flush);

 return 0;
}
