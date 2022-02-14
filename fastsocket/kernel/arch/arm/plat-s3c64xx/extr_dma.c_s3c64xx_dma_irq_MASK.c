
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c64xx_dmac {scalar_t__ regs; struct s3c2410_dma_chan* channels; } ;
struct s3c64xx_dma_buff {struct s3c64xx_dma_buff* next; } ;
struct s3c2410_dma_chan {int flags; struct s3c64xx_dma_buff* next; struct s3c64xx_dma_buff* end; struct s3c64xx_dma_buff* curr; } ;
typedef int irqreturn_t ;
typedef enum s3c2410_dma_buffresult { ____Placeholder_s3c2410_dma_buffresult } s3c2410_dma_buffresult ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct s3c2410_dma_chan*,struct s3c64xx_dma_buff*,int) ;
 int FUNC_3 (struct s3c64xx_dma_buff*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct s3c64xx_dmac *VAR_10 = VAR_9;
 struct s3c2410_dma_chan *VAR_11;
 enum s3c2410_dma_buffresult VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_13 = FUNC_1(VAR_10->regs + VAR_4);
 VAR_14 = FUNC_1(VAR_10->regs + VAR_2);

 for (VAR_16 = 0, VAR_15 = 1; VAR_16 < 8; VAR_16++, VAR_15 <<= 1) {
  struct s3c64xx_dma_buff *VAR_17;

  if (!(VAR_14 & VAR_15) && !(VAR_13 & VAR_15))
   continue;

  VAR_11 = VAR_10->channels + VAR_16;
  VAR_12 = VAR_6;

  if (VAR_13 & VAR_15) {
   FUNC_4(VAR_15, VAR_10->regs + VAR_3);
   VAR_12 = VAR_7;
  }

  if (VAR_14 & VAR_15)
   FUNC_4(VAR_15, VAR_10->regs + VAR_1);






  VAR_17 = VAR_11->curr;
  while (VAR_17 && VAR_17 != VAR_11->next
    && VAR_17->next != VAR_11->next)
   VAR_17 = VAR_17->next;

  if (!VAR_17)
   FUNC_0();

  if (VAR_17 == VAR_11->next)
   VAR_17 = VAR_11->end;

  FUNC_2(VAR_11, VAR_17, VAR_12);


  if (!(VAR_11->flags & VAR_5)) {
   VAR_11->curr = VAR_17->next;
   FUNC_3(VAR_17);
  }


  VAR_17 = VAR_11->next;
  if (VAR_11->next == VAR_11->end) {
   VAR_11->next = VAR_11->curr;
   if (!(VAR_11->flags & VAR_5))
    VAR_11->end = ((void*)0);
  } else {
   VAR_11->next = VAR_17->next;
  }
 }

 return VAR_0;
}
