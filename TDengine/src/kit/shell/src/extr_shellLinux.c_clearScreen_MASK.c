
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,struct winsize*) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;

void FUNC_4(int VAR_5, int VAR_6) {
  struct winsize VAR_7;
  FUNC_2(0, VAR_2, &VAR_7);

  int VAR_8 = VAR_6 / VAR_7.ws_col;
  int VAR_9 = VAR_6 % VAR_7.ws_col;
  int VAR_10 = VAR_5 / VAR_7.ws_col;
  FUNC_3(VAR_9, VAR_1);
  FUNC_3(VAR_10 - VAR_8, VAR_0);
  FUNC_1(VAR_4, "\033[2K");
  for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
    FUNC_3(1, VAR_3);
    FUNC_1(VAR_4, "\033[2K");
  }
  FUNC_0(VAR_4);
}
