
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(char *VAR_2, FILE *VAR_3) {
    int VAR_4 = 0, VAR_5;
    for ( ; ; ) {
        VAR_5 = FUNC_0(VAR_3);
        if (VAR_5 == '\r') continue;
        if (VAR_4 == 0 && ((VAR_5 == '\n') || (VAR_5 == VAR_0))) {
            VAR_2[VAR_4] = 0;
            return 1;
        }
        if (VAR_4 == 0 && ((VAR_5 == ' ') || (VAR_5 == '\t'))) continue;
        if ((VAR_5 == VAR_0) || (VAR_5 == ' ') || (VAR_5 == '\t') || (VAR_5 == '\n')) {
            if (VAR_5 == '\n') FUNC_1(VAR_5, VAR_3);
            break;
        }
        if (VAR_4 < VAR_1 - 1)
          VAR_2[VAR_4++] = VAR_5;
    }
    VAR_2[VAR_4] = 0;


    if (VAR_4 == VAR_1 - 1 && (VAR_2[VAR_4-1] & 0x80) == 0x80) {
        if ((VAR_2[VAR_4-1] & 0xC0) == 0xC0) {
            VAR_2[VAR_4-1] = '\0';
        } else if (VAR_4 > 2 && (VAR_2[VAR_4-2] & 0xE0) == 0xE0) {
            VAR_2[VAR_4-2] = '\0';
        } else if (VAR_4 > 3 && (VAR_2[VAR_4-3] & 0xF8) == 0xF0) {
            VAR_2[VAR_4-3] = '\0';
        }
    }
    return 0;
}
