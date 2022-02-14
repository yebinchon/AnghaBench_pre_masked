
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct stliport {int baud_base; int custom_divisor; int rxmarkmsk; int pflag; TYPE_1__ port; } ;
struct ktermios {int c_cflag; int c_iflag; int * c_cc; } ;
struct TYPE_6__ {int baudout; int baudin; int csize; int flow; int pflag; int vmin; int vtime; int* cc; int iflag; int stopout; int startout; int stopin; int startin; int parity; int stopbs; } ;
typedef TYPE_2__ asyport_t ;


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
 size_t VAR_38 ;
 size_t VAR_39 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_40, struct stliport *VAR_41,
    asyport_t *VAR_42, struct ktermios *VAR_43)
{
 FUNC_0(VAR_42, 0, sizeof(asyport_t));




 VAR_42->baudout = FUNC_1(VAR_40);
 if ((VAR_43->c_cflag & VAR_9) == VAR_7) {
  if ((VAR_41->port.flags & VAR_3) == VAR_2)
   VAR_42->baudout = 57600;
  else if ((VAR_41->port.flags & VAR_3) == VAR_5)
   VAR_42->baudout = 115200;
  else if ((VAR_41->port.flags & VAR_3) == VAR_4)
   VAR_42->baudout = 230400;
  else if ((VAR_41->port.flags & VAR_3) == VAR_6)
   VAR_42->baudout = 460800;
  else if ((VAR_41->port.flags & VAR_3) == VAR_1)
   VAR_42->baudout = (VAR_41->baud_base / VAR_41->custom_divisor);
 }
 if (VAR_42->baudout > VAR_37)
  VAR_42->baudout = VAR_37;
 VAR_42->baudin = VAR_42->baudout;

 switch (VAR_43->c_cflag & VAR_12) {
 case 130:
  VAR_42->csize = 5;
  break;
 case 129:
  VAR_42->csize = 6;
  break;
 case 128:
  VAR_42->csize = 7;
  break;
 default:
  VAR_42->csize = 8;
  break;
 }

 if (VAR_43->c_cflag & VAR_13)
  VAR_42->stopbs = VAR_33;
 else
  VAR_42->stopbs = VAR_32;

 if (VAR_43->c_cflag & VAR_26) {
  if (VAR_43->c_cflag & VAR_28)
   VAR_42->parity = VAR_31;
  else
   VAR_42->parity = VAR_29;
 } else {
  VAR_42->parity = VAR_30;
 }




 if (VAR_43->c_iflag & VAR_25) {
  VAR_42->flow |= VAR_19;
  if (VAR_43->c_iflag & VAR_24)
   VAR_42->flow |= VAR_18;
 }
 if (VAR_43->c_cflag & VAR_11)
  VAR_42->flow |= (VAR_20 | VAR_17);

 VAR_42->startin = VAR_43->c_cc[VAR_38];
 VAR_42->stopin = VAR_43->c_cc[VAR_39];
 VAR_42->startout = VAR_43->c_cc[VAR_38];
 VAR_42->stopout = VAR_43->c_cc[VAR_39];







 if (VAR_43->c_iflag & VAR_22)
  VAR_42->iflag |= VAR_16;
 if (VAR_43->c_iflag & VAR_21)
  VAR_42->iflag |= VAR_15;

 VAR_41->rxmarkmsk = 0;
 if (VAR_43->c_iflag & (VAR_23 | VAR_27))
  VAR_42->iflag |= VAR_14;
 if (VAR_43->c_iflag & VAR_8)
  VAR_41->rxmarkmsk |= VAR_8;




 if (VAR_43->c_cflag & VAR_10)
  VAR_41->port.flags &= ~VAR_0;
 else
  VAR_41->port.flags |= VAR_0;




 VAR_42->pflag = (VAR_41->pflag & 0xffff);
 VAR_42->vmin = (VAR_41->pflag & VAR_34) ? 1 : 0;
 VAR_42->vtime = (VAR_41->pflag & VAR_35) ? 1 : 0;
 VAR_42->cc[1] = (VAR_41->pflag & VAR_36) ? 1 : 0;
}
