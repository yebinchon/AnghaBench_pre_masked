
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonBuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(JsonBuf* VAR_2, char* VAR_3, int VAR_4) {
  FUNC_0(VAR_2);
  FUNC_2(VAR_2, VAR_1);

  if (VAR_3 != ((void*)0)) {

    char* VAR_5 = VAR_3;
    char* VAR_6 = VAR_3;

    for (int VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
      if (*VAR_6 == 0) {
        break;
      }

      if (*VAR_6 == '\"') {
        FUNC_1(VAR_2, VAR_5, (int)(VAR_6 - VAR_5));
        VAR_6++;
        VAR_5 = VAR_6;
        FUNC_1(VAR_2, "\\\"", 2);
      } else if (*VAR_6 == '\\') {
        FUNC_1(VAR_2, VAR_5, (int)(VAR_6 - VAR_5));
        VAR_6++;
        VAR_5 = VAR_6;
        FUNC_1(VAR_2, "\\\\", 2);
      } else {
        VAR_6++;
      }
    }

    if (*VAR_5) {
      FUNC_1(VAR_2, VAR_5, (int)(VAR_6 - VAR_5));
    }
  }

  FUNC_2(VAR_2, VAR_0);
}
