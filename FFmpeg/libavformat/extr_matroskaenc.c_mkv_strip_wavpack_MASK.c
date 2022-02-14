
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int blocksize; int samples; int flags; int crc; scalar_t__ final; scalar_t__ initial; } ;
typedef TYPE_1__ WvHeader ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_6(const uint8_t *VAR_3, uint8_t **VAR_4, int *VAR_5)
{
    uint8_t *VAR_6;
    int VAR_7 = *VAR_5;
    int VAR_8 = 0;
    int VAR_9;

    VAR_6 = FUNC_3(VAR_7);
    if (!VAR_6)
        return FUNC_0(VAR_1);

    while (VAR_7 >= VAR_2) {
        WvHeader VAR_10;

        VAR_9 = FUNC_4(&VAR_10, VAR_3);
        if (VAR_9 < 0)
            goto fail;
        VAR_3 += VAR_2;
        VAR_7 -= VAR_2;

        if (VAR_7 < VAR_10.blocksize) {
            VAR_9 = VAR_0;
            goto fail;
        }

        if (VAR_10.initial) {
            FUNC_1(VAR_6 + VAR_8, VAR_10.samples);
            VAR_8 += 4;
        }
        FUNC_1(VAR_6 + VAR_8, VAR_10.flags);
        FUNC_1(VAR_6 + VAR_8 + 4, VAR_10.crc);
        VAR_8 += 8;

        if (!(VAR_10.initial && VAR_10.final)) {
            FUNC_1(VAR_6 + VAR_8, VAR_10.blocksize);
            VAR_8 += 4;
        }

        FUNC_5(VAR_6 + VAR_8, VAR_3, VAR_10.blocksize);
        VAR_3 += VAR_10.blocksize;
        VAR_7 -= VAR_10.blocksize;
        VAR_8 += VAR_10.blocksize;
    }

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_8;

    return 0;
fail:
    FUNC_2(&VAR_6);
    return VAR_9;
}
