
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int flow_off; int flow_on; } ;
struct TYPE_16__ {int flags; TYPE_4__* tty; } ;
struct esp_struct {unsigned short io_port; int custom_divisor; int timeout; int read_status_mask; int ignore_status_mask; int lock; TYPE_1__ config; TYPE_3__ port; } ;
struct TYPE_17__ {TYPE_2__* termios; } ;
struct TYPE_15__ {unsigned int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;




 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_8 (struct esp_struct*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (TYPE_4__*,int,int) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_13(struct esp_struct *VAR_30)
{
 unsigned short VAR_31;
 int VAR_32 = 0;
 unsigned VAR_33, VAR_34;
 int VAR_35, VAR_36;
 unsigned char VAR_37 = 0, VAR_38 = 0;
 unsigned long VAR_39;

 if (!VAR_30->port.tty || !VAR_30->port.tty->termios)
  return;
 VAR_33 = VAR_30->port.tty->termios->c_cflag;
 VAR_31 = VAR_30->io_port;


 switch (VAR_33 & VAR_8) {
 case 131: VAR_34 = 0x00; VAR_36 = 7; break;
 case 130: VAR_34 = 0x01; VAR_36 = 8; break;
 case 129: VAR_34 = 0x02; VAR_36 = 9; break;
 case 128: VAR_34 = 0x03; VAR_36 = 10; break;
 default: VAR_34 = 0x00; VAR_36 = 7; break;
 }
 if (VAR_33 & VAR_9) {
  VAR_34 |= 0x04;
  VAR_36++;
 }
 if (VAR_33 & VAR_16) {
  VAR_34 |= VAR_22;
  VAR_36++;
 }
 if (!(VAR_33 & VAR_17))
  VAR_34 |= VAR_21;




 VAR_35 = FUNC_12(VAR_30->port.tty);
 if (VAR_35 == 38400 &&
  ((VAR_30->port.flags & VAR_3) == VAR_2))
  VAR_32 = VAR_30->custom_divisor;
 else {
  if (VAR_35 == 134)
   VAR_32 = (2*VAR_4 / 269);
  else if (VAR_35)
   VAR_32 = VAR_4 / VAR_35;
 }

 if (!VAR_32)
  VAR_32 = VAR_4 / 9600;

 if (VAR_35) {

  VAR_35 = VAR_4/VAR_32;
  FUNC_11(VAR_30->port.tty, VAR_35, VAR_35);
 }
 VAR_30->timeout = ((1024 * VAR_15 * VAR_36 * VAR_32) / VAR_4) + (VAR_15 / 50);



 if (VAR_33 & VAR_7) {
  VAR_30->port.flags |= VAR_1;

  VAR_37 = 0x04;
  VAR_38 = 0x10;
 } else
  VAR_30->port.flags &= ~VAR_1;
 if (VAR_33 & VAR_5)
  VAR_30->port.flags &= ~VAR_0;
 else
  VAR_30->port.flags |= VAR_0;




 VAR_30->read_status_mask = VAR_27 | VAR_29 | VAR_25;
 if (FUNC_3(VAR_30->port.tty))
  VAR_30->read_status_mask |= VAR_26 | VAR_28;
 if (FUNC_0(VAR_30->port.tty) || FUNC_5(VAR_30->port.tty))
  VAR_30->read_status_mask |= VAR_24;

 VAR_30->ignore_status_mask = 0;







 if (FUNC_1(VAR_30->port.tty)) {
  VAR_30->ignore_status_mask |= VAR_24;
  VAR_30->read_status_mask |= VAR_24;




  if (FUNC_2(VAR_30->port.tty)) {
   VAR_30->ignore_status_mask |= VAR_27 | VAR_28 | VAR_26;

   VAR_30->read_status_mask |= VAR_27 | VAR_28 | VAR_26;

  }
 }

 if (FUNC_4(VAR_30->port.tty))
  VAR_37 |= 0x81;

 FUNC_9(&VAR_30->lock, VAR_39);

 FUNC_8(VAR_30, VAR_18, VAR_10);
 FUNC_8(VAR_30, VAR_19, VAR_32 >> 8);
 FUNC_8(VAR_30, VAR_19, VAR_32 & 0xff);


 FUNC_8(VAR_30, VAR_18, VAR_14);
 FUNC_8(VAR_30, VAR_19, VAR_20);
 FUNC_8(VAR_30, VAR_19, VAR_34);


 FUNC_8(VAR_30, VAR_18, VAR_12);
 FUNC_8(VAR_30, VAR_19, VAR_37);
 FUNC_8(VAR_30, VAR_19, VAR_38);


 if (FUNC_4(VAR_30->port.tty)) {
  FUNC_8(VAR_30, VAR_18, VAR_11);
  FUNC_8(VAR_30, VAR_19, FUNC_6(VAR_30->port.tty));
  FUNC_8(VAR_30, VAR_19, FUNC_7(VAR_30->port.tty));
  FUNC_8(VAR_30, VAR_19, 0x10);
  FUNC_8(VAR_30, VAR_19, 0x21);
  switch (VAR_33 & VAR_8) {
  case 131:
   FUNC_8(VAR_30, VAR_19, 0x1f);
   break;
  case 130:
   FUNC_8(VAR_30, VAR_19, 0x3f);
   break;
  case 129:
  case 128:
   FUNC_8(VAR_30, VAR_19, 0x7f);
   break;
  default:
   FUNC_8(VAR_30, VAR_19, 0xff);
   break;
  }
 }


 FUNC_8(VAR_30, VAR_18, VAR_13);
 FUNC_8(VAR_30, VAR_19, VAR_30->config.flow_off >> 8);
 FUNC_8(VAR_30, VAR_19, VAR_30->config.flow_off);
 FUNC_8(VAR_30, VAR_19, VAR_30->config.flow_on >> 8);
 FUNC_8(VAR_30, VAR_19, VAR_30->config.flow_on);

 FUNC_10(&VAR_30->lock, VAR_39);
}
