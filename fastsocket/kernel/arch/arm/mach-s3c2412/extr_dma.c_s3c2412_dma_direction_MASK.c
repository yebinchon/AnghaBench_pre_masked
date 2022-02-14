
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_dma_map {unsigned long* channels_rx; unsigned long* channels; } ;
struct s3c2410_dma_chan {scalar_t__ regs; } ;
typedef enum s3c2410_dmasrc { ____Placeholder_s3c2410_dmasrc } s3c2410_dmasrc ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s3c2410_dma_chan *VAR_4,
      struct s3c24xx_dma_map *VAR_5,
      enum s3c2410_dmasrc VAR_6)
{
 unsigned long VAR_7;

 if (VAR_6 == VAR_1)
  VAR_7 = VAR_5->channels_rx[0];
 else
  VAR_7 = VAR_5->channels[0];

 VAR_7 &= ~VAR_0;
 VAR_7 |= VAR_2;

 FUNC_0(VAR_7, VAR_4->regs + VAR_3);
}
