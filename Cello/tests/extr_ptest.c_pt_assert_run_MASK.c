
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,char const*,char const*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;

void FUNC_2(
  int VAR_7, const char* VAR_8, const char* VAR_9, const char* VAR_10, int VAR_11) {

  VAR_5++;
  VAR_6 = VAR_6 && VAR_7;

  if (VAR_7) {
    VAR_4++;
  } else {
    FUNC_0(VAR_1,
      "        %i. Assert [ %s ] (%s:%i)\n",
      VAR_2+1, VAR_8, VAR_10, VAR_11 );
    FUNC_1(VAR_0, VAR_1);
    VAR_2++;
    VAR_3++;
  }

}
