
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c64xx_dma_buff {int pw; } ;
struct s3c2410_dma_chan {int (* callback_fn ) (struct s3c2410_dma_chan*,int ,int ,int) ;} ;
typedef enum s3c2410_dma_buffresult { ____Placeholder_s3c2410_dma_buffresult } s3c2410_dma_buffresult ;


 int FUNC_0 (struct s3c2410_dma_chan*,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct s3c2410_dma_chan *VAR_0,
      struct s3c64xx_dma_buff *VAR_1,
      enum s3c2410_dma_buffresult VAR_2)
{
 if (VAR_0->callback_fn != ((void*)0))
  (VAR_0->callback_fn)(VAR_0, VAR_1->pw, 0, VAR_2);
}
