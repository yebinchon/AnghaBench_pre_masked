
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcflag_t ;
struct tty {int t_iflag; int t_lflag; int t_oflag; int t_cflag; } ;


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
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;

__attribute__((used)) static int
FUNC_0(struct tty *VAR_44)
{
 tcflag_t VAR_45 = VAR_44->t_iflag;
 tcflag_t VAR_46 = VAR_44->t_lflag;
 tcflag_t VAR_47 = VAR_44->t_oflag;
 tcflag_t VAR_48 = VAR_44->t_cflag;
 int VAR_49 = 0;

 if (VAR_45&VAR_25)
  VAR_49 |= VAR_41;
 if (VAR_45&VAR_19 || VAR_47&VAR_32)
  VAR_49 |= VAR_2;
 if ((VAR_48&VAR_7) == VAR_6) {
  VAR_49 |= VAR_37;
  if (VAR_45&VAR_23)
   VAR_49 |= VAR_0;
 }
 else if (VAR_48&VAR_35) {
  if (VAR_45&VAR_21) {
   if (VAR_48&VAR_36)
    VAR_49 |= VAR_31;
   else
    VAR_49 |= VAR_15;
  } else
   VAR_49 |= VAR_15 | VAR_31;
 }

 if ((VAR_46&VAR_18) == 0) {

  if (VAR_45&(VAR_21|VAR_23|VAR_26) || VAR_46&(VAR_20|VAR_22)
      || (VAR_48&(VAR_7|VAR_35)) != VAR_6)
   VAR_49 |= VAR_1;
  else
   VAR_49 |= VAR_40;
 }
 if (!(VAR_49&VAR_40) && !(VAR_47&VAR_33) && (VAR_48&(VAR_7|VAR_35)) == VAR_6)
  VAR_49 |= VAR_27;
 if (VAR_48&VAR_28)
  VAR_49 |= VAR_28;
 if ((VAR_48&VAR_17) == 0)
  VAR_49 |= VAR_30;
 if (VAR_47&VAR_34)
  VAR_49 |= VAR_43;
 if (VAR_46&VAR_12)
  VAR_49 |= VAR_4|VAR_3;
 if (VAR_46&VAR_13)
  VAR_49 |= VAR_5|VAR_3;
 if (VAR_46&VAR_14)
  VAR_49 |= VAR_39;
 if (VAR_46&VAR_11)
  VAR_49 |= VAR_8;
 if ((VAR_45&VAR_24) == 0)
  VAR_49 |= VAR_9;
 VAR_49 |= VAR_46&(VAR_10|VAR_42|VAR_16|VAR_38|VAR_29);
 return (VAR_49);
}
