
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {TYPE_2__* stream; } ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int extradata_size; int extradata; } ;
typedef TYPE_3__ MatroskaTrack ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 int FUNC_5 (char,char,char,char) ;
 int FUNC_6 (int **) ;
 int * FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(MatroskaTrack *VAR_3, uint8_t *VAR_4,
                                  uint8_t **VAR_5, int *VAR_6)
{
    uint8_t *VAR_7 = ((void*)0);
    int VAR_8 = 0;
    int VAR_9 = *VAR_6;
    uint32_t VAR_10;
    uint16_t VAR_11;
    int VAR_12, VAR_13 = 0;

    if (VAR_9 < 12 || VAR_3->stream->codecpar->extradata_size < 2)
        return VAR_0;

    VAR_11 = FUNC_1(VAR_3->stream->codecpar->extradata);

    VAR_10 = FUNC_2(VAR_4);
    VAR_4 += 4;
    VAR_9 -= 4;

    while (VAR_9 >= 8) {
        int VAR_14;
        uint32_t VAR_15;
        uint8_t *VAR_16;

        uint32_t VAR_17 = FUNC_2(VAR_4);
        uint32_t VAR_18 = FUNC_2(VAR_4 + 4);
        VAR_4 += 8;
        VAR_9 -= 8;

        VAR_14 = (VAR_17 & 0x1800) != 0x1800;
        if (VAR_14) {
            if (VAR_9 < 4) {
                VAR_12 = VAR_0;
                goto fail;
            }
            VAR_15 = FUNC_2(VAR_4);
            VAR_4 += 4;
            VAR_9 -= 4;
        } else
            VAR_15 = VAR_9;

        if (VAR_15 > VAR_9) {
            VAR_12 = VAR_0;
            goto fail;
        }

        VAR_16 = FUNC_7(VAR_7, VAR_8 + VAR_15 + 32 + VAR_1);
        if (!VAR_16) {
            VAR_12 = FUNC_0(VAR_2);
            goto fail;
        }
        VAR_7 = VAR_16;
        VAR_8 += VAR_15 + 32;

        FUNC_4(VAR_7 + VAR_13, FUNC_5('w', 'v', 'p', 'k'));
        FUNC_4(VAR_7 + VAR_13 + 4, VAR_15 + 24);
        FUNC_3(VAR_7 + VAR_13 + 8, VAR_11);
        FUNC_3(VAR_7 + VAR_13 + 10, 0);
        FUNC_4(VAR_7 + VAR_13 + 12, 0);
        FUNC_4(VAR_7 + VAR_13 + 16, 0);
        FUNC_4(VAR_7 + VAR_13 + 20, VAR_10);
        FUNC_4(VAR_7 + VAR_13 + 24, VAR_17);
        FUNC_4(VAR_7 + VAR_13 + 28, VAR_18);
        FUNC_8(VAR_7 + VAR_13 + 32, VAR_4, VAR_15);

        VAR_4 += VAR_15;
        VAR_9 -= VAR_15;
        VAR_13 += VAR_15 + 32;
    }

    FUNC_9(VAR_7 + VAR_8, 0, VAR_1);

    *VAR_5 = VAR_7;
    *VAR_6 = VAR_8;

    return 0;

fail:
    FUNC_6(&VAR_7);
    return VAR_12;
}
