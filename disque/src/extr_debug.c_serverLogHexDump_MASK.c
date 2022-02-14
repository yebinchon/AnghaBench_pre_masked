
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*) ;

void FUNC_2(int VAR_1, char *VAR_2, void *VAR_3, size_t VAR_4) {
    char VAR_5[65], *VAR_6;
    unsigned char *VAR_7 = VAR_3;
    char VAR_8[] = "0123456789abcdef";

    FUNC_0(VAR_1,"%s (hexdump):", VAR_2);
    VAR_6 = VAR_5;
    while(VAR_4) {
        VAR_6[0] = VAR_8[(*VAR_7)>>4];
        VAR_6[1] = VAR_8[(*VAR_7)&0xf];
        VAR_6[2] = '\0';
        VAR_6 += 2;
        VAR_4--;
        VAR_7++;
        if (VAR_6-VAR_5 == 64 || VAR_4 == 0) {
            FUNC_1(VAR_1|VAR_0,VAR_5);
            VAR_6 = VAR_5;
        }
    }
    FUNC_1(VAR_1|VAR_0,"\n");
}
