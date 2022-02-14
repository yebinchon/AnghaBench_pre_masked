
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint32_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(uint32_t *VAR_0, char *VAR_1, char *VAR_2) {
    int VAR_3 = FUNC_0(VAR_1[0]);
    if (VAR_3 == 0) {
        *VAR_0 = VAR_1[0];
        return 1;
    }
    if (VAR_1 + VAR_3 > VAR_2)
        FUNC_1("invalid UTF-8 sequence");
    for (int VAR_4 = 1; VAR_4 < VAR_3; VAR_4++)
        if ((VAR_1[VAR_4] & 0xC0) != 0x80)
            FUNC_1("invalid UTF-8 continuation byte");
    switch (VAR_3) {
    case 2:
        *VAR_0 = ((VAR_1[0] & 0x1F) << 6) | (VAR_1[1] & 0x3F);
        return 2;
    case 3:
        *VAR_0 = ((VAR_1[0] & 0xF) << 12) | ((VAR_1[1] & 0x3F) << 6) | (VAR_1[2] & 0x3F);
        return 3;
    case 4:
        *VAR_0 = ((VAR_1[0] & 0x7) << 18) | ((VAR_1[1] & 0x3F) << 12) | ((VAR_1[2] & 0x3F) << 6) | (VAR_1[3] & 0x3F);
        return 4;
    }
    FUNC_1("invalid UTF-8 sequence");
}
