
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_reg {scalar_t__ mem_type; } ;
struct ttm_buffer_object {int * ttm; int bdev; struct ttm_mem_reg mem; } ;
struct radeon_device {TYPE_3__* asic; TYPE_1__* ring; } ;
struct TYPE_5__ {int * copy; } ;
struct TYPE_6__ {TYPE_2__ copy; } ;
struct TYPE_4__ {int ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (struct radeon_device*) ;
 struct radeon_device* FUNC_1 (int ) ;
 int FUNC_2 (struct ttm_buffer_object*,int,int,struct ttm_mem_reg*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int,int,struct ttm_mem_reg*) ;
 int FUNC_5 (struct ttm_buffer_object*,int,int,int,struct ttm_mem_reg*) ;
 int FUNC_6 (struct ttm_buffer_object*,int,int,struct ttm_mem_reg*) ;

__attribute__((used)) static int FUNC_7(struct ttm_buffer_object *VAR_3,
   bool VAR_4, bool VAR_5,
   bool VAR_6,
   struct ttm_mem_reg *VAR_7)
{
 struct radeon_device *VAR_8;
 struct ttm_mem_reg *VAR_9 = &VAR_3->mem;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_3->bdev);
 if (VAR_9->mem_type == VAR_0 && VAR_3->ttm == ((void*)0)) {
  FUNC_3(VAR_3, VAR_7);
  return 0;
 }
 if ((VAR_9->mem_type == VAR_1 &&
      VAR_7->mem_type == VAR_0) ||
     (VAR_9->mem_type == VAR_0 &&
      VAR_7->mem_type == VAR_1)) {

  FUNC_3(VAR_3, VAR_7);
  return 0;
 }
 if (!VAR_8->ring[FUNC_0(VAR_8)].ready ||
     VAR_8->asic->copy.copy == ((void*)0)) {

  goto memcpy;
 }

 if (VAR_9->mem_type == VAR_2 &&
     VAR_7->mem_type == VAR_0) {
  VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7);
 } else if (VAR_9->mem_type == VAR_0 &&
     VAR_7->mem_type == VAR_2) {
  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7);
 } else {
  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7, VAR_9);
 }

 if (VAR_10) {
memcpy:
  VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_6, VAR_7);
 }
 return VAR_10;
}
