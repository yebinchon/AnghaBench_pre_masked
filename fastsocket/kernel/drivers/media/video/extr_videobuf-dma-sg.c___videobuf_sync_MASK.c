
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {int dev; } ;
struct TYPE_2__ {int direction; int sglen; int sglist; int magic; } ;
struct videobuf_dma_sg_memory {TYPE_1__ dma; int magic; } ;
struct videobuf_buffer {struct videobuf_dma_sg_memory* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct videobuf_queue *VAR_2,
      struct videobuf_buffer *VAR_3)
{
 struct videobuf_dma_sg_memory *VAR_4 = VAR_3->priv;
 FUNC_0(!VAR_4 || !VAR_4->dma.sglen);

 FUNC_1(VAR_4->magic, VAR_1);
 FUNC_1(VAR_4->dma.magic, VAR_0);

 FUNC_2(VAR_2->dev, VAR_4->dma.sglist,
       VAR_4->dma.sglen, VAR_4->dma.direction);

 return 0;
}
