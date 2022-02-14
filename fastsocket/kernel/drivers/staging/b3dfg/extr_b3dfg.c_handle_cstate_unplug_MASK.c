
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b3dfg_dev {int cur_dma_frame_idx; int buffer_lock; scalar_t__ cur_dma_frame_addr; int frame_size; int pdev; scalar_t__ triplet_ready; scalar_t__ transmission_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b3dfg_dev*,int ,int ) ;
 int FUNC_1 (struct b3dfg_dev*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct b3dfg_dev *VAR_2)
{

 FUNC_0(VAR_2, VAR_0, 0);


 FUNC_3(&VAR_2->buffer_lock);
 VAR_2->transmission_enabled = 0;

 VAR_2->cur_dma_frame_idx = -1;
 VAR_2->triplet_ready = 0;
 if (VAR_2->cur_dma_frame_addr) {
  FUNC_2(VAR_2->pdev, VAR_2->cur_dma_frame_addr,
     VAR_2->frame_size, VAR_1);
  VAR_2->cur_dma_frame_addr = 0;
 }
 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->buffer_lock);
}
