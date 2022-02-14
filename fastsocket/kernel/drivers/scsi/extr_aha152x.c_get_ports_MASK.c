
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 size_t VAR_41 ;



 int VAR_42 ;



 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
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
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_2 (char*,...) ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 size_t VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 TYPE_1__* VAR_85 ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_86, char *VAR_87)
{
 char *VAR_88 = VAR_87;
 int VAR_89;

 FUNC_2("\n%s: %s(%s) ", VAR_6 ? "on bus" : "waiting", VAR_85[VAR_75].name, VAR_85[VAR_41].name);

 VAR_89 = FUNC_0(VAR_49);
 FUNC_2("SCSISEQ( ");
 if (VAR_89 & VAR_81)
  FUNC_2("TARGET MODE ");
 if (VAR_89 & VAR_31)
  FUNC_2("SELO ");
 if (VAR_89 & VAR_29)
  FUNC_2("SELI ");
 if (VAR_89 & VAR_24)
  FUNC_2("RESELI ");
 if (VAR_89 & VAR_16)
  FUNC_2("AUTOATNO ");
 if (VAR_89 & VAR_15)
  FUNC_2("AUTOATNI ");
 if (VAR_89 & VAR_17)
  FUNC_2("AUTOATNP ");
 if (VAR_89 & VAR_48)
  FUNC_2("SCSIRSTO ");
 FUNC_2(");");

 FUNC_2(" SCSISIG(");
 VAR_89 = FUNC_0(VAR_50);
 switch (VAR_89 & VAR_42) {
 case 131:
  FUNC_2("DATA OUT");
  break;
 case 132:
  FUNC_2("DATA IN");
  break;
 case 133:
  FUNC_2("COMMAND");
  break;
 case 128:
  FUNC_2("STATUS");
  break;
 case 129:
  FUNC_2("MESSAGE OUT");
  break;
 case 130:
  FUNC_2("MESSAGE IN");
  break;
 default:
  FUNC_2("*invalid*");
  break;
 }

 FUNC_2("); ");

 FUNC_2("INTSTAT (%s); ", FUNC_3(VAR_13, VAR_38) ? "hi" : "lo");

 FUNC_2("SSTAT( ");
 VAR_89 = FUNC_0(VAR_70);
 if (VAR_89 & VAR_80)
  FUNC_2("TARGET ");
 if (VAR_89 & VAR_53)
  FUNC_2("SELDO ");
 if (VAR_89 & VAR_52)
  FUNC_2("SELDI ");
 if (VAR_89 & VAR_55)
  FUNC_2("SELINGO ");
 if (VAR_89 & VAR_77)
  FUNC_2("SWRAP ");
 if (VAR_89 & VAR_51)
  FUNC_2("SDONE ");
 if (VAR_89 & VAR_69)
  FUNC_2("SPIORDY ");
 if (VAR_89 & VAR_11)
  FUNC_2("DMADONE ");

 VAR_89 = FUNC_0(VAR_71);
 if (VAR_89 & VAR_56)
  FUNC_2("SELTO ");
 if (VAR_89 & VAR_1)
  FUNC_2("ATNTARG ");
 if (VAR_89 & VAR_47)
  FUNC_2("SCSIRSTI ");
 if (VAR_89 & VAR_40)
  FUNC_2("PHASEMIS ");
 if (VAR_89 & VAR_2)
  FUNC_2("BUSFREE ");
 if (VAR_89 & VAR_46)
  FUNC_2("SCSIPERR ");
 if (VAR_89 & VAR_39)
  FUNC_2("PHASECHG ");
 if (VAR_89 & VAR_43)
  FUNC_2("REQINIT ");
 FUNC_2("); ");


 FUNC_2("SSTAT( ");

 VAR_89 = FUNC_0(VAR_70) & FUNC_0(VAR_65);

 if (VAR_89 & VAR_80)
  FUNC_2("TARGET ");
 if (VAR_89 & VAR_53)
  FUNC_2("SELDO ");
 if (VAR_89 & VAR_52)
  FUNC_2("SELDI ");
 if (VAR_89 & VAR_55)
  FUNC_2("SELINGO ");
 if (VAR_89 & VAR_77)
  FUNC_2("SWRAP ");
 if (VAR_89 & VAR_51)
  FUNC_2("SDONE ");
 if (VAR_89 & VAR_69)
  FUNC_2("SPIORDY ");
 if (VAR_89 & VAR_11)
  FUNC_2("DMADONE ");

 VAR_89 = FUNC_0(VAR_71) & FUNC_0(VAR_66);

 if (VAR_89 & VAR_56)
  FUNC_2("SELTO ");
 if (VAR_89 & VAR_1)
  FUNC_2("ATNTARG ");
 if (VAR_89 & VAR_47)
  FUNC_2("SCSIRSTI ");
 if (VAR_89 & VAR_40)
  FUNC_2("PHASEMIS ");
 if (VAR_89 & VAR_2)
  FUNC_2("BUSFREE ");
 if (VAR_89 & VAR_46)
  FUNC_2("SCSIPERR ");
 if (VAR_89 & VAR_39)
  FUNC_2("PHASECHG ");
 if (VAR_89 & VAR_43)
  FUNC_2("REQINIT ");
 FUNC_2("); ");

 FUNC_2("SXFRCTL0( ");

 VAR_89 = FUNC_0(VAR_78);
 if (VAR_89 & VAR_45)
  FUNC_2("SCSIEN ");
 if (VAR_89 & VAR_12)
  FUNC_2("DMAEN ");
 if (VAR_89 & VAR_3)
  FUNC_2("CH1 ");
 if (VAR_89 & VAR_5)
  FUNC_2("CLRSTCNT ");
 if (VAR_89 & VAR_68)
  FUNC_2("SPIOEN ");
 if (VAR_89 & VAR_4)
  FUNC_2("CLRCH1 ");
 FUNC_2("); ");

 FUNC_2("SIGNAL( ");

 VAR_89 = FUNC_0(VAR_50);
 if (VAR_89 & VAR_61)
  FUNC_2("ATNI ");
 if (VAR_89 & VAR_64)
  FUNC_2("SELI ");
 if (VAR_89 & VAR_62)
  FUNC_2("BSYI ");
 if (VAR_89 & VAR_63)
  FUNC_2("REQI ");
 if (VAR_89 & VAR_60)
  FUNC_2("ACKI ");
 FUNC_2("); ");

 FUNC_2("SELID(%02x), ", FUNC_0(VAR_54));

 FUNC_2("STCNT(%d), ", FUNC_1());

 FUNC_2("SSTAT2( ");

 VAR_89 = FUNC_0(VAR_72);
 if (VAR_89 & VAR_67)
  FUNC_2("SOFFSET ");
 if (VAR_89 & VAR_57)
  FUNC_2("SEMPTY ");
 if (VAR_89 & VAR_59)
  FUNC_2("SFULL ");
 FUNC_2("); SFCNT (%d); ", VAR_89 & (VAR_59 | VAR_58));

 VAR_89 = FUNC_0(VAR_73);
 FUNC_2("SCSICNT (%d), OFFCNT(%d), ", (VAR_89 & 0xf0) >> 4, VAR_89 & 0x0f);

 FUNC_2("SSTAT4( ");
 VAR_89 = FUNC_0(VAR_74);
 if (VAR_89 & VAR_79)
  FUNC_2("SYNCERR ");
 if (VAR_89 & VAR_36)
  FUNC_2("FWERR ");
 if (VAR_89 & VAR_35)
  FUNC_2("FRERR ");
 FUNC_2("); ");

 FUNC_2("DMACNTRL0( ");
 VAR_89 = FUNC_0(VAR_10);
 FUNC_2("%s ", VAR_89 & VAR_84 ? "8BIT" : "16BIT");
 FUNC_2("%s ", VAR_89 & VAR_9 ? "DMA" : "PIO");
 FUNC_2("%s ", VAR_89 & VAR_83 ? "WRITE" : "READ");
 if (VAR_89 & VAR_19)
  FUNC_2("ENDMA ");
 if (VAR_89 & VAR_37)
  FUNC_2("INTEN ");
 if (VAR_89 & VAR_44)
  FUNC_2("RSTFIFO ");
 if (VAR_89 & VAR_76)
  FUNC_2("SWINT ");
 FUNC_2("); ");

 FUNC_2("DMASTAT( ");
 VAR_89 = FUNC_0(VAR_13);
 if (VAR_89 & VAR_0)
  FUNC_2("ATDONE ");
 if (VAR_89 & VAR_82)
  FUNC_2("WORDRDY ");
 if (VAR_89 & VAR_8)
  FUNC_2("DFIFOFULL ");
 if (VAR_89 & VAR_7)
  FUNC_2("DFIFOEMP ");
 FUNC_2(")\n");

 FUNC_2("enabled interrupts( ");

 VAR_89 = FUNC_0(VAR_65);
 if (VAR_89 & VAR_28)
  FUNC_2("ENSELDO ");
 if (VAR_89 & VAR_27)
  FUNC_2("ENSELDI ");
 if (VAR_89 & VAR_30)
  FUNC_2("ENSELINGO ");
 if (VAR_89 & VAR_34)
  FUNC_2("ENSWRAP ");
 if (VAR_89 & VAR_26)
  FUNC_2("ENSDONE ");
 if (VAR_89 & VAR_33)
  FUNC_2("ENSPIORDY ");
 if (VAR_89 & VAR_20)
  FUNC_2("ENDMADONE ");

 VAR_89 = FUNC_0(VAR_66);
 if (VAR_89 & VAR_32)
  FUNC_2("ENSELTIMO ");
 if (VAR_89 & VAR_14)
  FUNC_2("ENATNTARG ");
 if (VAR_89 & VAR_22)
  FUNC_2("ENPHASEMIS ");
 if (VAR_89 & VAR_18)
  FUNC_2("ENBUSFREE ");
 if (VAR_89 & VAR_25)
  FUNC_2("ENSCSIPERR ");
 if (VAR_89 & VAR_21)
  FUNC_2("ENPHASECHG ");
 if (VAR_89 & VAR_23)
  FUNC_2("ENREQINIT ");
 FUNC_2(")\n");

 return (VAR_87 - VAR_88);
}
