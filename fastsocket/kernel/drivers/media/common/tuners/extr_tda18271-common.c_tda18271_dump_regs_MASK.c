
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_priv {unsigned char* tda18271_regs; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 int VAR_40 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_41, int VAR_42)
{
 struct tda18271_priv *VAR_43 = VAR_41->tuner_priv;
 unsigned char *VAR_44 = VAR_43->tda18271_regs;

 FUNC_0("=== TDA18271 REG DUMP ===\n");
 FUNC_0("ID_BYTE            = 0x%02x\n", 0xff & VAR_44[VAR_33]);
 FUNC_0("THERMO_BYTE        = 0x%02x\n", 0xff & VAR_44[VAR_39]);
 FUNC_0("POWER_LEVEL_BYTE   = 0x%02x\n", 0xff & VAR_44[VAR_38]);
 FUNC_0("EASY_PROG_BYTE_1   = 0x%02x\n", 0xff & VAR_44[VAR_28]);
 FUNC_0("EASY_PROG_BYTE_2   = 0x%02x\n", 0xff & VAR_44[VAR_29]);
 FUNC_0("EASY_PROG_BYTE_3   = 0x%02x\n", 0xff & VAR_44[VAR_30]);
 FUNC_0("EASY_PROG_BYTE_4   = 0x%02x\n", 0xff & VAR_44[VAR_31]);
 FUNC_0("EASY_PROG_BYTE_5   = 0x%02x\n", 0xff & VAR_44[VAR_32]);
 FUNC_0("CAL_POST_DIV_BYTE  = 0x%02x\n", 0xff & VAR_44[VAR_4]);
 FUNC_0("CAL_DIV_BYTE_1     = 0x%02x\n", 0xff & VAR_44[VAR_1]);
 FUNC_0("CAL_DIV_BYTE_2     = 0x%02x\n", 0xff & VAR_44[VAR_2]);
 FUNC_0("CAL_DIV_BYTE_3     = 0x%02x\n", 0xff & VAR_44[VAR_3]);
 FUNC_0("MAIN_POST_DIV_BYTE = 0x%02x\n", 0xff & VAR_44[VAR_37]);
 FUNC_0("MAIN_DIV_BYTE_1    = 0x%02x\n", 0xff & VAR_44[VAR_34]);
 FUNC_0("MAIN_DIV_BYTE_2    = 0x%02x\n", 0xff & VAR_44[VAR_35]);
 FUNC_0("MAIN_DIV_BYTE_3    = 0x%02x\n", 0xff & VAR_44[VAR_36]);


 if (!(VAR_40 & VAR_0))
  return;




 FUNC_0("EXTENDED_BYTE_1    = 0x%02x\n", 0xff & VAR_44[VAR_5]);
 FUNC_0("EXTENDED_BYTE_2    = 0x%02x\n", 0xff & VAR_44[VAR_16]);
 FUNC_0("EXTENDED_BYTE_3    = 0x%02x\n", 0xff & VAR_44[VAR_21]);
 FUNC_0("EXTENDED_BYTE_4    = 0x%02x\n", 0xff & VAR_44[VAR_22]);
 FUNC_0("EXTENDED_BYTE_5    = 0x%02x\n", 0xff & VAR_44[VAR_23]);
 FUNC_0("EXTENDED_BYTE_6    = 0x%02x\n", 0xff & VAR_44[VAR_24]);
 FUNC_0("EXTENDED_BYTE_7    = 0x%02x\n", 0xff & VAR_44[VAR_25]);
 FUNC_0("EXTENDED_BYTE_8    = 0x%02x\n", 0xff & VAR_44[VAR_26]);
 FUNC_0("EXTENDED_BYTE_9  W = 0x%02x\n", 0xff & VAR_44[VAR_27]);
 FUNC_0("EXTENDED_BYTE_10   = 0x%02x\n", 0xff & VAR_44[VAR_6]);
 FUNC_0("EXTENDED_BYTE_11   = 0x%02x\n", 0xff & VAR_44[VAR_7]);
 FUNC_0("EXTENDED_BYTE_12   = 0x%02x\n", 0xff & VAR_44[VAR_8]);
 FUNC_0("EXTENDED_BYTE_13   = 0x%02x\n", 0xff & VAR_44[VAR_9]);
 FUNC_0("EXTENDED_BYTE_14   = 0x%02x\n", 0xff & VAR_44[VAR_10]);
 FUNC_0("EXTENDED_BYTE_15   = 0x%02x\n", 0xff & VAR_44[VAR_11]);
 FUNC_0("EXTENDED_BYTE_16 W = 0x%02x\n", 0xff & VAR_44[VAR_12]);
 FUNC_0("EXTENDED_BYTE_17 W = 0x%02x\n", 0xff & VAR_44[VAR_13]);
 FUNC_0("EXTENDED_BYTE_18   = 0x%02x\n", 0xff & VAR_44[VAR_14]);
 FUNC_0("EXTENDED_BYTE_19 W = 0x%02x\n", 0xff & VAR_44[VAR_15]);
 FUNC_0("EXTENDED_BYTE_20 W = 0x%02x\n", 0xff & VAR_44[VAR_17]);
 FUNC_0("EXTENDED_BYTE_21   = 0x%02x\n", 0xff & VAR_44[VAR_18]);
 FUNC_0("EXTENDED_BYTE_22   = 0x%02x\n", 0xff & VAR_44[VAR_19]);
 FUNC_0("EXTENDED_BYTE_23   = 0x%02x\n", 0xff & VAR_44[VAR_20]);
}
