
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int mode_count; int mode_mask; int prev_mask; scalar_t__* mode_blocksize; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVVorbisParseContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 int FUNC_3 (int) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int*,int) ;
 scalar_t__ FUNC_11 (int const*,char*,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int FUNC_14(AVVorbisParseContext *VAR_3,
                              const uint8_t *VAR_4, int VAR_5)
{
    GetBitContext VAR_6, VAR_7;
    uint8_t *VAR_8;
    int VAR_9, VAR_10 = 0;
    int VAR_11, VAR_12, VAR_13, VAR_14 = 0;


    if (VAR_5 < 7) {
        FUNC_2(VAR_3, VAR_1, "Setup header is too short\n");
        return VAR_0;
    }


    if (VAR_4[0] != 5) {
        FUNC_2(VAR_3, VAR_1, "Wrong packet type in Setup header\n");
        return VAR_0;
    }


    if (FUNC_11(&VAR_4[1], "vorbis", 6)) {
        FUNC_2(VAR_3, VAR_1, "Invalid packet signature in Setup header\n");
        return VAR_0;
    }


    if (!(VAR_8 = FUNC_4(VAR_5))) {
        FUNC_2(VAR_3, VAR_1, "Out of memory\n");
        return FUNC_0(VAR_2);
    }
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
        VAR_8[VAR_9] = VAR_4[VAR_5 - 1 - VAR_9];
    FUNC_10(&VAR_6, VAR_8, VAR_5 * 8);

    VAR_11 = 0;
    while (FUNC_9(&VAR_6) > 97) {
        if (FUNC_7(&VAR_6)) {
            VAR_11 = FUNC_8(&VAR_6);
            break;
        }
    }
    if (!VAR_11) {
        FUNC_2(VAR_3, VAR_1, "Invalid Setup header\n");
        VAR_10 = VAR_0;
        goto bad_header;
    }







    VAR_12 = 0;
    VAR_13 = 0;
    while (FUNC_9(&VAR_6) >= 97) {
        if (FUNC_6(&VAR_6, 8) > 63 || FUNC_6(&VAR_6, 16) || FUNC_6(&VAR_6, 16))
            break;
        FUNC_12(&VAR_6, 1);
        VAR_12++;
        if (VAR_12 > 64)
            break;
        VAR_7 = VAR_6;
        if (FUNC_6(&VAR_7, 6) + 1 == VAR_12) {
            VAR_13 = 1;
            VAR_14 = VAR_12;
        }
    }
    if (!VAR_13) {
        FUNC_2(VAR_3, VAR_1, "Invalid Setup header\n");
        VAR_10 = VAR_0;
        goto bad_header;
    }




    if (VAR_14 > 2) {
        FUNC_5(VAR_3,
                              "%d modes (either a false positive or a "
                              "sample from an unknown encoder)",
                              VAR_14);
    }


    if (VAR_14 > 63) {
        FUNC_2(VAR_3, VAR_1, "Unsupported mode count: %d\n",
               VAR_14);
        VAR_10 = VAR_0;
        goto bad_header;
    }
    VAR_3->mode_count = VAR_12 = VAR_14;


    VAR_3->mode_mask = ((1 << (FUNC_3(VAR_12 - 1) + 1)) - 1) << 1;

    VAR_3->prev_mask = (VAR_3->mode_mask | 0x1) + 1;

    FUNC_10(&VAR_6, VAR_8, VAR_5 * 8);
    FUNC_13(&VAR_6, VAR_11);
    for (VAR_9 = VAR_12 - 1; VAR_9 >= 0; VAR_9--) {
        FUNC_13(&VAR_6, 40);
        VAR_3->mode_blocksize[VAR_9] = FUNC_7(&VAR_6);
    }

bad_header:
    FUNC_1(VAR_8);
    return VAR_10;
}
