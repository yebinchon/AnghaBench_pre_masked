
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int g; } ;
typedef TYPE_1__ Jpeg2000DecoderContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint8_t FUNC_3(Jpeg2000DecoderContext *VAR_0, int VAR_1)
{
    uint8_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    FUNC_2(&VAR_0->g);
    VAR_2 = FUNC_2(&VAR_0->g);


    VAR_3 = (VAR_2 >> 4) & 0x03;

    VAR_4 = (VAR_2 >> 6) & 0x01;
    VAR_5 = (VAR_1 - 4) / ((VAR_4 + 1) * 2 + VAR_3);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        switch (VAR_3) {
        case 0:
            break;
        case 1:
            FUNC_2(&VAR_0->g);
            break;
        case 2:
            FUNC_0(&VAR_0->g);
            break;
        case 3:
            FUNC_1(&VAR_0->g);
            break;
        }
        if (VAR_4 == 0) {
            FUNC_0(&VAR_0->g);
        } else {
            FUNC_1(&VAR_0->g);
        }
    }
    return 0;
}
