
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b3dfg_dev {unsigned int frame_size; unsigned int cur_dma_frame_addr; int cur_dma_frame_idx; int pdev; } ;
struct b3dfg_buffer {unsigned char** frame; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b3dfg_dev*,int ,int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (int ,unsigned char*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct b3dfg_dev *VAR_5,
 struct b3dfg_buffer *VAR_6, int VAR_7)
{
 unsigned char *VAR_8;
 dma_addr_t VAR_9;
 unsigned int VAR_10 = VAR_5->frame_size;

 VAR_8 = VAR_6->frame[VAR_7];
 VAR_9 = FUNC_3(VAR_5->pdev, VAR_8,
       VAR_10, VAR_4);
 if (FUNC_2(VAR_5->pdev, VAR_9))
  return -VAR_3;

 VAR_5->cur_dma_frame_addr = VAR_9;
 VAR_5->cur_dma_frame_idx = VAR_7;

 FUNC_0(VAR_5, VAR_0,
     FUNC_1(VAR_9));
 FUNC_0(VAR_5, VAR_2,
     FUNC_1(VAR_10 >> 2));
 FUNC_0(VAR_5, VAR_1, 0xf);

 return 0;
}
