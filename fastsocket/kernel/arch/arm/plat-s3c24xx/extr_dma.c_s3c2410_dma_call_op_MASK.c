
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int (* op_fn ) (struct s3c2410_dma_chan*,int) ;} ;
typedef enum s3c2410_chan_op { ____Placeholder_s3c2410_chan_op } s3c2410_chan_op ;


 int FUNC_0 (struct s3c2410_dma_chan*,int) ;

__attribute__((used)) static void
FUNC_1(struct s3c2410_dma_chan *VAR_0, enum s3c2410_chan_op VAR_1)
{
 if (VAR_0->op_fn != ((void*)0)) {
  (VAR_0->op_fn)(VAR_0, VAR_1);
 }
}
