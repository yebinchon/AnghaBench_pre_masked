
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct tty_struct {struct ktermios* termios; } ;
struct TYPE_27__ {TYPE_1__* CtlP; } ;
struct r_port {size_t board; int cps; int cd_status; int read_status_mask; int ignore_status_mask; unsigned int flags; TYPE_2__ channel; int slock; int intmask; } ;
struct ktermios {unsigned int c_cflag; } ;
struct TYPE_26__ {scalar_t__ boardType; } ;
typedef TYPE_2__ CHANNEL_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;



 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (struct tty_struct*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (struct tty_struct*) ;
 int* VAR_21 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*,int) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*,int ) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*,int ) ;
 int FUNC_31 (TYPE_2__*,int ) ;
 int FUNC_32 (int *,unsigned long) ;
 int FUNC_33 (int *,unsigned long) ;
 int FUNC_34 (struct tty_struct*,int,int) ;
 int FUNC_35 (struct tty_struct*) ;
 int FUNC_36 (struct ktermios*) ;

__attribute__((used)) static void FUNC_37(struct tty_struct *VAR_22, struct r_port *VAR_23,
        struct ktermios *VAR_24)
{
 unsigned VAR_25;
 unsigned long VAR_26;
 unsigned VAR_27;
 int VAR_28, VAR_29, VAR_30;
 CHANNEL_t *VAR_31;
 struct ktermios *VAR_32 = VAR_22->termios;

 VAR_31 = &VAR_23->channel;
 VAR_25 = VAR_32->c_cflag;


 if ((VAR_25 & VAR_4) == VAR_3) {
  FUNC_23(VAR_31);
  VAR_28 = 10;
 } else {
  FUNC_22(VAR_31);
  VAR_28 = 9;
 }
 if (VAR_25 & VAR_5) {
  FUNC_29(VAR_31);
  VAR_28++;
 } else {
  FUNC_28(VAR_31);
 }

 if (VAR_25 & VAR_12) {
  FUNC_17(VAR_31);
  VAR_28++;
  if (VAR_25 & VAR_13) {
   FUNC_26(VAR_31);
  } else {
   FUNC_24(VAR_31);
  }
 } else {
  FUNC_12(VAR_31);
 }


 VAR_29 = FUNC_35(VAR_22);
 if (!VAR_29)
  VAR_29 = 9600;
 VAR_30 = ((VAR_21[VAR_23->board] + (VAR_29 >> 1)) / VAR_29) - 1;
 if ((VAR_30 >= 8192 || VAR_30 < 0) && VAR_24) {
  VAR_29 = FUNC_36(VAR_24);
  if (!VAR_29)
   VAR_29 = 9600;
  VAR_30 = (VAR_21[VAR_23->board] / VAR_29) - 1;
 }
 if (VAR_30 >= 8192 || VAR_30 < 0) {
  VAR_29 = 9600;
  VAR_30 = (VAR_21[VAR_23->board] / VAR_29) - 1;
 }
 VAR_23->cps = VAR_29 / VAR_28;
 FUNC_21(VAR_31, VAR_30);


 FUNC_34(VAR_22, VAR_29, VAR_29);

 if (VAR_25 & VAR_2) {
  VAR_23->intmask |= VAR_7;
  FUNC_15(VAR_31);
 } else {
  VAR_23->intmask &= ~VAR_7;
  FUNC_10(VAR_31);
 }
 if (VAR_25 & VAR_1) {
  VAR_23->intmask &= ~VAR_6;
 } else {
  FUNC_32(&VAR_23->slock, VAR_26);
  if (FUNC_20(VAR_31) & VAR_0)
   VAR_23->cd_status = 1;
  else
   VAR_23->cd_status = 0;
  VAR_23->intmask |= VAR_6;
  FUNC_33(&VAR_23->slock, VAR_26);
 }
 VAR_23->read_status_mask = VAR_20 | 0xFF;
 if (FUNC_3(VAR_22))
  VAR_23->read_status_mask |= VAR_18 | VAR_19;
 if (FUNC_0(VAR_22) || FUNC_6(VAR_22))
  VAR_23->read_status_mask |= VAR_17;




 VAR_23->ignore_status_mask = 0;
 if (FUNC_2(VAR_22))
  VAR_23->ignore_status_mask |= VAR_18 | VAR_19;
 if (FUNC_1(VAR_22)) {
  VAR_23->ignore_status_mask |= VAR_17;




  if (FUNC_2(VAR_22))
   VAR_23->ignore_status_mask |= VAR_20;
 }

 VAR_27 = VAR_23->flags & VAR_14;

 if ((VAR_23->flags & VAR_15)
     || (VAR_27 == 128))
  FUNC_18(VAR_31);
 else
  FUNC_13(VAR_31);

 FUNC_27(&VAR_23->channel);

 if (VAR_31->CtlP->boardType == VAR_16) {
  switch (VAR_27) {
  case 128:
   FUNC_25(VAR_31, VAR_11);
   break;
  case 129:
   FUNC_25(VAR_31, VAR_10);
   break;
  case 130:
  default:
   if (VAR_23->flags & VAR_15)
    FUNC_25(VAR_31, VAR_9);
   else
    FUNC_25(VAR_31, VAR_8);
   break;
  }
 }
}
