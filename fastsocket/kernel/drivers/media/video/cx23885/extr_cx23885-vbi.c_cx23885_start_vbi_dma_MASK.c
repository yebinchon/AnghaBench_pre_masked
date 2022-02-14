
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx23885_dmaqueue {int count; } ;
struct cx23885_dev {int * sram_channels; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int width; } ;
struct cx23885_buffer {TYPE_2__ risc; TYPE_1__ vb; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx23885_dev*,int) ;
 int FUNC_1 (struct cx23885_dev*,int *,int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct cx23885_dev *VAR_4,
    struct cx23885_dmaqueue *VAR_5,
    struct cx23885_buffer *VAR_6)
{

 FUNC_1(VAR_4, &VAR_4->sram_channels[VAR_1],
    VAR_6->vb.width, VAR_6->risc.dma);


 VAR_5->count = 1;


 FUNC_0(VAR_4, 0x01);
 FUNC_2(VAR_3, 0x000022);


 FUNC_2(VAR_0, (1<<5));
 FUNC_2(VAR_2, 0x00000022);

 return 0;
}
