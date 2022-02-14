
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {unsigned int height; unsigned int width; unsigned int bytes_per_channel; unsigned int depth; int linesize; int g; } ;
typedef TYPE_1__ SgiState ;
typedef int GetByteContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_1, SgiState *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    unsigned int VAR_6 = VAR_2->height * VAR_2->width * VAR_2->bytes_per_channel;
    GetByteContext VAR_7[4];
    uint8_t *VAR_8;


    if (VAR_6 * VAR_2->depth > FUNC_0(&VAR_2->g))
        return VAR_0;


    for (VAR_5 = 0; VAR_5 < VAR_2->depth; VAR_5++) {
        VAR_7[VAR_5] = VAR_2->g;
        FUNC_3(&VAR_7[VAR_5], VAR_5 * VAR_6);
    }

    for (VAR_4 = VAR_2->height - 1; VAR_4 >= 0; VAR_4--) {
        VAR_8 = VAR_1 + (VAR_4 * VAR_2->linesize);
        if (VAR_2->bytes_per_channel == 1) {
            for (VAR_3 = VAR_2->width; VAR_3 > 0; VAR_3--)
                for (VAR_5 = 0; VAR_5 < VAR_2->depth; VAR_5++)
                    *VAR_8++ = FUNC_1(&VAR_7[VAR_5]);
        } else {
            uint16_t *VAR_9 = (uint16_t *)VAR_8;
            for (VAR_3 = VAR_2->width; VAR_3 > 0; VAR_3--)
                for (VAR_5 = 0; VAR_5 < VAR_2->depth; VAR_5++)
                    *VAR_9++ = FUNC_2(&VAR_7[VAR_5]);
        }
    }
    return 0;
}
