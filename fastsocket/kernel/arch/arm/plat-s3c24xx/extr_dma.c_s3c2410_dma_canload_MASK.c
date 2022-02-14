
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {scalar_t__ load_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct s3c2410_dma_chan *VAR_2)
{
 if (VAR_2->load_state == VAR_1 ||
     VAR_2->load_state == VAR_0)
  return 1;

 return 0;
}
