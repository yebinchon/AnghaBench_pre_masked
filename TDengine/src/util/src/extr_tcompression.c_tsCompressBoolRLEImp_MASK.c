
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

int FUNC_3(const char *const VAR_0, const int VAR_1, char *const VAR_2) {
  int VAR_3 = 0;

  for (int VAR_4 = 0; VAR_4 < VAR_1;) {
    unsigned char VAR_5 = 1;
    char VAR_6 = VAR_0[VAR_4];

    for (++VAR_4; VAR_4 < VAR_1; VAR_4++) {
      if (VAR_0[VAR_4] == VAR_6) {
        VAR_5++;
        if (VAR_5 == FUNC_0(7)) {
          VAR_4++;
          break;
        }
      } else {
        break;
      }
    }


    if (VAR_6 == 1) {
      VAR_2[VAR_3++] = FUNC_0(1) | (VAR_5 << 1);
    } else if (VAR_6 == 0) {
      VAR_2[VAR_3++] = (VAR_5 << 1) | FUNC_0(0);
    } else {
      FUNC_2("Wrong bool value!\n");
      FUNC_1(1);
    }
  }

  return VAR_3;
}
