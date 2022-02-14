
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 char VAR_10 ;

void FUNC_4()
{
  int *VAR_11, *VAR_12;

  if (VAR_10 == VAR_3) {
    FUNC_2();
    if (VAR_10 == '(') FUNC_2(); else { FUNC_3("%d: open paren expected\n", VAR_9); FUNC_0(-1); }
    FUNC_1(VAR_0);
    if (VAR_10 == ')') FUNC_2(); else { FUNC_3("%d: close paren expected\n", VAR_9); FUNC_0(-1); }
    *++VAR_8 = VAR_1; VAR_12 = ++VAR_8;
    FUNC_4();
    if (VAR_10 == VAR_2) {
      *VAR_12 = (int)(VAR_8 + 3); *++VAR_8 = VAR_4; VAR_12 = ++VAR_8;
      FUNC_2();
      FUNC_4();
    }
    *VAR_12 = (int)(VAR_8 + 1);
  }
  else if (VAR_10 == VAR_7) {
    FUNC_2();
    VAR_11 = VAR_8 + 1;
    if (VAR_10 == '(') FUNC_2(); else { FUNC_3("%d: open paren expected\n", VAR_9); FUNC_0(-1); }
    FUNC_1(VAR_0);
    if (VAR_10 == ')') FUNC_2(); else { FUNC_3("%d: close paren expected\n", VAR_9); FUNC_0(-1); }
    *++VAR_8 = VAR_1; VAR_12 = ++VAR_8;
    FUNC_4();
    *++VAR_8 = VAR_4; *++VAR_8 = (int)VAR_11;
    *VAR_12 = (int)(VAR_8 + 1);
  }
  else if (VAR_10 == VAR_6) {
    FUNC_2();
    if (VAR_10 != ';') FUNC_1(VAR_0);
    *++VAR_8 = VAR_5;
    if (VAR_10 == ';') FUNC_2(); else { FUNC_3("%d: semicolon expected\n", VAR_9); FUNC_0(-1); }
  }
  else if (VAR_10 == '{') {
    FUNC_2();
    while (VAR_10 != '}') FUNC_4();
    FUNC_2();
  }
  else if (VAR_10 == ';') {
    FUNC_2();
  }
  else {
    FUNC_1(VAR_0);
    if (VAR_10 == ';') FUNC_2(); else { FUNC_3("%d: semicolon expected\n", VAR_9); FUNC_0(-1); }
  }
}
