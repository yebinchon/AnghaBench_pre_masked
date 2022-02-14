
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_mem_reg {int start; int mem_type; int num_pages; } ;
struct ttm_buffer_object {struct radeon_fence* sync_obj; int bdev; } ;
struct radeon_fence {int dummy; } ;
struct TYPE_3__ {int vram_start; int gtt_start; } ;
struct radeon_device {TYPE_2__* ring; TYPE_1__ mc; } ;
struct TYPE_4__ {int ready; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (struct radeon_device*,int,int,int,struct radeon_fence**) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_fence**) ;
 struct radeon_device* FUNC_5 (int ) ;
 int FUNC_6 (struct ttm_buffer_object*,void*,int,int,struct ttm_mem_reg*) ;

__attribute__((used)) static int FUNC_7(struct ttm_buffer_object *VAR_4,
   bool VAR_5, bool VAR_6,
   struct ttm_mem_reg *VAR_7,
   struct ttm_mem_reg *VAR_8)
{
 struct radeon_device *VAR_9;
 uint64_t VAR_10, VAR_11;
 struct radeon_fence *VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = FUNC_5(VAR_4->bdev);
 VAR_14 = FUNC_3(VAR_9);
 VAR_10 = VAR_8->start << VAR_1;
 VAR_11 = VAR_7->start << VAR_1;

 switch (VAR_8->mem_type) {
 case 128:
  VAR_10 += VAR_9->mc.vram_start;
  break;
 case 129:
  VAR_10 += VAR_9->mc.gtt_start;
  break;
 default:
  FUNC_1("Unknown placement %d\n", VAR_8->mem_type);
  return -VAR_0;
 }
 switch (VAR_7->mem_type) {
 case 128:
  VAR_11 += VAR_9->mc.vram_start;
  break;
 case 129:
  VAR_11 += VAR_9->mc.gtt_start;
  break;
 default:
  FUNC_1("Unknown placement %d\n", VAR_8->mem_type);
  return -VAR_0;
 }
 if (!VAR_9->ring[VAR_14].ready) {
  FUNC_1("Trying to move memory with ring turned off.\n");
  return -VAR_0;
 }

 FUNC_0((VAR_2 % VAR_3) != 0);


 VAR_12 = VAR_4->sync_obj;
 VAR_13 = FUNC_2(VAR_9, VAR_10, VAR_11,
   VAR_7->num_pages * (VAR_2 / VAR_3),
   &VAR_12);

 VAR_13 = FUNC_6(VAR_4, (void *)VAR_12,
          VAR_5, VAR_6, VAR_7);
 FUNC_4(&VAR_12);
 return VAR_13;
}
