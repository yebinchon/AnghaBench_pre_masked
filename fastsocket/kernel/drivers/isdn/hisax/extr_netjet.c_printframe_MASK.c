
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {int dummy; } ;


 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int FUNC_2 (char*,char*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct IsdnCardState *VAR_0, u_char *VAR_1, int VAR_2, char *VAR_3) {
 char VAR_4[128];
 char *VAR_5 = VAR_4;
 int VAR_6=VAR_2,VAR_7;
 u_char *VAR_8 = VAR_1;

 VAR_5 += FUNC_2(VAR_5, "tiger %s(%4d)", VAR_3, VAR_2);
 while (VAR_6>0) {
  if (VAR_6>16)
   VAR_7=16;
  else
   VAR_7=VAR_6;
  FUNC_0(VAR_5, VAR_8, VAR_7);
  FUNC_1(VAR_0, VAR_4);
  VAR_8 += VAR_7;
  VAR_6 -= VAR_7;
  VAR_5 = VAR_4;
  VAR_5 += FUNC_2(VAR_5, "tiger %s      ", VAR_3);
 }
}
