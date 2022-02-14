
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int height; int depth; int width; int bytes_per_channel; int g; int linesize; } ;
typedef TYPE_1__ SgiState ;
typedef int GetByteContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int,int) ;
 int FUNC_4 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static int FUNC_5(uint8_t *VAR_2, SgiState *VAR_3)
{
    uint8_t *VAR_4;
    unsigned int VAR_5 = VAR_3->height * VAR_3->depth * 4;
    GetByteContext VAR_6 = VAR_3->g;
    unsigned int VAR_7, VAR_8;
    unsigned int VAR_9;
    int VAR_10, VAR_11;


    if (VAR_5 * 2 > FUNC_1(&VAR_3->g)) {
        return VAR_0;
    }

    for (VAR_8 = 0; VAR_8 < VAR_3->depth; VAR_8++) {
        VAR_4 = VAR_2;
        for (VAR_7 = 0; VAR_7 < VAR_3->height; VAR_7++) {
            VAR_10 = VAR_3->width * VAR_3->depth;
            VAR_4 -= VAR_3->linesize;
            VAR_9 = FUNC_0(&VAR_6);
            FUNC_2(&VAR_3->g, VAR_9, VAR_1);
            if (VAR_3->bytes_per_channel == 1)
                VAR_11 = FUNC_4(VAR_3, VAR_4 + VAR_8, VAR_10, VAR_3->depth);
            else
                VAR_11 = FUNC_3(VAR_3, (uint16_t *)VAR_4 + VAR_8, VAR_10, VAR_3->depth);
            if (VAR_11 != VAR_3->width)
                return VAR_0;
        }
    }
    return 0;
}
