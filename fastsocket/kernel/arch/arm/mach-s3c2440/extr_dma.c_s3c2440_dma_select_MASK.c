
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_dma_map {int* channels; } ;
struct s3c2410_dma_chan {int dcon; size_t number; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct s3c2410_dma_chan *VAR_1,
          struct s3c24xx_dma_map *VAR_2)
{
 VAR_1->dcon = VAR_2->channels[VAR_1->number] & ~VAR_0;
}
