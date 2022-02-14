
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


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
 int FUNC_0 (char*,int) ;

uint64_t FUNC_1(int VAR_11, int *VAR_12)
{
    uint64_t VAR_13 = 0;
    int VAR_14 = VAR_10;
    switch (VAR_11)
    {

        case 130:
            break;

        case 131:
        case 132:
        case 129:
            VAR_13 = VAR_6;
            break;

        case 134:
            VAR_13 = VAR_7;
            VAR_14 = VAR_8;
            break;

        case 133:
            VAR_13 = VAR_7;
            VAR_14 = VAR_9;
            break;

        case 128:
            VAR_13 = VAR_7;
            break;

        case 138:
            VAR_13 = VAR_2;
            break;

        case 136:
            VAR_13 = VAR_4;
            break;

        case 135:
            VAR_13 = VAR_5;
            break;

        case 137:
            VAR_13 = (VAR_3|
                         VAR_0|
                         VAR_1);
            break;

        default:
            VAR_13 = VAR_7;
            FUNC_0("hb_ff_mixdown_xlat: unsupported mixdown %d", VAR_11);
            break;
    }
    if (VAR_12 != ((void*)0))
        *VAR_12 = VAR_14;
    return VAR_13;
}
