
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_4 ;

void FUNC_2(int VAR_5, int VAR_6) {
  if (VAR_5 > 0) {
    if (VAR_6 == VAR_1) {
      FUNC_1(VAR_4, "\033[%dD", VAR_5);
    } else if (VAR_6 == VAR_2) {
      FUNC_1(VAR_4, "\033[%dC", VAR_5);
    } else if (VAR_6 == VAR_3) {
      FUNC_1(VAR_4, "\033[%dA", VAR_5);
    } else if (VAR_6 == VAR_0) {
      FUNC_1(VAR_4, "\033[%dB", VAR_5);
    }
    FUNC_0(VAR_4);
  }
}
