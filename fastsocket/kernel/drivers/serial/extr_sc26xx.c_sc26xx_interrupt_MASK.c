
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct uart_sc26xx_port {TYPE_1__* port; } ;
struct tty_struct {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct tty_struct* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct tty_struct*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct uart_sc26xx_port *VAR_8 = VAR_7;
 struct tty_struct *VAR_9;
 unsigned long VAR_10;
 u8 VAR_11;

 FUNC_3(&VAR_8->port[0].lock, VAR_10);

 VAR_9 = ((void*)0);
 VAR_11 = FUNC_0(&VAR_8->port[0], VAR_1);
 if (VAR_11 & VAR_4)
     FUNC_6(&VAR_8->port[0]);
 if (VAR_11 & VAR_2)
     VAR_9 = FUNC_1(&VAR_8->port[0]);

 FUNC_4(&VAR_8->port[0].lock);

 if (VAR_9)
  FUNC_7(VAR_9);

 FUNC_2(&VAR_8->port[1].lock);

 VAR_9 = ((void*)0);
 if (VAR_11 & VAR_5)
     FUNC_6(&VAR_8->port[1]);
 if (VAR_11 & VAR_3)
     VAR_9 = FUNC_1(&VAR_8->port[1]);

 FUNC_5(&VAR_8->port[1].lock, VAR_10);

 if (VAR_9)
  FUNC_7(VAR_9);

 return VAR_0;
}
