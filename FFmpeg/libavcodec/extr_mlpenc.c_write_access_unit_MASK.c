
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {unsigned int num_substreams; } ;
typedef TYPE_1__ MLPEncodeContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int,int,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int * FUNC_2 (TYPE_1__*,int *,int,int,int *) ;

__attribute__((used)) static unsigned int FUNC_3(MLPEncodeContext *VAR_1, uint8_t *VAR_2,
                                      int VAR_3, int VAR_4)
{
    uint16_t VAR_5[VAR_0];
    uint8_t *VAR_6, *VAR_7 = VAR_2;
    unsigned int VAR_8;
    int VAR_9;

    if (VAR_3 < 4)
        return -1;


    VAR_2 += 4;
    VAR_3 -= 4;

    if (VAR_4) {
        if (VAR_3 < 28)
            return -1;
        FUNC_1(VAR_1, VAR_2, VAR_3);
        VAR_2 += 28;
        VAR_3 -= 28;
    }

    VAR_6 = VAR_2;


    for (VAR_8 = 0; VAR_8 < VAR_1->num_substreams; VAR_8++) {
        VAR_2 += 2;
        VAR_3 -= 2;
    }

    VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_9 = VAR_2 - VAR_7;

    FUNC_0(VAR_1, VAR_7, VAR_6, VAR_9 / 2, VAR_4, VAR_5);

    return VAR_9;
}
