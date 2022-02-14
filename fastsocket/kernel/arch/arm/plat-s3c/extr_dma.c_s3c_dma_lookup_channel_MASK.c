
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int dummy; } ;


 unsigned int VAR_0 ;
 struct s3c2410_dma_chan* VAR_1 ;
 struct s3c2410_dma_chan** VAR_2 ;

struct s3c2410_dma_chan *FUNC_0(unsigned int VAR_3)
{
 if (VAR_3 & VAR_0)
  return &VAR_1[VAR_3 & ~VAR_0];
 else
  return VAR_2[VAR_3];
}
