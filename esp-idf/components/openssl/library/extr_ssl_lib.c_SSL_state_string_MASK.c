
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;




 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

const char *FUNC_3(const SSL *VAR_0)
{
    const char *VAR_1 = "UNKWN ";

    FUNC_0(VAR_0);

    if (FUNC_2(VAR_0))
        VAR_1 = "SSLERR";
    else
    {
        switch (FUNC_1(VAR_0))
        {
            case 156:
                VAR_1 = "PINIT ";
                break;
            case 142:
                VAR_1 = "SSLOK ";
                break;
            case 145:
                VAR_1 = "TWCH";
                break;
            case 149:
                VAR_1 = "TRSH";
                break;
            case 155:
                VAR_1 = "TRSC";
                break;
            case 151:
                VAR_1 = "TRSKE";
                break;
            case 154:
                VAR_1 = "TRCR";
                break;
            case 150:
                VAR_1 = "TRSD";
                break;
            case 148:
                VAR_1 = "TWCC";
                break;
            case 143:
                VAR_1 = "TWCKE";
                break;
            case 147:
                VAR_1 = "TWCV";
                break;
            case 133:
            case 146:
                VAR_1 = "TWCCS";
                break;
            case 132:
            case 144:
                VAR_1 = "TWFIN";
                break;
            case 139:
            case 153:
                VAR_1 = "TRCCS";
                break;
            case 137:
            case 152:
                VAR_1 = "TRFIN";
                break;
            case 131:
                VAR_1 = "TWHR";
                break;
            case 138:
                VAR_1 = "TRCH";
                break;
            case 128:
                VAR_1 = "TWSH";
                break;
            case 135:
                VAR_1 = "TWSC";
                break;
            case 130:
                VAR_1 = "TWSKE";
                break;
            case 134:
                VAR_1 = "TWCR";
                break;
            case 129:
                VAR_1 = "TWSD";
                break;
            case 141:
                VAR_1 = "TRCC";
                break;
            case 136:
                VAR_1 = "TRCKE";
                break;
            case 140:
                VAR_1 = "TRCV";
                break;
            case 158:
                VAR_1 = "DRCHV";
                break;
            case 157:
                VAR_1 = "DWCHV";
                break;
            default:
                break;
        }
    }

    return VAR_1;
}
