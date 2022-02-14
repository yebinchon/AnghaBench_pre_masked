
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int chcr; } ;
typedef int SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,struct dma_chan*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(SH2 *VAR_3, struct dma_chan *VAR_4)
{
  VAR_4->chcr |= VAR_1;

  FUNC_2(VAR_3, VAR_2, FUNC_0());
  if (VAR_4->chcr & VAR_0)
    FUNC_1(VAR_3, VAR_4);
}
