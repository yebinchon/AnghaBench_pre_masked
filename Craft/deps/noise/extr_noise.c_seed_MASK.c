
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(unsigned int VAR_2) {
    FUNC_2(VAR_2);
    for (int VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        VAR_0[VAR_3] = VAR_3;
    }
    for (int VAR_4 = 255; VAR_4 > 0; VAR_4--) {
        int VAR_5;
        int VAR_6 = VAR_4 + 1;
        while (VAR_6 <= (VAR_5 = FUNC_1() / (VAR_1 / VAR_6)));
        unsigned char VAR_7 = VAR_0[VAR_4];
        unsigned char VAR_8 = VAR_0[VAR_5];
        VAR_0[VAR_4] = VAR_8;
        VAR_0[VAR_5] = VAR_7;
    }
    FUNC_0(VAR_0 + 256, VAR_0, sizeof(unsigned char) * 256);
}
