
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_status_mask; int ignore_status_mask; } ;
struct uart_sunzilog_port {int* curregs; int parity_mask; TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;




 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
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
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

__attribute__((used)) static void
FUNC_0(struct uart_sunzilog_port *VAR_43, unsigned int VAR_44,
         unsigned int VAR_45, int VAR_46)
{

 VAR_43->curregs[VAR_18] = VAR_11;
 VAR_43->curregs[VAR_19] = VAR_35 | VAR_26;


 VAR_43->curregs[VAR_24] &= ~VAR_42;
 VAR_43->curregs[VAR_24] |= VAR_41;
 VAR_43->curregs[VAR_20] = VAR_46 & 0xff;
 VAR_43->curregs[VAR_21] = (VAR_46 >> 8) & 0xff;
 VAR_43->curregs[VAR_22] = VAR_3 | VAR_0;


 VAR_43->curregs[VAR_23] &= ~VAR_31;
 VAR_43->curregs[VAR_25] &= ~VAR_40;
 switch (VAR_44 & VAR_6) {
 case 131:
  VAR_43->curregs[VAR_23] |= VAR_27;
  VAR_43->curregs[VAR_25] |= VAR_36;
  VAR_43->parity_mask = 0x1f;
  break;
 case 130:
  VAR_43->curregs[VAR_23] |= VAR_28;
  VAR_43->curregs[VAR_25] |= VAR_37;
  VAR_43->parity_mask = 0x3f;
  break;
 case 129:
  VAR_43->curregs[VAR_23] |= VAR_29;
  VAR_43->curregs[VAR_25] |= VAR_38;
  VAR_43->parity_mask = 0x7f;
  break;
 case 128:
 default:
  VAR_43->curregs[VAR_23] |= VAR_30;
  VAR_43->curregs[VAR_25] |= VAR_39;
  VAR_43->parity_mask = 0xff;
  break;
 };
 VAR_43->curregs[VAR_24] &= ~0x0c;
 if (VAR_44 & VAR_7)
  VAR_43->curregs[VAR_24] |= VAR_34;
 else
  VAR_43->curregs[VAR_24] |= VAR_33;
 if (VAR_44 & VAR_12)
  VAR_43->curregs[VAR_24] |= VAR_15;
 else
  VAR_43->curregs[VAR_24] &= ~VAR_15;
 if (!(VAR_44 & VAR_14))
  VAR_43->curregs[VAR_24] |= VAR_17;
 else
  VAR_43->curregs[VAR_24] &= ~VAR_17;

 VAR_43->port.read_status_mask = VAR_32;
 if (VAR_45 & VAR_10)
  VAR_43->port.read_status_mask |= VAR_4 | VAR_16;
 if (VAR_45 & (VAR_1 | VAR_13))
  VAR_43->port.read_status_mask |= VAR_2;

 VAR_43->port.ignore_status_mask = 0;
 if (VAR_45 & VAR_9)
  VAR_43->port.ignore_status_mask |= VAR_4 | VAR_16;
 if (VAR_45 & VAR_8) {
  VAR_43->port.ignore_status_mask |= VAR_2;
  if (VAR_45 & VAR_9)
   VAR_43->port.ignore_status_mask |= VAR_32;
 }

 if ((VAR_44 & VAR_5) == 0)
  VAR_43->port.ignore_status_mask = 0xff;
}
