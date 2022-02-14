
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_dma {int all_chan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct at_dma*,int ) ;
 int FUNC_2 (struct at_dma*,int ,long) ;

__attribute__((used)) static void FUNC_3(struct at_dma *VAR_3)
{
 FUNC_2(VAR_3, VAR_2, 0);


 FUNC_2(VAR_3, VAR_1, -1L);


 while (FUNC_1(VAR_3, VAR_0) & VAR_3->all_chan_mask)
  FUNC_0();
}
