
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {unsigned int flags; } ;


 int VAR_0 ;
 struct s3c2410_dma_chan* FUNC_0 (unsigned int) ;

int FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{
 struct s3c2410_dma_chan *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_3->flags = VAR_2;
 return 0;
}
