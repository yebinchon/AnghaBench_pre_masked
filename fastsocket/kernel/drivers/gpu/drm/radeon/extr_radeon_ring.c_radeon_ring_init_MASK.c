
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {unsigned int ring_size; unsigned int rptr_offs; unsigned int rptr_reg; unsigned int wptr_reg; int ptr_reg_shift; int ptr_reg_mask; int nop; int ptr_mask; int ring_free_dw; int idx; int * next_rptr_cpu_addr; scalar_t__ next_rptr_gpu_addr; int * ring_obj; int ring; int gpu_addr; } ;
struct TYPE_2__ {int * wb; scalar_t__ gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct radeon_device*,unsigned int,int ,int,int ,int *,int **) ;
 int FUNC_3 (int *,void**) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_8 (struct radeon_ring*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct radeon_device *VAR_3, struct radeon_ring *VAR_4, unsigned VAR_5,
       unsigned VAR_6, unsigned VAR_7, unsigned VAR_8,
       u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 int VAR_12;

 VAR_4->ring_size = VAR_5;
 VAR_4->rptr_offs = VAR_6;
 VAR_4->rptr_reg = VAR_7;
 VAR_4->wptr_reg = VAR_8;
 VAR_4->ptr_reg_shift = VAR_9;
 VAR_4->ptr_reg_mask = VAR_10;
 VAR_4->nop = VAR_11;

 if (VAR_4->ring_obj == ((void*)0)) {
  VAR_12 = FUNC_2(VAR_3, VAR_4->ring_size, VAR_0, 1,
         VAR_1,
         ((void*)0), &VAR_4->ring_obj);
  if (VAR_12) {
   FUNC_1(VAR_3->dev, "(%d) ring create failed\n", VAR_12);
   return VAR_12;
  }
  VAR_12 = FUNC_5(VAR_4->ring_obj, 0);
  if (FUNC_9(VAR_12 != 0))
   return VAR_12;
  VAR_12 = FUNC_4(VAR_4->ring_obj, VAR_1,
     &VAR_4->gpu_addr);
  if (VAR_12) {
   FUNC_6(VAR_4->ring_obj);
   FUNC_1(VAR_3->dev, "(%d) ring pin failed\n", VAR_12);
   return VAR_12;
  }
  VAR_12 = FUNC_3(VAR_4->ring_obj,
           (void **)&VAR_4->ring);
  FUNC_6(VAR_4->ring_obj);
  if (VAR_12) {
   FUNC_1(VAR_3->dev, "(%d) ring map failed\n", VAR_12);
   return VAR_12;
  }
 }
 VAR_4->ptr_mask = (VAR_4->ring_size / 4) - 1;
 VAR_4->ring_free_dw = VAR_4->ring_size / 4;
 if (VAR_3->wb.enabled) {
  u32 VAR_13 = VAR_2 + (VAR_4->idx * 4);
  VAR_4->next_rptr_gpu_addr = VAR_3->wb.gpu_addr + VAR_13;
  VAR_4->next_rptr_cpu_addr = &VAR_3->wb.wb[VAR_13/4];
 }
 if (FUNC_7(VAR_3, VAR_4)) {
  FUNC_0("Failed to register debugfs file for rings !\n");
 }
 FUNC_8(VAR_4);
 return 0;
}
