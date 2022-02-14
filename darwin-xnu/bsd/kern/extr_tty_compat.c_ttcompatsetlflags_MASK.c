
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

__attribute__((used)) static void
FUNC_0(struct tty *VAR_33, struct termios *VAR_34)
{
 int VAR_35 = VAR_33->t_flags;
 tcflag_t VAR_36 = VAR_34->c_iflag;
 tcflag_t VAR_37 = VAR_34->c_oflag;
 tcflag_t VAR_38 = VAR_34->c_lflag;
 tcflag_t VAR_39 = VAR_34->c_cflag;

 VAR_36 &= ~(VAR_26|VAR_15|VAR_14|VAR_16);
 if (VAR_35&VAR_1)
  VAR_38 |= VAR_9;
 else
  VAR_38 &= ~VAR_9;
 if (VAR_35&VAR_2)
  VAR_38 |= VAR_10;
 else
  VAR_38 &= ~VAR_10;
 if (VAR_35&VAR_29)
  VAR_38 |= VAR_11;
 else
  VAR_38 &= ~VAR_11;
 if (VAR_35&VAR_6)
  VAR_38 |= VAR_8;
 else
  VAR_38 &= ~VAR_8;
 if (VAR_35&VAR_31)
  VAR_36 |= VAR_19;
 else
  VAR_36 &= ~VAR_19;
 if ((VAR_35&VAR_7) == 0)
  VAR_36 |= VAR_18;
 else
  VAR_36 &= ~VAR_18;
 if (VAR_35 & VAR_21)
  VAR_39 |= VAR_21;
 else
  VAR_39 &= ~VAR_21;
 if (VAR_35&VAR_23)
  VAR_39 &= ~VAR_13;
 else
  VAR_39 |= VAR_13;
 VAR_38 &= ~(VAR_32|VAR_12|VAR_28|VAR_22);
 VAR_38 |= VAR_35&(VAR_32|VAR_12|VAR_28|VAR_22);
 VAR_39 &= ~(VAR_5|VAR_25);
 if (VAR_35&(VAR_30|VAR_20|VAR_27)) {
  VAR_39 |= VAR_4;
  if (!(VAR_35&(VAR_30|VAR_27))
      || (VAR_35&(VAR_30|VAR_27|VAR_0)) == (VAR_27|VAR_0))
   VAR_36 |= VAR_17;
  else
   VAR_36 &= ~VAR_17;
  if (VAR_35&(VAR_30|VAR_20))
   VAR_37 &= ~VAR_24;
  else
   VAR_37 |= VAR_24;
 } else {
  VAR_39 |= VAR_3|VAR_25;
  VAR_36 |= VAR_17;
  VAR_37 |= VAR_24;
 }
 VAR_34->c_iflag = VAR_36;
 VAR_34->c_oflag = VAR_37;
 VAR_34->c_lflag = VAR_38;
 VAR_34->c_cflag = VAR_39;
}
