
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcflag_t ;
struct tty {int t_flags; } ;
struct termios {int c_iflag; int c_oflag; int c_lflag; int c_cflag; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
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

__attribute__((used)) static void
FUNC_0(struct tty *VAR_37, struct termios *VAR_38)
{
 int VAR_39 = VAR_37->t_flags;
 tcflag_t VAR_40 = VAR_38->c_iflag;
 tcflag_t VAR_41 = VAR_38->c_oflag;
 tcflag_t VAR_42 = VAR_38->c_lflag;
 tcflag_t VAR_43 = VAR_38->c_cflag;

 if (VAR_39 & VAR_34) {
  VAR_40 = VAR_14;
  VAR_42 &= ~(VAR_9|VAR_20|VAR_11|VAR_13);
 } else {
  VAR_40 &= ~(VAR_31|VAR_16|VAR_15|VAR_18);
  VAR_40 |= VAR_1|VAR_24|VAR_17;
  VAR_42 |= VAR_20|VAR_13|VAR_9;
  if (VAR_39 & VAR_36)
   VAR_41 |= VAR_29;
  else
   VAR_41 &= ~VAR_29;
  if (VAR_39 & VAR_2)
   VAR_42 &= ~VAR_11;
  else
   VAR_42 |= VAR_11;
  if (VAR_39&VAR_3) {
   VAR_40 |= VAR_12;
   VAR_41 |= VAR_27;
  } else {
   VAR_40 &= ~VAR_12;
   VAR_41 &= ~VAR_27;
  }
 }
 if (VAR_39&VAR_8)
  VAR_42 |= VAR_8;
 else
  VAR_42 &= ~VAR_8;

 VAR_43 &= ~(VAR_6|VAR_30);
 if (VAR_39&(VAR_34|VAR_25|VAR_33)) {
  VAR_43 |= VAR_5;
  if (!(VAR_39&(VAR_34|VAR_33))
      || (VAR_39&(VAR_34|VAR_33|VAR_0)) == (VAR_33|VAR_0))
   VAR_40 |= VAR_21;
  else
   VAR_40 &= ~VAR_21;
  if (VAR_39&(VAR_34|VAR_25))
   VAR_41 &= ~VAR_28;
  else
   VAR_41 |= VAR_28;
 } else {
  VAR_43 |= VAR_4|VAR_30;
  VAR_40 |= VAR_21;
  VAR_41 |= VAR_28;
 }

 if ((VAR_39&(VAR_10|VAR_26)) == VAR_10) {
  VAR_40 |= VAR_19;
  VAR_43 &= ~VAR_32;
 } else if ((VAR_39&(VAR_10|VAR_26)) == VAR_26) {
  VAR_40 |= VAR_19;
  VAR_43 |= VAR_32;
 } else
  VAR_40 &= ~VAR_19;
 if (VAR_39&VAR_35)
  VAR_40 |= VAR_23;
 else
  VAR_40 &= ~VAR_23;
 if ((VAR_39&VAR_7) == 0)
  VAR_40 |= VAR_22;
 else
  VAR_40 &= ~VAR_22;
 VAR_38->c_iflag = VAR_40;
 VAR_38->c_oflag = VAR_41;
 VAR_38->c_lflag = VAR_42;
 VAR_38->c_cflag = VAR_43;
}
