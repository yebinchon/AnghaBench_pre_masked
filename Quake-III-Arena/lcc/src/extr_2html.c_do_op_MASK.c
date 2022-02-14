
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(int VAR_0) {
 static char *VAR_1[] = {
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
 };
 int VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 1 || VAR_2 >= sizeof VAR_1/sizeof VAR_1[0])
  FUNC_1("%d", VAR_0);
 else
  FUNC_1("%s", VAR_1[VAR_2]);
}
