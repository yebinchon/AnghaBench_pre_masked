
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; unsigned int custom_divisor; int read_status_mask; int ignore_status_mask; int lock; } ;
struct s3c24xx_uart_port {unsigned int baudclk_rate; TYPE_1__* info; struct clk* baudclk; struct s3c24xx_uart_clksrc* clksrc; } ;
struct s3c24xx_uart_clksrc {int dummy; } ;
struct s3c2410_uartcfg {unsigned int ulcon; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_divslot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct clk*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 unsigned int FUNC_3 (struct clk*) ;
 int FUNC_4 (char*,...) ;
 unsigned int FUNC_5 (struct uart_port*,int ) ;
 struct s3c2410_uartcfg* FUNC_6 (struct uart_port*) ;
 unsigned int FUNC_7 (struct uart_port*,struct s3c24xx_uart_clksrc**,struct clk**,unsigned int) ;
 int FUNC_8 (struct uart_port*,struct s3c24xx_uart_clksrc*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct s3c24xx_uart_port* FUNC_11 (struct uart_port*) ;
 unsigned int FUNC_12 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_13 (struct uart_port*,int,unsigned int) ;
 unsigned int* VAR_34 ;
 int FUNC_14 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_15(struct uart_port *VAR_35,
           struct ktermios *VAR_36,
           struct ktermios *VAR_37)
{
 struct s3c2410_uartcfg *VAR_38 = FUNC_6(VAR_35);
 struct s3c24xx_uart_port *VAR_39 = FUNC_11(VAR_35);
 struct s3c24xx_uart_clksrc *VAR_40 = ((void*)0);
 struct clk *VAR_41 = ((void*)0);
 unsigned long VAR_42;
 unsigned int VAR_43, VAR_44;
 unsigned int VAR_45;
 unsigned int VAR_46;
 unsigned int VAR_47 = 0;




 VAR_36->c_cflag &= ~(VAR_6 | VAR_1);
 VAR_36->c_cflag |= VAR_0;





 VAR_43 = FUNC_12(VAR_35, VAR_36, VAR_37, 0, 115200*8);

 if (VAR_43 == 38400 && (VAR_35->flags & VAR_33) == VAR_32)
  VAR_44 = VAR_35->custom_divisor;
 else
  VAR_44 = FUNC_7(VAR_35, &VAR_40, &VAR_41, VAR_43);



 if (VAR_39->clksrc != VAR_40 || VAR_39->baudclk != VAR_41) {
  FUNC_4("selecting clock %p\n", VAR_41);
  FUNC_8(VAR_35, VAR_40);

  if (VAR_39->baudclk != ((void*)0) && !FUNC_0(VAR_39->baudclk)) {
   FUNC_1(VAR_39->baudclk);
   VAR_39->baudclk = ((void*)0);
  }

  FUNC_2(VAR_41);

  VAR_39->clksrc = VAR_40;
  VAR_39->baudclk = VAR_41;
  VAR_39->baudclk_rate = VAR_41 ? FUNC_3(VAR_41) : 0;
 }

 if (VAR_39->info->has_divslot) {
  unsigned int VAR_48 = VAR_39->baudclk_rate / VAR_43;

  VAR_47 = VAR_34[VAR_48 & 15];
  FUNC_4("udivslot = %04x (div %d)\n", VAR_47, VAR_48 & 15);
 }

 switch (VAR_36->c_cflag & VAR_4) {
 case 131:
  FUNC_4("config: 5bits/char\n");
  VAR_45 = VAR_13;
  break;
 case 130:
  FUNC_4("config: 6bits/char\n");
  VAR_45 = VAR_14;
  break;
 case 129:
  FUNC_4("config: 7bits/char\n");
  VAR_45 = VAR_15;
  break;
 case 128:
 default:
  FUNC_4("config: 8bits/char\n");
  VAR_45 = VAR_16;
  break;
 }


 VAR_45 |= (VAR_38->ulcon & VAR_17);

 if (VAR_36->c_cflag & VAR_5)
  VAR_45 |= VAR_21;

 VAR_46 = (VAR_36->c_cflag & VAR_3) ? VAR_29 : 0;

 if (VAR_36->c_cflag & VAR_10) {
  if (VAR_36->c_cflag & VAR_11)
   VAR_45 |= VAR_20;
  else
   VAR_45 |= VAR_18;
 } else {
  VAR_45 |= VAR_19;
 }

 FUNC_9(&VAR_35->lock, VAR_42);

 FUNC_4("setting ulcon to %08x, brddiv to %d, udivslot %08x\n",
     VAR_45, VAR_44, VAR_47);

 FUNC_14(VAR_35, VAR_28, VAR_45);
 FUNC_14(VAR_35, VAR_22, VAR_44);
 FUNC_14(VAR_35, VAR_30, VAR_46);

 if (VAR_39->info->has_divslot)
  FUNC_14(VAR_35, VAR_31, VAR_47);

 FUNC_4("uart: ulcon = 0x%08x, ucon = 0x%08x, ufcon = 0x%08x\n",
     FUNC_5(VAR_35, VAR_28),
     FUNC_5(VAR_35, VAR_23),
     FUNC_5(VAR_35, VAR_27));




 FUNC_13(VAR_35, VAR_36->c_cflag, VAR_43);




 VAR_35->read_status_mask = VAR_25;
 if (VAR_36->c_iflag & VAR_9)
  VAR_35->read_status_mask |= VAR_24 | VAR_26;




 VAR_35->ignore_status_mask = 0;
 if (VAR_36->c_iflag & VAR_8)
  VAR_35->ignore_status_mask |= VAR_25;
 if (VAR_36->c_iflag & VAR_7 && VAR_36->c_iflag & VAR_8)
  VAR_35->ignore_status_mask |= VAR_24;




 if ((VAR_36->c_cflag & VAR_2) == 0)
  VAR_35->ignore_status_mask |= VAR_12;

 FUNC_10(&VAR_35->lock, VAR_42);
}
