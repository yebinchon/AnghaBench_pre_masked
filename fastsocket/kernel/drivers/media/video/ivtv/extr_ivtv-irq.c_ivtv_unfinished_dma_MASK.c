
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int cur_dma_stream; int dma_waitq; int i_flags; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;

void FUNC_6(unsigned long VAR_3)
{
 struct ivtv *VAR_4 = (struct ivtv *)VAR_3;

 if (!FUNC_3(VAR_0, &VAR_4->i_flags))
  return;
 FUNC_0("DMA TIMEOUT %08x %d\n", FUNC_2(VAR_2), VAR_4->cur_dma_stream);

 FUNC_5(FUNC_2(VAR_2) & 3, VAR_2);
 FUNC_1(VAR_1, &VAR_4->i_flags);
 FUNC_1(VAR_0, &VAR_4->i_flags);
 VAR_4->cur_dma_stream = -1;
 FUNC_4(&VAR_4->dma_waitq);
}
