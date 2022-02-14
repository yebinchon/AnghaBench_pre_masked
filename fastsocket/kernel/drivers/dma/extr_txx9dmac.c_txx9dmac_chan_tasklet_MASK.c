
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct txx9dmac_chan {int irq; int lock; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct txx9dmac_chan*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct txx9dmac_chan*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct txx9dmac_chan *VAR_7;

 VAR_7 = (struct txx9dmac_chan *)VAR_4;
 VAR_6 = FUNC_1(VAR_7, VAR_0);
 FUNC_2(FUNC_0(&VAR_7->chan), "tasklet: status=%x\n", VAR_6);

 FUNC_4(&VAR_7->lock);
 if (VAR_6 & (VAR_1 | VAR_2 |
     VAR_3))
  FUNC_6(VAR_7);
 FUNC_5(&VAR_7->lock);
 VAR_5 = VAR_7->irq;

 FUNC_3(VAR_5);
}
