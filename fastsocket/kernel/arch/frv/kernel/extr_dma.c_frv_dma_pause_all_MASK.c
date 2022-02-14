
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
 int VAR_7 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ,unsigned long) ;
 int FUNC_2 (int) ;
 struct frv_dma_channel* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 struct frv_dma_channel *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14;

 FUNC_3(&VAR_9);

 for (VAR_14 = VAR_7 - 1; VAR_14 >= 0; VAR_14--) {
  VAR_10 = &VAR_8[VAR_14];

  if (!(VAR_10->flags & VAR_5))
   continue;

  VAR_11 = VAR_10->ioaddr;
  VAR_13 = FUNC_0(VAR_11, VAR_0);
  if (VAR_13 & VAR_2) {
   VAR_13 &= ~VAR_2;
   FUNC_1(VAR_11, VAR_0, VAR_13);

   do {
    VAR_12 = FUNC_0(VAR_11, VAR_1);
   } while (VAR_12 & VAR_3);

   if (VAR_12 & VAR_4)
    VAR_10->flags |= VAR_6;
   FUNC_2(VAR_14);
  }
 }

}
