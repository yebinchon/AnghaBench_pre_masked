
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;

void FUNC_5(char *VAR_2, char **VAR_3, int VAR_4, int64_t VAR_5, int VAR_6) {
  FUNC_0(VAR_2, 0, VAR_0);
  char *VAR_7 = VAR_2;
  VAR_7 += FUNC_3(VAR_7, "(%ld", VAR_5);
  int VAR_8 = 0;

  for (; VAR_8 < VAR_1; VAR_8++) {
    if (FUNC_4(VAR_3[VAR_8], "") == 0) {
      break;
    }
  }

  for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
    if (FUNC_4(VAR_3[VAR_9 % VAR_8], "tinyint") == 0) {
      VAR_7 += FUNC_3(VAR_7, ", %d", (int)(FUNC_1() % 128));
    } else if (FUNC_4(VAR_3[VAR_9 % VAR_8], "smallint") == 0) {
      VAR_7 += FUNC_3(VAR_7, ", %d", (int)(FUNC_1() % 32767));
    } else if (FUNC_4(VAR_3[VAR_9 % VAR_8], "int") == 0) {
      VAR_7 += FUNC_3(VAR_7, ", %d", (int)(FUNC_1() % 10));
    } else if (FUNC_4(VAR_3[VAR_9 % VAR_8], "bigint") == 0) {
      VAR_7 += FUNC_3(VAR_7, ", %ld", FUNC_1() % 2147483648);
    } else if (FUNC_4(VAR_3[VAR_9 % VAR_8], "float") == 0) {
      VAR_7 += FUNC_3(VAR_7, ", %10.4f", (float)(FUNC_1() / 1000));
    } else if (FUNC_4(VAR_3[VAR_9 % VAR_8], "double") == 0) {
      double VAR_10 = (double)(FUNC_1() / 1000000);
      VAR_7 += FUNC_3(VAR_7, ", %20.8f", VAR_10);
    } else if (FUNC_4(VAR_3[VAR_9 % VAR_8], "bool") == 0) {
      bool VAR_11 = FUNC_1() & 1;
      VAR_7 += FUNC_3(VAR_7, ", %s", VAR_11 ? "true" : "false");
    } else if (FUNC_4(VAR_3[VAR_9 % VAR_8], "binary") == 0) {
      char VAR_12[VAR_6];
      FUNC_2(VAR_12, VAR_6);
      VAR_7 += FUNC_3(VAR_7, ", %s", VAR_12);
    }
  }

  VAR_7 += FUNC_3(VAR_7, ")");
}
