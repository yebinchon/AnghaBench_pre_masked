
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;

uint8_t *FUNC_2(int VAR_3)
{
    uint8_t *VAR_4;

    switch (VAR_3) {
    case 130:
        VAR_4 = FUNC_1(&VAR_0);
        break;

    case 129:
        VAR_4 = FUNC_1(&VAR_1);
        if (VAR_4 == ((void*)0)) {



            VAR_4 = FUNC_2(128);
        }
        break;

    case 128:
        VAR_4 = FUNC_1(&VAR_2);
        break;

    default:
        FUNC_0(0);
        VAR_4 = ((void*)0);
    }

    return VAR_4;
}
