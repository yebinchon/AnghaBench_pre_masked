
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x96_rev_no; int x96_nchannels; int nchannels; int avctx; int gb; int x96_crc_present; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,int *,int,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_9(DCACoreDecoder *VAR_4)
{
    int VAR_5[VAR_2];
    int VAR_6[VAR_2];
    int VAR_7, VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12 = FUNC_6(&VAR_4->gb);


    if (FUNC_7(&VAR_4->gb, 32) != VAR_3) {
        FUNC_1(VAR_4->avctx, VAR_1, "Invalid X96 sync word\n");
        return VAR_0;
    }


    VAR_11 = FUNC_4(&VAR_4->gb, 6) + 1;


    if (FUNC_2(VAR_4->avctx, &VAR_4->gb, VAR_12 + 32, VAR_12 + VAR_11 * 8)) {
        FUNC_1(VAR_4->avctx, VAR_1, "Invalid X96 frame header checksum\n");
        return VAR_0;
    }


    VAR_4->x96_rev_no = FUNC_4(&VAR_4->gb, 4);
    if (VAR_4->x96_rev_no < 1 || VAR_4->x96_rev_no > 8) {
        FUNC_1(VAR_4->avctx, VAR_1, "Invalid X96 revision (%d)\n", VAR_4->x96_rev_no);
        return VAR_0;
    }


    VAR_4->x96_crc_present = FUNC_5(&VAR_4->gb);


    VAR_7 = FUNC_4(&VAR_4->gb, 2) + 1;


    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
        VAR_5[VAR_9] = FUNC_4(&VAR_4->gb, 12) + 1;


    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
        VAR_6[VAR_9] = FUNC_4(&VAR_4->gb, 3) + 1;




    if (FUNC_3(&VAR_4->gb, VAR_12 + VAR_11 * 8)) {
        FUNC_1(VAR_4->avctx, VAR_1, "Read past end of X96 frame header\n");
        return VAR_0;
    }

    if ((VAR_10 = FUNC_0(VAR_4)) < 0)
        return VAR_10;


    VAR_4->x96_nchannels = 0;
    for (VAR_9 = 0, VAR_8 = 0; VAR_9 < VAR_7; VAR_9++) {
        VAR_12 = FUNC_6(&VAR_4->gb);

        if (VAR_8 + VAR_6[VAR_9] <= VAR_4->nchannels) {
            VAR_4->x96_nchannels = VAR_8 + VAR_6[VAR_9];
            if ((VAR_10 = FUNC_8(VAR_4, 1, VAR_8)) < 0)
                return VAR_10;
        }

        VAR_8 += VAR_6[VAR_9];

        if (FUNC_3(&VAR_4->gb, VAR_12 + VAR_5[VAR_9] * 8)) {
            FUNC_1(VAR_4->avctx, VAR_1, "Read past end of X96 channel set\n");
            return VAR_0;
        }
    }

    return 0;
}
