
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kvirt; } ;
struct video_card {int n_frames; int spinlock; TYPE_4__ packet_buf; struct frame** frames; } ;
struct packet {int dummy; } ;
struct frame {int descriptor_pool_dma; int frame_num; void** frame_end_branch; struct DMA_descriptor_block* descriptor_pool; } ;
struct TYPE_7__ {void** q; } ;
struct TYPE_5__ {TYPE_3__ il; } ;
struct TYPE_6__ {TYPE_1__ in; } ;
struct DMA_descriptor_block {TYPE_2__ u; } ;
typedef int dma_addr_t ;
typedef void* __le32 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,unsigned long) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct video_card *VAR_1)
{
 struct DMA_descriptor_block *VAR_2 = ((void*)0);
 dma_addr_t VAR_3 = 0;
 struct packet *VAR_4 = ((void*)0);
 dma_addr_t VAR_5 = 0;
 __le32 *VAR_6 = ((void*)0);
 unsigned long VAR_7;
 int VAR_8 = 0;
 struct frame *VAR_9 = ((void*)0);
 int VAR_10, VAR_11;

 FUNC_3(&VAR_1->spinlock, VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_1->n_frames; VAR_11++) {


  if (VAR_11 > 0 && VAR_9 != ((void*)0) && VAR_9->frame_end_branch != ((void*)0))
   *(VAR_9->frame_end_branch) = FUNC_0(VAR_1->frames[VAR_11]->descriptor_pool_dma | 1);

  VAR_9 = VAR_1->frames[VAR_11];

  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {

   VAR_2 = &(VAR_9->descriptor_pool[VAR_10]);
   VAR_3 = ((unsigned long) VAR_2 - (unsigned long) VAR_9->descriptor_pool) + VAR_9->descriptor_pool_dma;

   VAR_4 = ((struct packet*)VAR_1->packet_buf.kvirt) + VAR_9->frame_num * VAR_0 + VAR_10;
   VAR_5 = FUNC_1( &VAR_1->packet_buf,
            ((unsigned long) VAR_4 - (unsigned long) VAR_1->packet_buf.kvirt) );


   VAR_8 = ((VAR_10 % (VAR_0/2)) == 0 || VAR_10 == (VAR_0-1));
   FUNC_2( &(VAR_2->u.in.il), VAR_8, 512, VAR_5);


   VAR_6 = VAR_9->frame_end_branch;

   if (VAR_6 != ((void*)0))
    *(VAR_6) = FUNC_0(VAR_3 | 1);

   VAR_9->frame_end_branch = &(VAR_2->u.in.il.q[2]);
  }

 }

 FUNC_4(&VAR_1->spinlock, VAR_7);

}
