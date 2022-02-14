
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t type; unsigned int uartclk; int read_status_mask; int ignore_status_mask; int lock; } ;
struct uart_sunsu_port {int rev; unsigned char lcr; unsigned int cflag; TYPE_2__ port; int ier; } ;
struct uart_port {int uartclk; } ;
struct TYPE_3__ {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned char VAR_18 ;
 scalar_t__ FUNC_0 (TYPE_2__*,unsigned int) ;
 int VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (struct uart_sunsu_port*,int ,int ) ;
 int FUNC_2 (struct uart_sunsu_port*,int ,unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__* VAR_40 ;
 int FUNC_5 (struct uart_port*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_6(struct uart_port *VAR_41, unsigned int VAR_42,
     unsigned int VAR_43, unsigned int VAR_44)
{
 struct uart_sunsu_port *VAR_45 = (struct uart_sunsu_port *) VAR_41;
 unsigned char VAR_46, VAR_47 = 0;
 unsigned long VAR_48;

 switch (VAR_42 & VAR_4) {
 case 131:
  VAR_46 = 0x00;
  break;
 case 130:
  VAR_46 = 0x01;
  break;
 case 129:
  VAR_46 = 0x02;
  break;
 default:
 case 128:
  VAR_46 = 0x03;
  break;
 }

 if (VAR_42 & VAR_5)
  VAR_46 |= 0x04;
 if (VAR_42 & VAR_9)
  VAR_46 |= VAR_30;
 if (!(VAR_42 & VAR_11))
  VAR_46 |= VAR_29;
 if ((VAR_44 & 0xff) == 0 && VAR_45->port.type == VAR_13 &&
     VAR_45->rev == 0x5201)
  VAR_44 ++;

 if (VAR_40[VAR_45->port.type].flags & VAR_39) {
  if ((VAR_45->port.uartclk / VAR_44) < (2400 * 16))
   VAR_47 = VAR_21 | VAR_22;




  else
   VAR_47 = VAR_21 | VAR_24;
 }
 if (VAR_45->port.type == VAR_12)
  VAR_47 |= VAR_20;





 FUNC_3(&VAR_45->port.lock, VAR_48);




 FUNC_5(VAR_41, VAR_42, (VAR_41->uartclk / (16 * VAR_44)));

 VAR_45->port.read_status_mask = VAR_35 | VAR_37 | VAR_33;
 if (VAR_43 & VAR_8)
  VAR_45->port.read_status_mask |= VAR_34 | VAR_36;
 if (VAR_43 & (VAR_0 | VAR_10))
  VAR_45->port.read_status_mask |= VAR_32;




 VAR_45->port.ignore_status_mask = 0;
 if (VAR_43 & VAR_7)
  VAR_45->port.ignore_status_mask |= VAR_36 | VAR_34;
 if (VAR_43 & VAR_6) {
  VAR_45->port.ignore_status_mask |= VAR_32;




  if (VAR_43 & VAR_7)
   VAR_45->port.ignore_status_mask |= VAR_35;
 }




 if ((VAR_42 & VAR_2) == 0)
  VAR_45->port.ignore_status_mask |= VAR_33;




 VAR_45->ier &= ~VAR_26;
 if (FUNC_0(&VAR_45->port, VAR_42))
  VAR_45->ier |= VAR_26;

 FUNC_1(VAR_45, VAR_25, VAR_45->ier);

 if (VAR_40[VAR_45->port.type].flags & VAR_38) {
  FUNC_2(VAR_45, VAR_27, 0xBF);
  FUNC_2(VAR_45, VAR_17, VAR_42 & VAR_3 ? VAR_18 :0);
 }
 FUNC_2(VAR_45, VAR_27, VAR_46 | VAR_28);
 FUNC_2(VAR_45, VAR_15, VAR_44 & 0xff);
 FUNC_2(VAR_45, VAR_16, VAR_44 >> 8);
 if (VAR_45->port.type == VAR_12)
  FUNC_2(VAR_45, VAR_19, VAR_47);
 FUNC_2(VAR_45, VAR_27, VAR_46);
 VAR_45->lcr = VAR_46;
 if (VAR_45->port.type != VAR_12) {
  if (VAR_47 & VAR_21) {

   FUNC_2(VAR_45, VAR_19, VAR_21);
  }
  FUNC_2(VAR_45, VAR_19, VAR_47);
 }

 VAR_45->cflag = VAR_42;

 FUNC_4(&VAR_45->port.lock, VAR_48);
}
