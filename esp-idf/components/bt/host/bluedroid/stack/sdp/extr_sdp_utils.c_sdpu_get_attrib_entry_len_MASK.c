
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int len; } ;
typedef TYPE_1__ tSDP_ATTRIBUTE ;
typedef int UINT16 ;







UINT16 FUNC_0(tSDP_ATTRIBUTE *VAR_0)
{
    UINT16 VAR_1 = 3;



    switch (VAR_0->type) {
    case 129:
    case 130:
    case 131:
    case 128:






        {






            {
                VAR_1 += 2;
            }
        }
        VAR_1 += VAR_0->len;
        return VAR_1;
    }


    switch (VAR_0->len) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
        VAR_1 += 1;
        break;
    default:
        VAR_1 += 2;
        break;
    }

    VAR_1 += VAR_0->len;
    return VAR_1;
}
