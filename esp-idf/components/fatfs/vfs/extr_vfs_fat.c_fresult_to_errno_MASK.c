
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(FRESULT VAR_13)
{
    switch(VAR_13) {
        case 146: return VAR_5;
        case 144:
            FUNC_0(0 && "fatfs internal error");
            return VAR_5;
        case 135: return VAR_7;
        case 134: return VAR_8;
        case 132: return VAR_8;
        case 142: return VAR_4;
        case 147: return VAR_0;
        case 145: return VAR_2;
        case 141: return VAR_1;
        case 128: return VAR_0;
        case 143: return VAR_11;
        case 137: return VAR_7;
        case 133: return VAR_7;
        case 138: return VAR_3;
        case 130: return VAR_12;
        case 139: return VAR_0;
        case 136: return VAR_9;
        case 129: return VAR_6;
        case 140: return VAR_4;
        case 131: return 0;
    }
    FUNC_0(0 && "unhandled FRESULT");
    return VAR_10;
}
