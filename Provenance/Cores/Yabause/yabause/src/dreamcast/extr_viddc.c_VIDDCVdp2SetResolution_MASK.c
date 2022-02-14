
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(u16 VAR_2) {
    int VAR_3 = 0, VAR_4 = 0;

    switch(VAR_2 & 0x03) {
        case 0:
        VAR_3 = 320;
        break;
        case 1:
        VAR_3 = 352;
        break;
        case 2:
        VAR_3 = 640;
        break;
        case 3:
        VAR_3 = 704;
        break;
    }

    switch((VAR_2 >> 4) & 0x03) {
        case 0:
        VAR_4 = 224;
        break;
        case 1:
        VAR_4 = 240;
        break;
        case 2:
        VAR_4 = 256;
        break;
    }

    switch((VAR_2 >> 6) & 0x03) {
        case 2:
        case 3:
        VAR_4 <<= 1;
        default:
        break;
    }

    VAR_1 = VAR_3;
    VAR_0 = VAR_4;

    if(VAR_3 > 352 || VAR_4 > 256) {
        FUNC_1("Unsupported resolution set %d x %d\n", VAR_3, VAR_4);
        FUNC_1("Bailing out!\n");
        FUNC_0(-1);
    }
}
