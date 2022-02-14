
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 char* FUNC_5 (size_t) ;
 char* FUNC_6 (char*,char*,char*,char*) ;

char *FUNC_7(int VAR_2) {
 static char *VAR_3[] = {
 "",
 "CNST",
 "ARG",
 "ASGN",
 "INDIR",
 "CVC",
 "CVD",
 "CVF",
 "CVI",
 "CVP",
 "CVS",
 "CVU",
 "NEG",
 "CALL",
 "*LOAD*",
 "RET",
 "ADDRG",
 "ADDRF",
 "ADDRL",
 "ADD",
 "SUB",
 "LSH",
 "MOD",
 "RSH",
 "BAND",
 "BCOM",
 "BOR",
 "BXOR",
 "DIV",
 "MUL",
 "EQ",
 "GE",
 "GT",
 "LE",
 "LT",
 "NE",
 "JUMP",
 "LABEL",
 "AND",
 "NOT",
 "OR",
 "COND",
 "RIGHT",
 "FIELD"
 }, *VAR_4[] = {
  "0", "F", "D", "C", "S", "I", "U", "P", "V", "B",
  "10","11","12","13","14","15"
 };

 if (FUNC_1(VAR_2) >= VAR_0 && FUNC_1(VAR_2) <= VAR_1 && FUNC_3(VAR_2) == 0)
  return VAR_3[FUNC_2(VAR_2)];
 return FUNC_6("%s%s%s",
  FUNC_2(VAR_2) > 0 && FUNC_2(VAR_2) < FUNC_0(VAR_3) ?
   VAR_3[FUNC_2(VAR_2)] : FUNC_5(FUNC_2(VAR_2)),
  VAR_4[FUNC_4(VAR_2)], FUNC_3(VAR_2) > 0 ? FUNC_5(FUNC_3(VAR_2)) : "");
}
