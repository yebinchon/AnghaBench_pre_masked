
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct a2232status {int Command; int OutFlush; int Setup; int Param; unsigned int SoftFlow; scalar_t__ OutDisable; } ;
struct TYPE_6__ {scalar_t__ Crystal; } ;
struct a2232memory {TYPE_1__ Common; } ;
struct TYPE_9__ {int flags; TYPE_3__* tty; } ;
struct TYPE_10__ {unsigned int baud; TYPE_4__ port; } ;
struct a2232_port {TYPE_5__ gs; int which_port_on_a2232; int which_a2232; } ;
struct TYPE_8__ {TYPE_2__* termios; } ;
struct TYPE_7__ {unsigned int c_cflag; int c_iflag; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;




 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int* VAR_24 ;
 struct a2232memory* FUNC_0 (int ) ;
 struct a2232status* FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,int ,int ,...) ;

__attribute__((used)) static int FUNC_5(void *VAR_25)
{
 unsigned int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32;
 int VAR_33, VAR_34;
 unsigned long VAR_35;
 unsigned int VAR_36;
 struct a2232_port *VAR_37 = VAR_25;
 volatile struct a2232status *VAR_38;
 volatile struct a2232memory *VAR_39;

 if (!VAR_37->gs.port.tty || !VAR_37->gs.port.tty->termios) return 0;

 VAR_38 = FUNC_1(VAR_37->which_a2232, VAR_37->which_port_on_a2232);
 VAR_39 = FUNC_0(VAR_37->which_a2232);

 VAR_33 = VAR_34 = 0;


 VAR_27 = VAR_37->gs.baud;
 if (VAR_27 == 0) {

  FUNC_3(VAR_35);

  VAR_38->Command = ( (VAR_38->Command & ~VAR_0) |
     VAR_1 );
  VAR_38->OutFlush = -1;
  VAR_38->Setup = -1;

  FUNC_2(VAR_35);
  return 0;
 }

 VAR_32 = VAR_13;
 for (VAR_36=0; VAR_36 < VAR_14 * 3; VAR_36 += 3){
  if (VAR_24[VAR_36] == VAR_27){
   if (VAR_39->Common.Crystal == VAR_15) VAR_32 = VAR_24[VAR_36+2];
   else VAR_32 = VAR_24[VAR_36+1];
  }
 }
 if (VAR_32 == VAR_13){
  FUNC_4("a2232: Board %d Port %d unsupported baud rate: %d baud. Using another.\n",VAR_37->which_a2232,VAR_37->which_port_on_a2232,VAR_27);

  VAR_32 = VAR_11;
 }
 VAR_33 |= VAR_32;

 VAR_26 = VAR_37->gs.port.tty->termios->c_cflag;


 VAR_28 = VAR_26 & VAR_19;
 switch (VAR_28){
  case 128: VAR_33 |= VAR_10; break;
  case 129: VAR_33 |= VAR_9; break;
  case 130: VAR_33 |= VAR_8; break;
  case 131: VAR_33 |= VAR_7; break;
  default: FUNC_4("a2232: Board %d Port %d unsupported character size: %d. Using 8 data bits.\n",
     VAR_37->which_a2232,VAR_37->which_port_on_a2232,VAR_28);
    VAR_33 |= VAR_10; break;
 }


 VAR_29 = VAR_26 & VAR_20;
 if (VAR_29){
  FUNC_4("a2232: Board %d Port %d 2 stop bits unsupported. Using 1 stop bit.\n",
   VAR_37->which_a2232,VAR_37->which_port_on_a2232);
 }


 if (!(VAR_26 & VAR_18)){

  FUNC_4("a2232: Board %d Port %d cannot switch off firmware-implemented RTS/CTS hardware flow control.\n",
   VAR_37->which_a2232,VAR_37->which_port_on_a2232);

 }
 VAR_31 = !!( VAR_37->gs.port.tty->termios->c_iflag & VAR_21 );


 VAR_30 = VAR_26 & (VAR_22 | VAR_23);
 if (VAR_30 & VAR_22){
  if (VAR_30 & VAR_23){
   VAR_34 |= VAR_5;
  }
  else{
   VAR_34 |= VAR_3;
  }
 }
 else VAR_34 |= VAR_4;




 if (VAR_26 & VAR_17)
  VAR_37->gs.port.flags &= ~VAR_16;
 else
  VAR_37->gs.port.flags |= VAR_16;



 FUNC_3(VAR_35);

 VAR_38->Param = VAR_33 | VAR_12;
 VAR_38->Command = VAR_34 | VAR_6 | VAR_2;
 VAR_38->SoftFlow = VAR_31;
 VAR_38->OutDisable = 0;
 VAR_38->Setup = -1;

 FUNC_2(VAR_35);
 return 0;
}
