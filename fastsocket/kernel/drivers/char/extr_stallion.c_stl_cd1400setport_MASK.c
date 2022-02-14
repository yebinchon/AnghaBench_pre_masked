
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct stlport {size_t brdnr; int rxignoremsk; int rxmarkmsk; unsigned int baud_base; unsigned int custom_divisor; unsigned int clk; int portnr; int sigs; int pagenr; int panelnr; TYPE_1__ port; } ;
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
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 int VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 int VAR_32 ;
 unsigned char VAR_33 ;
 int VAR_34 ;
 unsigned char VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;



 int VAR_38 ;
 int VAR_39 ;
 unsigned char VAR_40 ;
 unsigned char VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 unsigned char VAR_48 ;
 int VAR_49 ;
 unsigned char VAR_50 ;
 int VAR_51 ;
 unsigned char VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 unsigned char VAR_64 ;
 unsigned int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 size_t VAR_73 ;
 size_t VAR_74 ;
 int VAR_75 ;
 int FUNC_2 (char*,unsigned char,unsigned char,unsigned char,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int* VAR_76 ;
 struct stlbrd** VAR_77 ;
 int FUNC_5 (struct stlport*) ;
 unsigned int* VAR_78 ;
 unsigned char FUNC_6 (struct stlport*,int ) ;
 int FUNC_7 (struct stlport*,int ,unsigned char) ;
 scalar_t__ FUNC_8 (struct stlport*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_9(struct stlport *VAR_79, struct ktermios *VAR_80)
{
 struct stlbrd *VAR_81;
 unsigned long VAR_82;
 unsigned int VAR_83, VAR_84;
 unsigned char VAR_85, VAR_86, VAR_87;
 unsigned char VAR_88, VAR_89, VAR_90;
 unsigned char VAR_91, VAR_92, VAR_93;
 unsigned char VAR_94, VAR_95, VAR_96;
 unsigned char VAR_97, VAR_98;

 VAR_85 = 0;
 VAR_86 = 0;
 VAR_87 = 0;
 VAR_88 = 0;
 VAR_89 = 0;
 VAR_90 = 0;
 VAR_96 = 0;
 VAR_97 = 0;
 VAR_98 = 0;
 VAR_94 = 0;
 VAR_95 = 0;
 VAR_92 = 0;
 VAR_93 = 0;

 VAR_81 = VAR_77[VAR_79->brdnr];
 if (VAR_81 == ((void*)0))
  return;






 VAR_79->rxignoremsk = 0;
 if (VAR_80->c_iflag & VAR_43) {
  VAR_79->rxignoremsk |= (VAR_69 | VAR_67 | VAR_68);
  VAR_85 |= VAR_23;
 }
 if (VAR_80->c_iflag & VAR_42) {
  VAR_79->rxignoremsk |= VAR_66;
  VAR_88 |= VAR_35;
 }

 VAR_79->rxmarkmsk = VAR_68;
 if (VAR_80->c_iflag & (VAR_44 | VAR_54))
  VAR_79->rxmarkmsk |= (VAR_69 | VAR_67);
 if (VAR_80->c_iflag & VAR_8)
  VAR_79->rxmarkmsk |= VAR_66;





 switch (VAR_80->c_cflag & VAR_38) {
 case 130:
  VAR_85 |= VAR_17;
  break;
 case 129:
  VAR_85 |= VAR_18;
  break;
 case 128:
  VAR_85 |= VAR_19;
  break;
 default:
  VAR_85 |= VAR_20;
  break;
 }

 if (VAR_80->c_cflag & VAR_39)
  VAR_85 |= VAR_27;
 else
  VAR_85 |= VAR_26;

 if (VAR_80->c_cflag & VAR_53) {
  if (VAR_80->c_cflag & VAR_55)
   VAR_85 |= (VAR_21 | VAR_25);
  else
   VAR_85 |= (VAR_21 | VAR_22);
 } else {
  VAR_85 |= VAR_24;
 }







 VAR_87 |= VAR_41;
 VAR_96 = 2;







 VAR_84 = VAR_80->c_cflag & VAR_10;
 if (VAR_84 & VAR_11) {
  VAR_84 &= ~VAR_11;
  if ((VAR_84 < 1) || (VAR_84 > 4))
   VAR_80->c_cflag &= ~VAR_11;
  else
   VAR_84 += 15;
 }
 VAR_84 = VAR_76[VAR_84];
 if ((VAR_80->c_cflag & VAR_10) == VAR_7) {
  if ((VAR_79->port.flags & VAR_3) == VAR_2)
   VAR_84 = 57600;
  else if ((VAR_79->port.flags & VAR_3) == VAR_5)
   VAR_84 = 115200;
  else if ((VAR_79->port.flags & VAR_3) == VAR_4)
   VAR_84 = 230400;
  else if ((VAR_79->port.flags & VAR_3) == VAR_6)
   VAR_84 = 460800;
  else if ((VAR_79->port.flags & VAR_3) == VAR_1)
   VAR_84 = (VAR_79->baud_base / VAR_79->custom_divisor);
 }
 if (VAR_84 > VAR_65)
  VAR_84 = VAR_65;

 if (VAR_84 > 0) {
  for (VAR_97 = 0; VAR_97 < VAR_14; VAR_97++) {
   VAR_83 = (VAR_79->clk / VAR_78[VAR_97]) / VAR_84;
   if (VAR_83 < 0x100)
    break;
  }
  VAR_98 = (unsigned char) VAR_83;
 }




 if ((VAR_80->c_cflag & VAR_15) == 0) {
  VAR_94 |= VAR_48;
  VAR_95 |= VAR_50;
  VAR_92 |= VAR_64;
  VAR_79->port.flags |= VAR_0;
 } else
  VAR_79->port.flags &= ~VAR_0;







 if (VAR_80->c_iflag & VAR_46) {
  VAR_86 |= VAR_31;
  VAR_87 |= VAR_33;
  if (VAR_80->c_iflag & VAR_45)
   VAR_86 |= VAR_30;
 }

 if (VAR_80->c_cflag & VAR_37) {
  VAR_86 |= VAR_29;
  VAR_94 |= VAR_40;
 }






 FUNC_2("SETPORT: portnr=%d panelnr=%d brdnr=%d\n",
  VAR_79->portnr, VAR_79->panelnr, VAR_79->brdnr);
 FUNC_2("    cor1=%x cor2=%x cor3=%x cor4=%x cor5=%x\n",
  VAR_85, VAR_86, VAR_87, VAR_88, VAR_89);
 FUNC_2("    mcor1=%x mcor2=%x rtpr=%x sreron=%x sreroff=%x\n",
  VAR_94, VAR_95, VAR_96, VAR_92, VAR_93);
 FUNC_2("    tcor=%x tbpr=%x rcor=%x rbpr=%x\n", VAR_97, VAR_98, VAR_97, VAR_98);
 FUNC_2("    schr1=%x schr2=%x schr3=%x schr4=%x\n",
  VAR_80->c_cc[VAR_73], VAR_80->c_cc[VAR_74],
  VAR_80->c_cc[VAR_73], VAR_80->c_cc[VAR_74]);

 FUNC_3(&VAR_75, VAR_82);
 FUNC_1(VAR_79->brdnr, VAR_79->pagenr);
 FUNC_7(VAR_79, VAR_9, (VAR_79->portnr & 0x3));
 VAR_91 = FUNC_6(VAR_79, VAR_63);
 FUNC_7(VAR_79, VAR_63, 0);
 if (FUNC_8(VAR_79, VAR_16, VAR_85))
  VAR_90 = 1;
 if (FUNC_8(VAR_79, VAR_28, VAR_86))
  VAR_90 = 1;
 if (FUNC_8(VAR_79, VAR_32, VAR_87))
  VAR_90 = 1;
 if (VAR_90) {
  FUNC_5(VAR_79);
  FUNC_7(VAR_79, VAR_12, VAR_13);
 }
 FUNC_7(VAR_79, VAR_34, VAR_88);
 FUNC_7(VAR_79, VAR_36, VAR_89);
 FUNC_7(VAR_79, VAR_47, VAR_94);
 FUNC_7(VAR_79, VAR_49, VAR_95);
 if (VAR_84 > 0) {
  FUNC_7(VAR_79, VAR_71, VAR_97);
  FUNC_7(VAR_79, VAR_70, VAR_98);
  FUNC_7(VAR_79, VAR_57, VAR_97);
  FUNC_7(VAR_79, VAR_56, VAR_98);
 }
 FUNC_7(VAR_79, VAR_59, VAR_80->c_cc[VAR_73]);
 FUNC_7(VAR_79, VAR_60, VAR_80->c_cc[VAR_74]);
 FUNC_7(VAR_79, VAR_61, VAR_80->c_cc[VAR_73]);
 FUNC_7(VAR_79, VAR_62, VAR_80->c_cc[VAR_74]);
 FUNC_7(VAR_79, VAR_58, VAR_96);
 VAR_94 = FUNC_6(VAR_79, VAR_51);
 if (VAR_94 & VAR_52)
  VAR_79->sigs |= VAR_72;
 else
  VAR_79->sigs &= ~VAR_72;
 FUNC_7(VAR_79, VAR_63, ((VAR_91 & ~VAR_93) | VAR_92));
 FUNC_0(VAR_79->brdnr);
 FUNC_4(&VAR_75, VAR_82);
}
