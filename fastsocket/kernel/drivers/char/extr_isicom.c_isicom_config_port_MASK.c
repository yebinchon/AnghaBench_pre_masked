
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tty_struct {TYPE_1__* termios; struct isi_port* driver_data; } ;
struct TYPE_4__ {int flags; } ;
struct isi_port {int channel; TYPE_2__ port; struct isi_board* card; } ;
struct isi_board {unsigned long base; int shift_count; int port_status; } ;
struct TYPE_3__ {unsigned long c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;




 unsigned long FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 int VAR_16 ;
 unsigned char VAR_17 ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (struct tty_struct*) ;
 scalar_t__ FUNC_13 (unsigned long) ;
 int FUNC_14 (struct isi_port*) ;
 int* VAR_18 ;
 int FUNC_15 (int,unsigned long) ;
 int FUNC_16 (struct isi_port*) ;

__attribute__((used)) static void FUNC_17(struct tty_struct *VAR_19)
{
 struct isi_port *VAR_20 = VAR_19->driver_data;
 struct isi_board *VAR_21 = VAR_20->card;
 unsigned long VAR_22;
 unsigned long VAR_23 = VAR_21->base;
 u16 VAR_24, VAR_25 = VAR_20->channel,
  VAR_26 = VAR_21->shift_count;
 unsigned char VAR_27;


 VAR_22 = FUNC_0(VAR_19);
 if (VAR_22 & VAR_7) {
  VAR_22 &= ~VAR_7;







  if (VAR_22 < 1 || VAR_22 > 4)
   VAR_19->termios->c_cflag &= ~VAR_7;
  else
   VAR_22 += 15;
 }
 if (VAR_22 == 15) {






  if ((VAR_20->port.flags & VAR_3) == VAR_2)
   VAR_22++;
  if ((VAR_20->port.flags & VAR_3) == VAR_5)
   VAR_22 += 2;
  if ((VAR_20->port.flags & VAR_3) == VAR_4)
   VAR_22 += 3;
  if ((VAR_20->port.flags & VAR_3) == VAR_6)
   VAR_22 += 4;
 }
 if (VAR_18[VAR_22] == -1) {

  FUNC_14(VAR_20);
  return;
 } else
  FUNC_16(VAR_20);

 if (FUNC_13(VAR_23) == 0) {
  FUNC_15(0x8000 | (VAR_25 << VAR_26) | 0x03, VAR_23);
  FUNC_15(VAR_18[VAR_22] << 8 | 0x03, VAR_23);
  VAR_24 = 0;
  switch (FUNC_4(VAR_19)) {
  case 131:
   VAR_24 |= VAR_9;
   break;
  case 130:
   VAR_24 |= VAR_10;
   break;
  case 129:
   VAR_24 |= VAR_11;
   break;
  case 128:
   VAR_24 |= VAR_12;
   break;
  }

  if (FUNC_5(VAR_19))
   VAR_24 |= VAR_8;
  if (FUNC_6(VAR_19)) {
   VAR_24 |= VAR_14;
   if (FUNC_7(VAR_19))
    VAR_24 |= VAR_16;
  }
  FUNC_15(VAR_24, VAR_23);
  FUNC_10(VAR_23);
 }
 if (FUNC_1(VAR_19))
  VAR_20->port.flags &= ~VAR_0;
 else
  VAR_20->port.flags |= VAR_0;


 VAR_27 = 0;
 VAR_20->port.flags &= ~VAR_1;
 if (FUNC_3(VAR_19)) {
  VAR_20->port.flags |= VAR_1;
  VAR_27 |= VAR_13;
 }
 if (FUNC_9(VAR_19))
  VAR_27 |= VAR_17;
 if (FUNC_8(VAR_19))
  VAR_27 |= VAR_15;

 if (FUNC_13(VAR_23) == 0) {
  FUNC_15(0x8000 | (VAR_25 << VAR_26) | 0x04, VAR_23);
  FUNC_15(VAR_27 << 8 | 0x05, VAR_23);
  FUNC_15((FUNC_12(VAR_19)) << 8 | (FUNC_11(VAR_19)), VAR_23);
  FUNC_10(VAR_23);
 }


 if (FUNC_2(VAR_19)) {
  VAR_21->port_status |= (1 << VAR_25);
  FUNC_15(VAR_21->port_status, VAR_23 + 0x02);
 }
}
