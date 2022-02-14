
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct msm_port {int imr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 unsigned int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct uart_port *VAR_9 = VAR_8;
 struct msm_port *VAR_10 = FUNC_0(VAR_9);
 unsigned int VAR_11;

 FUNC_6(&VAR_9->lock);
 VAR_11 = FUNC_4(VAR_9, VAR_6);
 FUNC_5(VAR_9, 0, VAR_1);

 if (VAR_11 & (VAR_3 | VAR_4))
  FUNC_2(VAR_9);
 if (VAR_11 & VAR_5)
  FUNC_3(VAR_9);
 if (VAR_11 & VAR_2)
  FUNC_1(VAR_9);

 FUNC_5(VAR_9, VAR_10->imr, VAR_1);
 FUNC_7(&VAR_9->lock);

 return VAR_0;
}
