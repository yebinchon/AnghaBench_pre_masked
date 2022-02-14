
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int dummy; } ;
typedef enum s3c2410_chan_op { ____Placeholder_s3c2410_chan_op } s3c2410_chan_op ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (struct s3c2410_dma_chan*) ;
 int FUNC_1 (struct s3c2410_dma_chan*) ;
 int FUNC_2 (struct s3c2410_dma_chan*) ;
 int FUNC_3 (struct s3c2410_dma_chan*) ;
 struct s3c2410_dma_chan* FUNC_4 (unsigned int) ;

int
FUNC_5(unsigned int VAR_2, enum s3c2410_chan_op VAR_3)
{
 struct s3c2410_dma_chan *VAR_4 = FUNC_4(VAR_2);

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 switch (VAR_3) {
 case 131:
  return FUNC_2(VAR_4);

 case 129:
  return FUNC_0(VAR_4);

 case 133:
 case 132:
  return -VAR_1;

 case 134:
  return FUNC_1(VAR_4);

 case 130:
  return FUNC_3(VAR_4);

 case 128:
  return 0;

 }

 return -VAR_1;
}
