
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int in_use; } ;


 unsigned int VAR_0 ;
 struct s3c2410_dma_chan* VAR_1 ;
 struct s3c2410_dma_chan** VAR_2 ;

__attribute__((used)) static struct s3c2410_dma_chan *FUNC_0(unsigned int VAR_3)
{
 struct s3c2410_dma_chan *VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_5 = 0;

 if (VAR_3 >= VAR_0)
  VAR_5 = 8;

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_4 = &VAR_1[VAR_5 + VAR_6];
  if (!VAR_4->in_use)
   goto found;
 }

 return ((void*)0);

found:
 VAR_2[VAR_3] = VAR_4;
 return VAR_4;
}
