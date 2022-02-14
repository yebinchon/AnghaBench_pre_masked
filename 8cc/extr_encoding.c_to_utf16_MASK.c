
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Buffer ;


 int * FUNC_0 () ;
 int FUNC_1 (int*,char*,char*) ;
 int FUNC_2 (int *,int) ;

Buffer *FUNC_3(char *VAR_0, int VAR_1) {
    Buffer *VAR_2 = FUNC_0();
    char *VAR_3 = VAR_0 + VAR_1;
    while (VAR_0 != VAR_3) {
        uint32_t VAR_4;
        VAR_0 += FUNC_1(&VAR_4, VAR_0, VAR_3);
        if (VAR_4 < 0x10000) {
            FUNC_2(VAR_2, VAR_4);
        } else {
            FUNC_2(VAR_2, (VAR_4 >> 10) + 0xD7C0);
            FUNC_2(VAR_2, (VAR_4 & 0x3FF) + 0xDC00);
        }
    }
    return VAR_2;
}
