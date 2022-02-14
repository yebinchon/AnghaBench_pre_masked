
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; } ;
typedef TYPE_1__ AVPacket ;



__attribute__((used)) static void FUNC_0(AVPacket * const *VAR_0, int VAR_1,
                  unsigned *VAR_2, unsigned *VAR_3)
{
    int VAR_4;
    unsigned VAR_5 = 0, VAR_6 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        unsigned VAR_7 = VAR_0[VAR_4]->size;

        if (VAR_7 > VAR_5)
            VAR_5 = VAR_7;
        VAR_6 += VAR_7;
    }

    *VAR_2 = VAR_5;
    *VAR_3 = VAR_6;
}
