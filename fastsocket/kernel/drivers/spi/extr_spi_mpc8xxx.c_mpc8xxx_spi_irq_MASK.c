
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mpc8xxx_spi {int (* get_tx ) (struct mpc8xxx_spi*) ;TYPE_1__* base; int done; scalar_t__ count; int (* get_rx ) (int,struct mpc8xxx_spi*) ;scalar_t__ rx; } ;
typedef int s32 ;
typedef int irqreturn_t ;
struct TYPE_2__ {int event; int transmit; int receive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,struct mpc8xxx_spi*) ;
 int FUNC_5 (struct mpc8xxx_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_6(s32 VAR_4, void *VAR_5)
{
 struct mpc8xxx_spi *VAR_6 = VAR_5;
 u32 VAR_7;
 irqreturn_t VAR_8 = VAR_1;


 VAR_7 = FUNC_2(&VAR_6->base->event);


 if (VAR_7 & VAR_2) {
  u32 VAR_9 = FUNC_2(&VAR_6->base->receive);

  if (VAR_6->rx)
   VAR_6->get_rx(VAR_9, VAR_6);

  VAR_8 = VAR_0;
 }

 if ((VAR_7 & VAR_3) == 0)

  while (((VAR_7 =
    FUNC_2(&VAR_6->base->event)) &
      VAR_3) == 0)
   FUNC_1();

 VAR_6->count -= 1;
 if (VAR_6->count) {
  u32 VAR_10 = VAR_6->get_tx(VAR_6);
  FUNC_3(&VAR_6->base->transmit, VAR_10);
 } else {
  FUNC_0(&VAR_6->done);
 }


 FUNC_3(&VAR_6->base->event, VAR_7);

 return VAR_8;
}
