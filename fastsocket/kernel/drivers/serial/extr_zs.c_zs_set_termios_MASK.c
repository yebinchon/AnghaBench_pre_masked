
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_scc {int zlock; struct zs_port* zport; } ;
struct zs_port {int* regs; int clk_mode; struct zs_scc* scc; } ;
struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 unsigned int FUNC_1 (unsigned int,int) ;
 size_t VAR_39 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct zs_port*,unsigned int*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct zs_port* FUNC_6 (struct uart_port*) ;
 unsigned int FUNC_7 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_8 (struct uart_port*,int,unsigned int) ;
 int FUNC_9 (struct zs_port*) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_40, struct ktermios *VAR_41,
      struct ktermios *VAR_42)
{
 struct zs_port *VAR_43 = FUNC_6(VAR_40);
 struct zs_scc *VAR_44 = VAR_43->scc;
 struct zs_port *VAR_45 = &VAR_44->zport[VAR_39];
 int VAR_46;
 unsigned int VAR_47, VAR_48;
 unsigned long VAR_49;

 FUNC_4(&VAR_44->zlock, VAR_49);
 VAR_46 = !FUNC_2(VAR_49);


 VAR_43->regs[3] &= ~VAR_23;
 VAR_43->regs[5] &= ~VAR_33;
 switch (VAR_41->c_cflag & VAR_4) {
 case 131:
  VAR_43->regs[3] |= VAR_18;
  VAR_43->regs[5] |= VAR_29;
  break;
 case 130:
  VAR_43->regs[3] |= VAR_19;
  VAR_43->regs[5] |= VAR_30;
  break;
 case 129:
  VAR_43->regs[3] |= VAR_20;
  VAR_43->regs[5] |= VAR_31;
  break;
 case 128:
 default:
  VAR_43->regs[3] |= VAR_21;
  VAR_43->regs[5] |= VAR_32;
  break;
 }


 VAR_43->regs[4] &= ~(VAR_38 | VAR_28 | VAR_15 | VAR_17);
 if (VAR_41->c_cflag & VAR_5)
  VAR_43->regs[4] |= VAR_27;
 else
  VAR_43->regs[4] |= VAR_26;
 if (VAR_41->c_cflag & VAR_12)
  VAR_43->regs[4] |= VAR_15;
 if (!(VAR_41->c_cflag & VAR_14))
  VAR_43->regs[4] |= VAR_17;
 switch (VAR_43->clk_mode) {
 case 64:
  VAR_43->regs[4] |= VAR_37;
  break;
 case 32:
  VAR_43->regs[4] |= VAR_36;
  break;
 case 16:
  VAR_43->regs[4] |= VAR_34;
  break;
 case 1:
  VAR_43->regs[4] |= VAR_35;
  break;
 default:
  FUNC_0();
 }

 VAR_47 = FUNC_7(VAR_40, VAR_41, VAR_42, 0,
      VAR_40->uartclk / VAR_43->clk_mode / 4);

 VAR_48 = FUNC_1(VAR_47, VAR_40->uartclk / VAR_43->clk_mode);
 VAR_43->regs[12] = VAR_48 & 0xff;
 VAR_43->regs[13] = (VAR_48 >> 8) & 0xff;

 FUNC_8(VAR_40, VAR_41->c_cflag, VAR_47);

 VAR_40->read_status_mask = VAR_25;
 if (VAR_41->c_iflag & VAR_11)
  VAR_40->read_status_mask |= VAR_8 | VAR_16;
 if (VAR_41->c_iflag & (VAR_0 | VAR_13))
  VAR_40->read_status_mask |= VAR_24;

 VAR_40->ignore_status_mask = 0;
 if (VAR_41->c_iflag & VAR_10)
  VAR_40->ignore_status_mask |= VAR_8 | VAR_16;
 if (VAR_41->c_iflag & VAR_9) {
  VAR_40->ignore_status_mask |= VAR_24;
  if (VAR_41->c_iflag & VAR_10)
   VAR_40->ignore_status_mask |= VAR_25;
 }

 if (VAR_41->c_cflag & VAR_2)
  VAR_43->regs[3] |= VAR_22;
 else
  VAR_43->regs[3] &= ~VAR_22;

 if (VAR_43 != VAR_45) {
  if (!(VAR_41->c_cflag & VAR_1)) {
   VAR_43->regs[15] |= VAR_7;
  } else
   VAR_43->regs[15] &= ~VAR_7;
  if (VAR_41->c_cflag & VAR_3) {
   VAR_43->regs[15] |= VAR_6;
  } else
   VAR_43->regs[15] &= ~VAR_6;
  FUNC_9(VAR_43);
 }


 FUNC_3(VAR_43, VAR_43->regs, VAR_46);

 FUNC_5(&VAR_44->zlock, VAR_49);
}
