
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frv_dma_channel {int flags; unsigned long ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ,unsigned long) ;
 struct frv_dma_channel* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 struct frv_dma_channel *VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 for (VAR_13 = VAR_6 - 1; VAR_13 >= 0; VAR_13--) {
  VAR_9 = &VAR_7[VAR_13];

  if (!(VAR_9->flags & VAR_5))
   continue;

  VAR_10 = VAR_9->ioaddr;
  VAR_11 = FUNC_0(VAR_10, VAR_1);
  VAR_11 &= ~(VAR_3 | VAR_4);
  FUNC_1(VAR_10, VAR_1, VAR_11);

  VAR_12 = FUNC_0(VAR_10, VAR_0);
  VAR_12 |= VAR_2;
  FUNC_1(VAR_10, VAR_0, VAR_12);

  VAR_9->flags &= ~VAR_5;
  FUNC_2(VAR_13);
 }

 FUNC_3(&VAR_8);

}
