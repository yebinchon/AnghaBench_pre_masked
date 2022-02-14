
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    int VAR_0 = 0;
    if (1)
      L1: VAR_0++;
    FUNC_0(1, VAR_0);

    int VAR_1 = 0;
    if (0)
      L2: VAR_1++;
    FUNC_0(0, VAR_1);

    int VAR_2 = 0;
    switch (7) {
        if (1)
          case 5: VAR_2 += 2;
        if (0)
          case 7: VAR_2 += 3;
        if (1)
          case 6: VAR_2 += 5;
    }
    FUNC_0(8, VAR_2);
}
