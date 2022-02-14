
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; int fifosize; int irq; } ;
struct msm_port {int imr; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct uart_port*) ;
 int VAR_12 ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,int,int ) ;
 int FUNC_6 (int ,int ,int ,int ,struct uart_port*) ;
 int FUNC_7 (int ,int,char*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_13)
{
 struct msm_port *VAR_14 = FUNC_0(VAR_13);
 unsigned int VAR_15, VAR_16;
 int VAR_17;

 FUNC_7(VAR_14->name, sizeof(VAR_14->name),
   "msm_serial%d", VAR_13->line);

 VAR_17 = FUNC_6(VAR_13->irq, VAR_12, VAR_0,
     VAR_14->name, VAR_13);
 if (FUNC_8(VAR_17))
  return VAR_17;

 FUNC_2(VAR_13);

 if (FUNC_1(VAR_13->fifosize > 12))
  VAR_16 = VAR_13->fifosize - 12;
 else
  VAR_16 = VAR_13->fifosize;


 VAR_15 = FUNC_3(VAR_13, VAR_9);
 VAR_15 &= ~VAR_11;
 VAR_15 &= ~VAR_10;
 VAR_15 |= VAR_11 & (VAR_16 << 2);
 VAR_15 |= VAR_10 & VAR_16;
 FUNC_5(VAR_13, VAR_15, VAR_9);


 VAR_15 = FUNC_3(VAR_13, VAR_6);
 if (FUNC_8(!VAR_15)) {
  VAR_15 |= VAR_7;
  VAR_15 |= VAR_8;
  FUNC_5(VAR_13, VAR_15, VAR_6);
 }

 FUNC_4(VAR_13);

 FUNC_5(VAR_13, 0x05, VAR_1);


 VAR_14->imr = VAR_4 | VAR_5 |
   VAR_3;
 FUNC_5(VAR_13, VAR_14->imr, VAR_2);

 return 0;
}
