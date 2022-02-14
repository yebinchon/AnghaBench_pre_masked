
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,size_t,int,int) ;

__attribute__((used)) static void FUNC_1(char* VAR_0,size_t VAR_1,ssize_t VAR_2,ssize_t VAR_3,
          int (*VAR_4)(const void*,const void*)) {
  ssize_t VAR_5=VAR_2-1, VAR_6=VAR_3, VAR_7=VAR_2-1, VAR_8=VAR_3, VAR_9;
  char* VAR_10=VAR_0+VAR_3*VAR_1;
  if (VAR_3<=VAR_2) return;
  for (;;) {
    while (++VAR_5 != VAR_3 && VAR_4(VAR_0+VAR_5*VAR_1,VAR_10)<0) ;
    while (VAR_4(VAR_10,VAR_0+(--VAR_6)*VAR_1)<0) if (VAR_6 == VAR_2) break;
    if (VAR_5 >= VAR_6) break;
    FUNC_0(VAR_0,VAR_1,VAR_5,VAR_6);
    if (VAR_4(VAR_0+VAR_5*VAR_1,VAR_10)==0) FUNC_0(VAR_0,VAR_1,++VAR_7,VAR_5);
    if (VAR_4(VAR_10,VAR_0+VAR_6*VAR_1)==0) FUNC_0(VAR_0,VAR_1,VAR_6,--VAR_8);
  }
  FUNC_0(VAR_0,VAR_1,VAR_5,VAR_3); VAR_6 = VAR_5-1; ++VAR_5;
  for (VAR_9=VAR_2; VAR_9<VAR_7; VAR_9++, VAR_6--) FUNC_0(VAR_0,VAR_1,VAR_9,VAR_6);
  for (VAR_9=VAR_3-1; VAR_9>VAR_8; VAR_9--, VAR_5++) FUNC_0(VAR_0,VAR_1,VAR_5,VAR_9);
  FUNC_1(VAR_0,VAR_1,VAR_2,VAR_6,VAR_4);
  FUNC_1(VAR_0,VAR_1,VAR_5,VAR_3,VAR_4);
}
