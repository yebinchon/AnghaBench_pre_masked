
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5(uint32_t VAR_2, int VAR_3, int VAR_4)
{
    if ((VAR_2 & VAR_1) || !(VAR_2 & VAR_0))
        goto fail;

    int VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_7 = FUNC_3(VAR_4);
    VAR_6 = FUNC_2(VAR_4) - VAR_7;
    VAR_8 = FUNC_1(VAR_3);

    switch (VAR_2)
    {
        case 130:
        case 129:
            goto fail;


        case 134:
            VAR_5 = (VAR_6 * 128) - (32 * (VAR_6 < 5));
            break;





        case 131:
            VAR_5 = (VAR_6 * 384) - (128 * (VAR_6 - 2) * (VAR_6 > 2));
            break;

        case 133:
        case 132:
            VAR_5 = VAR_6 * 32;
            break;

        case 128:
        {
            int VAR_9 = FUNC_4(VAR_4);
            int VAR_10 = VAR_6 + VAR_7 - 2 * VAR_9;

            VAR_5 = VAR_9 * 96 + VAR_10 * 64;
        } break;

        default:
            VAR_5 = VAR_6 * 80;
            break;
    }

    VAR_5 >>= VAR_8;
    return FUNC_0(VAR_2, VAR_5, VAR_3, VAR_4);

fail:
    return -1;
}
