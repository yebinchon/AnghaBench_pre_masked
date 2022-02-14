
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int number; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct s3c2410_dma_chan*,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct s3c2410_dma_chan *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4 = 0x10000;

 while (VAR_4-- > 0) {
  VAR_3 = FUNC_0(VAR_2, VAR_1);

  if (!(VAR_3 & VAR_0))
   return;
 }

 FUNC_1("dma%d: failed to stop?\n", VAR_2->number);
}
