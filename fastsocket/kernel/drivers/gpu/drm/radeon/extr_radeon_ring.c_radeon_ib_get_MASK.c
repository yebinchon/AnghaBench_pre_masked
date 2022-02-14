
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_vm {int dummy; } ;
struct radeon_ib {int ring; int is_const_ib; int ** sync_to; TYPE_1__* sa_bo; scalar_t__ gpu_addr; struct radeon_vm* vm; int ptr; int * fence; int semaphore; } ;
struct radeon_device {int dev; int ring_tmp_bo; } ;
struct TYPE_4__ {scalar_t__ soffset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct radeon_device*,int *,TYPE_1__**,unsigned int,int,int) ;
 int FUNC_4 (struct radeon_device*,int *) ;

int FUNC_5(struct radeon_device *VAR_2, int VAR_3,
    struct radeon_ib *VAR_4, struct radeon_vm *VAR_5,
    unsigned VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_2, &VAR_2->ring_tmp_bo, &VAR_4->sa_bo, VAR_6, 256, 1);
 if (VAR_8) {
  FUNC_0(VAR_2->dev, "failed to get a new IB (%d)\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_2, &VAR_4->semaphore);
 if (VAR_8) {
  return VAR_8;
 }

 VAR_4->ring = VAR_3;
 VAR_4->fence = ((void*)0);
 VAR_4->ptr = FUNC_1(VAR_4->sa_bo);
 VAR_4->vm = VAR_5;
 if (VAR_5) {



  VAR_4->gpu_addr = VAR_4->sa_bo->soffset + VAR_1;
 } else {
  VAR_4->gpu_addr = FUNC_2(VAR_4->sa_bo);
 }
 VAR_4->is_const_ib = 0;
 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
  VAR_4->sync_to[VAR_7] = ((void*)0);

 return 0;
}
