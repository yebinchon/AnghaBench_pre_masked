
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c64xx_dma_buff {int lli; int lli_dma; struct s3c64xx_dma_buff* next; } ;
struct s3c2410_dma_chan {int number; struct s3c64xx_dma_buff* end; struct s3c64xx_dma_buff* next; int curr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,struct s3c64xx_dma_buff*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct s3c2410_dma_chan *VAR_1)
{
 struct s3c64xx_dma_buff *VAR_2;
 struct s3c64xx_dma_buff *VAR_3;

 FUNC_0("DMA%d: buffs next %p, curr %p, end %p\n",
   VAR_1->number, VAR_1->next, VAR_1->curr, VAR_1->end);

 VAR_2 = VAR_1->next;
 VAR_3 = VAR_1->end;

 if (VAR_0) {
  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
   FUNC_0("DMA%d: %08x ",
     VAR_1->number, VAR_2->lli_dma);
   FUNC_1(VAR_2->lli);
  }
 }
}
