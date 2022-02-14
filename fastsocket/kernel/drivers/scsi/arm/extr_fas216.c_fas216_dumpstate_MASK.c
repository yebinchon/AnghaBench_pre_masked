
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FAS216_Info ;


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
 unsigned char FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,unsigned char,unsigned char,unsigned char,unsigned char,...) ;

__attribute__((used)) static void FUNC_2(FAS216_Info *VAR_11)
{
 unsigned char VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_0(VAR_11, VAR_9);
 VAR_13 = FUNC_0(VAR_11, VAR_10);
 VAR_14 = FUNC_0(VAR_11, VAR_8);

 FUNC_1("FAS216: CTCL=%02X CTCM=%02X CMD=%02X STAT=%02X"
        " INST=%02X IS=%02X CFIS=%02X",
  FUNC_0(VAR_11, VAR_6),
  FUNC_0(VAR_11, VAR_7),
  FUNC_0(VAR_11, VAR_1), VAR_13, VAR_14, VAR_12,
  FUNC_0(VAR_11, VAR_0));
 FUNC_1(" CNTL1=%02X CNTL2=%02X CNTL3=%02X CTCH=%02X\n",
  FUNC_0(VAR_11, VAR_2),
  FUNC_0(VAR_11, VAR_3),
  FUNC_0(VAR_11, VAR_4),
  FUNC_0(VAR_11, VAR_5));
}
