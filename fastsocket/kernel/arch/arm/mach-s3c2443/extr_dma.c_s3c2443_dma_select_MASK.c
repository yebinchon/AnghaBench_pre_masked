
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_dma_map {int* channels; } ;
struct s3c2410_dma_chan {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s3c2410_dma_chan *VAR_2,
          struct s3c24xx_dma_map *VAR_3)
{
 FUNC_0(VAR_3->channels[0] | VAR_0,
        VAR_2->regs + VAR_1);
}
