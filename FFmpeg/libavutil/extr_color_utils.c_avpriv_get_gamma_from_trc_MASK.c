
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVColorTransferCharacteristic { ____Placeholder_AVColorTransferCharacteristic } AVColorTransferCharacteristic ;
double FUNC_0(enum AVColorTransferCharacteristic VAR_0)
{
    double VAR_1;
    switch (VAR_0) {
        case 134:
        case 129:
        case 128:
        case 137:
        case 136:
        case 135:


            VAR_1 = 1.961;
            break;
        case 133:
        case 131:
            VAR_1 = 2.2;
            break;
        case 132:
            VAR_1 = 2.8;
            break;
        case 130:
            VAR_1 = 1.0;
            break;
        default:
            VAR_1 = 0.0;
    }
    return VAR_1;
}
