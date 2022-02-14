
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 char VAR_10 ;
 size_t VAR_11 ;
 char VAR_12 ;
 int VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 int VAR_16 ;
 char VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char VAR_21 ;
 int VAR_22 ;
 char VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 char VAR_26 ;
 char VAR_27 ;
 char VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 char VAR_36 ;
 char VAR_37 ;
 int VAR_38 ;
 char VAR_39 ;
 char VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 char VAR_43 ;
 char VAR_44 ;
 int VAR_45 ;
 char VAR_46 ;
 char VAR_47 ;
 int VAR_48 ;
 char VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 char VAR_57 ;
 char VAR_58 ;
 char VAR_59 ;
 char VAR_60 ;
 int VAR_61 ;
 size_t VAR_62 ;
 size_t VAR_63 ;
 int VAR_64 ;
 char VAR_65 ;
 char* VAR_66 ;
 int* VAR_67 ;
 int FUNC_0 (int) ;
 int* VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,...) ;
 char VAR_72 ;
 int VAR_73 ;

void FUNC_3(int VAR_74)
{
  int VAR_75, *VAR_76;

  if (!VAR_72) { FUNC_2("%d: unexpected eof in expression\n", VAR_70); FUNC_0(-1); }
  else if (VAR_72 == VAR_47) { *++VAR_67 = VAR_24; *++VAR_67 = VAR_69; FUNC_1(); VAR_73 = VAR_25; }
  else if (VAR_72 == '"') {
    *++VAR_67 = VAR_24; *++VAR_67 = VAR_69; FUNC_1();
    while (VAR_72 == '"') FUNC_1();
    VAR_66 = (char *)((int)VAR_66 + sizeof(int) & -sizeof(int)); VAR_73 = VAR_51;
  }
  else if (VAR_72 == VAR_59) {
    FUNC_1(); if (VAR_72 == '(') FUNC_1(); else { FUNC_2("%d: open paren expected in sizeof\n", VAR_70); FUNC_0(-1); }
    VAR_73 = VAR_25; if (VAR_72 == VAR_28) FUNC_1(); else if (VAR_72 == VAR_10) { FUNC_1(); VAR_73 = VAR_9; }
    while (VAR_72 == VAR_44) { FUNC_1(); VAR_73 = VAR_73 + VAR_51; }
    if (VAR_72 == ')') FUNC_1(); else { FUNC_2("%d: close paren expected in sizeof\n", VAR_70); FUNC_0(-1); }
    *++VAR_67 = VAR_24; *++VAR_67 = (VAR_73 == VAR_9) ? sizeof(char) : sizeof(int);
    VAR_73 = VAR_25;
  }
  else if (VAR_72 == VAR_26) {
    VAR_76 = VAR_68; FUNC_1();
    if (VAR_72 == '(') {
      FUNC_1();
      VAR_75 = 0;
      while (VAR_72 != ')') { FUNC_3(VAR_5); *++VAR_67 = VAR_50; ++VAR_75; if (VAR_72 == ',') FUNC_1(); }
      FUNC_1();
      if (VAR_76[VAR_11] == VAR_61) *++VAR_67 = VAR_76[VAR_63];
      else if (VAR_76[VAR_11] == VAR_18) { *++VAR_67 = VAR_30; *++VAR_67 = VAR_76[VAR_63]; }
      else { FUNC_2("%d: bad function call\n", VAR_70); FUNC_0(-1); }
      if (VAR_75) { *++VAR_67 = VAR_1; *++VAR_67 = VAR_75; }
      VAR_73 = VAR_76[VAR_62];
    }
    else if (VAR_76[VAR_11] == VAR_47) { *++VAR_67 = VAR_24; *++VAR_67 = VAR_76[VAR_63]; VAR_73 = VAR_25; }
    else {
      if (VAR_76[VAR_11] == VAR_38) { *++VAR_67 = VAR_33; *++VAR_67 = VAR_71 - VAR_76[VAR_63]; }
      else if (VAR_76[VAR_11] == VAR_22) { *++VAR_67 = VAR_24; *++VAR_67 = VAR_76[VAR_63]; }
      else { FUNC_2("%d: undefined variable\n", VAR_70); FUNC_0(-1); }
      *++VAR_67 = ((VAR_73 = VAR_76[VAR_62]) == VAR_9) ? VAR_31 : VAR_34;
    }
  }
  else if (VAR_72 == '(') {
    FUNC_1();
    if (VAR_72 == VAR_28 || VAR_72 == VAR_10) {
      VAR_75 = (VAR_72 == VAR_28) ? VAR_25 : VAR_9; FUNC_1();
      while (VAR_72 == VAR_44) { FUNC_1(); VAR_75 = VAR_75 + VAR_51; }
      if (VAR_72 == ')') FUNC_1(); else { FUNC_2("%d: bad cast\n", VAR_70); FUNC_0(-1); }
      FUNC_3(VAR_27);
      VAR_73 = VAR_75;
    }
    else {
      FUNC_3(VAR_5);
      if (VAR_72 == ')') FUNC_1(); else { FUNC_2("%d: close paren expected\n", VAR_70); FUNC_0(-1); }
    }
  }
  else if (VAR_72 == VAR_44) {
    FUNC_1(); FUNC_3(VAR_27);
    if (VAR_73 > VAR_25) VAR_73 = VAR_73 - VAR_51; else { FUNC_2("%d: bad dereference\n", VAR_70); FUNC_0(-1); }
    *++VAR_67 = (VAR_73 == VAR_9) ? VAR_31 : VAR_34;
  }
  else if (VAR_72 == VAR_4) {
    FUNC_1(); FUNC_3(VAR_27);
    if (*VAR_67 == VAR_31 || *VAR_67 == VAR_34) --VAR_67; else { FUNC_2("%d: bad address-of\n", VAR_70); FUNC_0(-1); }
    VAR_73 = VAR_73 + VAR_51;
  }
  else if (VAR_72 == '!') { FUNC_1(); FUNC_3(VAR_27); *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = 0; *++VAR_67 = VAR_16; VAR_73 = VAR_25; }
  else if (VAR_72 == '~') { FUNC_1(); FUNC_3(VAR_27); *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = -1; *++VAR_67 = VAR_64; VAR_73 = VAR_25; }
  else if (VAR_72 == VAR_3) { FUNC_1(); FUNC_3(VAR_27); VAR_73 = VAR_25; }
  else if (VAR_72 == VAR_60) {
    FUNC_1(); *++VAR_67 = VAR_24;
    if (VAR_72 == VAR_47) { *++VAR_67 = -VAR_69; FUNC_1(); } else { *++VAR_67 = -1; *++VAR_67 = VAR_50; FUNC_3(VAR_27); *++VAR_67 = VAR_42; }
    VAR_73 = VAR_25;
  }
  else if (VAR_72 == VAR_27 || VAR_72 == VAR_14) {
    VAR_75 = VAR_72; FUNC_1(); FUNC_3(VAR_27);
    if (*VAR_67 == VAR_31) { *VAR_67 = VAR_50; *++VAR_67 = VAR_31; }
    else if (*VAR_67 == VAR_34) { *VAR_67 = VAR_50; *++VAR_67 = VAR_34; }
    else { FUNC_2("%d: bad lvalue in pre-increment\n", VAR_70); FUNC_0(-1); }
    *++VAR_67 = VAR_50;
    *++VAR_67 = VAR_24; *++VAR_67 = (VAR_73 > VAR_51) ? sizeof(int) : sizeof(char);
    *++VAR_67 = (VAR_75 == VAR_27) ? VAR_0 : VAR_56;
    *++VAR_67 = (VAR_73 == VAR_9) ? VAR_52 : VAR_55;
  }
  else { FUNC_2("%d: bad expression\n", VAR_70); FUNC_0(-1); }

  while (VAR_72 >= VAR_74) {
    VAR_75 = VAR_73;
    if (VAR_72 == VAR_5) {
      FUNC_1();
      if (*VAR_67 == VAR_31 || *VAR_67 == VAR_34) *VAR_67 = VAR_50; else { FUNC_2("%d: bad lvalue in assignment\n", VAR_70); FUNC_0(-1); }
      FUNC_3(VAR_5); *++VAR_67 = ((VAR_73 = VAR_75) == VAR_9) ? VAR_52 : VAR_55;
    }
    else if (VAR_72 == VAR_12) {
      FUNC_1();
      *++VAR_67 = VAR_7; VAR_76 = ++VAR_67;
      FUNC_3(VAR_5);
      if (VAR_72 == ':') FUNC_1(); else { FUNC_2("%d: conditional missing colon\n", VAR_70); FUNC_0(-1); }
      *VAR_76 = (int)(VAR_67 + 3); *++VAR_67 = VAR_29; VAR_76 = ++VAR_67;
      FUNC_3(VAR_12);
      *VAR_76 = (int)(VAR_67 + 1);
    }
    else if (VAR_72 == VAR_39) { FUNC_1(); *++VAR_67 = VAR_6; VAR_76 = ++VAR_67; FUNC_3(VAR_36); *VAR_76 = (int)(VAR_67 + 1); VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_36) { FUNC_1(); *++VAR_67 = VAR_7; VAR_76 = ++VAR_67; FUNC_3(VAR_49); *VAR_76 = (int)(VAR_67 + 1); VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_49) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_65); *++VAR_67 = VAR_48; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_65) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_4); *++VAR_67 = VAR_64; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_4) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_17); *++VAR_67 = VAR_2; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_17) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_40); *++VAR_67 = VAR_16; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_46) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_40); *++VAR_67 = VAR_45; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_40) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_57); *++VAR_67 = VAR_35; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_23) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_57); *++VAR_67 = VAR_20; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_37) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_57); *++VAR_67 = VAR_32; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_21) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_57); *++VAR_67 = VAR_19; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_57) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_3); *++VAR_67 = VAR_53; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_58) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_3); *++VAR_67 = VAR_54; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_3) {
      FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_44);
      if ((VAR_73 = VAR_75) > VAR_51) { *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = sizeof(int); *++VAR_67 = VAR_42; }
      *++VAR_67 = VAR_0;
    }
    else if (VAR_72 == VAR_60) {
      FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_44);
      if (VAR_75 > VAR_51 && VAR_75 == VAR_73) { *++VAR_67 = VAR_56; *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = sizeof(int); *++VAR_67 = VAR_13; VAR_73 = VAR_25; }
      else if ((VAR_73 = VAR_75) > VAR_51) { *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = sizeof(int); *++VAR_67 = VAR_42; *++VAR_67 = VAR_56; }
      else *++VAR_67 = VAR_56;
    }
    else if (VAR_72 == VAR_44) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_27); *++VAR_67 = VAR_42; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_15) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_27); *++VAR_67 = VAR_13; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_43) { FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_27); *++VAR_67 = VAR_41; VAR_73 = VAR_25; }
    else if (VAR_72 == VAR_27 || VAR_72 == VAR_14) {
      if (*VAR_67 == VAR_31) { *VAR_67 = VAR_50; *++VAR_67 = VAR_31; }
      else if (*VAR_67 == VAR_34) { *VAR_67 = VAR_50; *++VAR_67 = VAR_34; }
      else { FUNC_2("%d: bad lvalue in post-increment\n", VAR_70); FUNC_0(-1); }
      *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = (VAR_73 > VAR_51) ? sizeof(int) : sizeof(char);
      *++VAR_67 = (VAR_72 == VAR_27) ? VAR_0 : VAR_56;
      *++VAR_67 = (VAR_73 == VAR_9) ? VAR_52 : VAR_55;
      *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = (VAR_73 > VAR_51) ? sizeof(int) : sizeof(char);
      *++VAR_67 = (VAR_72 == VAR_27) ? VAR_56 : VAR_0;
      FUNC_1();
    }
    else if (VAR_72 == VAR_8) {
      FUNC_1(); *++VAR_67 = VAR_50; FUNC_3(VAR_5);
      if (VAR_72 == ']') FUNC_1(); else { FUNC_2("%d: close bracket expected\n", VAR_70); FUNC_0(-1); }
      if (VAR_75 > VAR_51) { *++VAR_67 = VAR_50; *++VAR_67 = VAR_24; *++VAR_67 = sizeof(int); *++VAR_67 = VAR_42; }
      else if (VAR_75 < VAR_51) { FUNC_2("%d: pointer type expected\n", VAR_70); FUNC_0(-1); }
      *++VAR_67 = VAR_0;
      *++VAR_67 = ((VAR_73 = VAR_75 - VAR_51) == VAR_9) ? VAR_31 : VAR_34;
    }
    else { FUNC_2("%d: compiler error tk=%d\n", VAR_70, VAR_72); FUNC_0(-1); }
  }
}
