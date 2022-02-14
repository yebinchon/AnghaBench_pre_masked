
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nchannels; int nsubframes; int avctx; int gb; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int*,int,int,int*) ;

__attribute__((used)) static int FUNC_8(DCACoreDecoder *VAR_6)
{
    int VAR_7[VAR_3];
    int VAR_8[VAR_3];
    int VAR_9[VAR_3 * VAR_2];
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = FUNC_5(&VAR_6->gb);


    if (FUNC_6(&VAR_6->gb, 32) != VAR_5) {
        FUNC_0(VAR_6->avctx, VAR_1, "Invalid XBR sync word\n");
        return VAR_0;
    }


    VAR_18 = FUNC_3(&VAR_6->gb, 6) + 1;


    if (FUNC_1(VAR_6->avctx, &VAR_6->gb, VAR_19 + 32, VAR_19 + VAR_18 * 8)) {
        FUNC_0(VAR_6->avctx, VAR_1, "Invalid XBR frame header checksum\n");
        return VAR_0;
    }


    VAR_10 = FUNC_3(&VAR_6->gb, 2) + 1;


    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
        VAR_7[VAR_14] = FUNC_3(&VAR_6->gb, 14) + 1;


    VAR_11 = FUNC_4(&VAR_6->gb);


    for (VAR_14 = 0, VAR_16 = 0; VAR_14 < VAR_10; VAR_14++) {
        VAR_8[VAR_14] = FUNC_3(&VAR_6->gb, 3) + 1;
        VAR_12 = FUNC_3(&VAR_6->gb, 2) + 5;
        for (VAR_15 = 0; VAR_15 < VAR_8[VAR_14]; VAR_15++, VAR_16++) {
            VAR_9[VAR_16] = FUNC_3(&VAR_6->gb, VAR_12) + 1;
            if (VAR_9[VAR_16] > VAR_4) {
                FUNC_0(VAR_6->avctx, VAR_1, "Invalid number of active XBR subbands (%d)\n", VAR_9[VAR_16]);
                return VAR_0;
            }
        }
    }




    if (FUNC_2(&VAR_6->gb, VAR_19 + VAR_18 * 8)) {
        FUNC_0(VAR_6->avctx, VAR_1, "Read past end of XBR frame header\n");
        return VAR_0;
    }


    for (VAR_14 = 0, VAR_13 = 0; VAR_14 < VAR_10; VAR_14++) {
        VAR_19 = FUNC_5(&VAR_6->gb);

        if (VAR_13 + VAR_8[VAR_14] <= VAR_6->nchannels) {
            int VAR_20, VAR_21;

            for (VAR_20 = 0, VAR_21 = 0; VAR_20 < VAR_6->nsubframes; VAR_20++) {
                if ((VAR_17 = FUNC_7(VAR_6, VAR_13,
                                              VAR_13 + VAR_8[VAR_14],
                                              VAR_9, VAR_11,
                                              VAR_20, &VAR_21)) < 0)
                    return VAR_17;
            }
        }

        VAR_13 += VAR_8[VAR_14];

        if (FUNC_2(&VAR_6->gb, VAR_19 + VAR_7[VAR_14] * 8)) {
            FUNC_0(VAR_6->avctx, VAR_1, "Read past end of XBR channel set\n");
            return VAR_0;
        }
    }

    return 0;
}
