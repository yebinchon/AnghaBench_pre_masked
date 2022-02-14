
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct stlport {size_t brdnr; int rxignoremsk; int rxmarkmsk; unsigned int baud_base; unsigned int custom_divisor; unsigned char imr; int sigs; int pagenr; int panelnr; int portnr; TYPE_1__ port; } ;
struct stlbrd {int dummy; } ;
struct ktermios {int c_iflag; int c_cflag; unsigned char* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,int ) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;



 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned char VAR_21 ;
 int VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 unsigned char VAR_32 ;
 int VAR_33 ;
 unsigned char VAR_34 ;
 unsigned char VAR_35 ;
 unsigned char VAR_36 ;
 unsigned char VAR_37 ;
 unsigned char VAR_38 ;
 unsigned char VAR_39 ;
 unsigned char VAR_40 ;
 unsigned char VAR_41 ;
 unsigned char VAR_42 ;
 unsigned char VAR_43 ;
 int VAR_44 ;
 unsigned char VAR_45 ;
 unsigned char VAR_46 ;
 unsigned char VAR_47 ;
 unsigned char VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 unsigned char VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 unsigned int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 size_t VAR_62 ;
 size_t VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int FUNC_2 (char*,unsigned char,unsigned char,unsigned char,...) ;
 unsigned int* VAR_67 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int* VAR_68 ;
 struct stlbrd** VAR_69 ;
 unsigned char FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*,int ,unsigned char) ;
 int FUNC_7 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_8(struct stlport *VAR_70, struct ktermios *VAR_71)
{
 struct stlbrd *VAR_72;
 unsigned long VAR_73;
 unsigned int VAR_74;
 unsigned char VAR_75, VAR_76, VAR_77, VAR_78;
 unsigned char VAR_79, VAR_80, VAR_81, VAR_82;

 VAR_75 = 0;
 VAR_76 = 0;
 VAR_77 = 0;
 VAR_78 = 0;
 VAR_81 = 0;
 VAR_79 = 0;
 VAR_80 = 0;

 VAR_72 = VAR_69[VAR_70->brdnr];
 if (VAR_72 == ((void*)0))
  return;





 VAR_70->rxignoremsk = 0;
 if (VAR_71->c_iflag & VAR_17)
  VAR_70->rxignoremsk |= (VAR_58 | VAR_56 |
   VAR_57);
 if (VAR_71->c_iflag & VAR_16)
  VAR_70->rxignoremsk |= VAR_55;

 VAR_70->rxmarkmsk = VAR_57;
 if (VAR_71->c_iflag & (VAR_19 | VAR_50))
  VAR_70->rxmarkmsk |= (VAR_58 | VAR_56);
 if (VAR_71->c_iflag & VAR_8)
  VAR_70->rxmarkmsk |= VAR_55;





 switch (VAR_71->c_cflag & VAR_14) {
 case 130:
  VAR_76 |= VAR_35;
  break;
 case 129:
  VAR_76 |= VAR_36;
  break;
 case 128:
  VAR_76 |= VAR_37;
  break;
 default:
  VAR_76 |= VAR_38;
  break;
 }

 if (VAR_71->c_cflag & VAR_15)
  VAR_77 |= VAR_48;
 else
  VAR_77 |= VAR_47;

 if (VAR_71->c_cflag & VAR_49) {
  if (VAR_71->c_cflag & VAR_51)
   VAR_76 |= (VAR_40 | VAR_43);
  else
   VAR_76 |= (VAR_40 | VAR_41);
 } else
  VAR_76 |= VAR_42;

 VAR_76 |= VAR_39;






 VAR_77 |= VAR_46;






 VAR_74 = VAR_71->c_cflag & VAR_9;
 if (VAR_74 & VAR_10) {
  VAR_74 &= ~VAR_10;
  if ((VAR_74 < 1) || (VAR_74 > 4))
   VAR_71->c_cflag &= ~VAR_10;
  else
   VAR_74 += 15;
 }
 VAR_74 = VAR_68[VAR_74];
 if ((VAR_71->c_cflag & VAR_9) == VAR_7) {
  if ((VAR_70->port.flags & VAR_3) == VAR_2)
   VAR_74 = 57600;
  else if ((VAR_70->port.flags & VAR_3) == VAR_5)
   VAR_74 = 115200;
  else if ((VAR_70->port.flags & VAR_3) == VAR_4)
   VAR_74 = 230400;
  else if ((VAR_70->port.flags & VAR_3) == VAR_6)
   VAR_74 = 460800;
  else if ((VAR_70->port.flags & VAR_3) == VAR_1)
   VAR_74 = (VAR_70->baud_base / VAR_70->custom_divisor);
 }
 if (VAR_74 > VAR_59)
  VAR_74 = VAR_59;

 if (VAR_74 > 0)
  for (VAR_78 = 0; VAR_78 < VAR_53; VAR_78++)
   if (VAR_74 <= VAR_67[VAR_78])
    break;




 if (VAR_71->c_cflag & VAR_11) {
  VAR_70->port.flags &= ~VAR_0;
 } else {
  VAR_81 |= VAR_21;
  VAR_79 |= VAR_25;
  VAR_70->port.flags |= VAR_0;
 }







 if (VAR_71->c_iflag & VAR_28) {
  VAR_75 |= VAR_32 | VAR_31;
  VAR_79 |= VAR_26;
 } else
  VAR_80 |= VAR_26;

 if (VAR_71->c_iflag & VAR_27)
  VAR_75 |= VAR_30;

 if (VAR_71->c_cflag & VAR_12) {
  VAR_77 |= VAR_45;
  VAR_76 |= VAR_34;
 }






 FUNC_2("SETPORT: portnr=%d panelnr=%d brdnr=%d\n",
  VAR_70->portnr, VAR_70->panelnr, VAR_70->brdnr);
 FUNC_2("    mr0=%x mr1=%x mr2=%x clk=%x\n", VAR_75, VAR_76, VAR_77, VAR_78);
 FUNC_2("    iopr=%x imron=%x imroff=%x\n", VAR_81, VAR_79, VAR_80);
 FUNC_2("    schr1=%x schr2=%x schr3=%x schr4=%x\n",
  VAR_71->c_cc[VAR_62], VAR_71->c_cc[VAR_63],
  VAR_71->c_cc[VAR_62], VAR_71->c_cc[VAR_63]);

 FUNC_3(&VAR_66, VAR_73);
 FUNC_1(VAR_70->brdnr, VAR_70->pagenr);
 FUNC_6(VAR_70, VAR_18, 0);
 FUNC_7(VAR_70, VAR_29, VAR_75);
 FUNC_7(VAR_70, VAR_33, VAR_76);
 FUNC_6(VAR_70, VAR_54, VAR_13);
 FUNC_7(VAR_70, VAR_44, VAR_77);
 FUNC_7(VAR_70, VAR_20,
  ((FUNC_5(VAR_70, VAR_20) & ~VAR_23) | VAR_81));

 if (VAR_74 > 0) {
  FUNC_6(VAR_70, VAR_61, VAR_78);
  FUNC_6(VAR_70, VAR_52, VAR_78);
 }

 FUNC_6(VAR_70, VAR_65, VAR_71->c_cc[VAR_62]);
 FUNC_6(VAR_70, VAR_64, VAR_71->c_cc[VAR_63]);

 VAR_82 = FUNC_5(VAR_70, VAR_22);
 if (VAR_82 & VAR_24)
  VAR_70->sigs &= ~VAR_60;
 else
  VAR_70->sigs |= VAR_60;

 VAR_70->imr = (VAR_70->imr & ~VAR_80) | VAR_79;
 FUNC_6(VAR_70, VAR_18, VAR_70->imr);
 FUNC_0(VAR_70->brdnr);
 FUNC_4(&VAR_66, VAR_73);
}
