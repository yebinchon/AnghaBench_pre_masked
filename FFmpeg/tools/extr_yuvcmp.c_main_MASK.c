
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,int,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int,int*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (char*,char*) ;

int
FUNC_12(int VAR_4, char **VAR_5)
{
    int VAR_6[2];
    int VAR_7 = 0;
    int VAR_8 = 0;

    int VAR_9;
    int VAR_10;
    int VAR_11 = 0;

    if (VAR_4 < 6) {
        FUNC_3(VAR_3, "%s [YUV file 1] [YUV file 2] width height pixelcmp|blockdump (# to skip)\n", VAR_5[0]);
        return 1;
    }

    VAR_9 = FUNC_0(VAR_5[3]);
    VAR_10 = FUNC_0(VAR_5[4]);
    if (VAR_4 > 6)
        VAR_11 = FUNC_0(VAR_5[6]);

    uint8_t *VAR_12[2], *VAR_13[2][2];
    int VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18 = VAR_9 * VAR_10;
    int VAR_19 = VAR_9 * VAR_10 / 4;
    int VAR_20, VAR_21;
    int VAR_22 = VAR_9 / 2;
    int VAR_23 = VAR_11;
    int VAR_24;
    char *VAR_25;
    int VAR_26, VAR_27;
    uint8_t *VAR_28;
    uint8_t *VAR_29;
    int VAR_30 = 0;

    VAR_7 = FUNC_11(VAR_5[5], "pixelcmp") ? 1 : 0;
    VAR_8 = FUNC_11(VAR_5[5], "blockdump") ? 1 : 0;

    for(VAR_14 = 0; VAR_14 < 2; VAR_14++) {
        VAR_12[VAR_14] = FUNC_5(VAR_18);
        VAR_13[0][VAR_14] = FUNC_5(VAR_19);
        VAR_13[1][VAR_14] = FUNC_5(VAR_19);

        VAR_6[VAR_14] = FUNC_7(VAR_5[1 + VAR_14], VAR_1);
        if(VAR_6[VAR_14] == -1) {
            FUNC_8("open");
            FUNC_1(1);
        }
        FUNC_2(VAR_6[VAR_14], VAR_0, 1);

        if (VAR_11)
            FUNC_4(VAR_6[VAR_14], VAR_11 * (VAR_18 + 2*VAR_19), VAR_2);
    }

    VAR_26 = VAR_9 / 16;
    VAR_27 = VAR_10 / 16;

    VAR_25 = FUNC_5(VAR_26 * VAR_27);

    while(!VAR_30) {
        FUNC_6(VAR_25, 0, VAR_26 * VAR_27);

        FUNC_9("Loading frame %d\n", ++VAR_23);

        for(VAR_14 = 0; VAR_14 < 2; VAR_14++) {
            VAR_15 = FUNC_10(VAR_6[VAR_14], VAR_12[VAR_14], VAR_18);
            if(VAR_15 != VAR_18) {
                FUNC_3(VAR_3, "Unable to read Y from file %d, exiting\n", VAR_14 + 1);
                return 1;
            }
        }


        for(VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
            if(VAR_12[0][VAR_16] != VAR_12[1][VAR_16]) {
                VAR_20 = VAR_16 % VAR_9;
                VAR_21 = VAR_16 / VAR_9;

                VAR_24 = VAR_20 / 16 + (VAR_21 / 16) * VAR_26;

                if(VAR_7)
                    FUNC_9("Luma diff 0x%02x != 0x%02x at pixel (%4d,%-4d) mb(%d,%d) #%d\n",
                           VAR_12[0][VAR_16],
                           VAR_12[1][VAR_16],
                           VAR_20, VAR_21,
                           VAR_20 / 16,
                           VAR_21 / 16,
                           VAR_24);

                VAR_25[VAR_24] |= 1;
            }
        }



        for(VAR_17 = 0; VAR_17 < 2; VAR_17++) {

            for(VAR_14 = 0; VAR_14 < 2; VAR_14++) {
                VAR_15 = FUNC_10(VAR_6[VAR_14], VAR_13[VAR_17][VAR_14], VAR_19);
                if(VAR_15 != VAR_19) {
                    FUNC_3(VAR_3, "Unable to read %c from file %d, exiting\n",
                            "UV"[VAR_17], VAR_14 + 1);
                    return 1;
                }
            }

            for(VAR_16 = 0; VAR_16 < VAR_19; VAR_16++) {
                if(VAR_13[VAR_17][0][VAR_16] != VAR_13[VAR_17][1][VAR_16]) {
                    VAR_20 = VAR_16 % VAR_22;
                    VAR_21 = VAR_16 / VAR_22;

                    VAR_24 = VAR_20 / 8 + (VAR_21 / 8) * VAR_26;

                    VAR_25[VAR_24] |= 2 << VAR_17;

                    if(VAR_7)

                        FUNC_9("c%c diff 0x%02x != 0x%02x at pixel (%4d,%-4d) "
                               "mb(%3d,%-3d) #%d\n",
                               VAR_17 ? 'r' : 'b',
                               VAR_13[VAR_17][0][VAR_16],
                               VAR_13[VAR_17][1][VAR_16],

                               VAR_20, VAR_21,
                               VAR_20 / 8,
                               VAR_21 / 8,
                               VAR_20 / 8 + VAR_21 / 8 * VAR_22 / 8);
                }
            }
        }

        for(VAR_14 = 0; VAR_14 < VAR_26 * VAR_27; VAR_14++) {
            VAR_20 = VAR_14 % VAR_26;
            VAR_21 = VAR_14 / VAR_26;

            if(VAR_25[VAR_14]) {
                VAR_30 = 1;

                FUNC_9("MB (%3d,%-3d) %4d %d %c%c%c damaged\n",
                       VAR_20, VAR_21, VAR_14, VAR_25[VAR_14],
                       VAR_25[VAR_14] & 1 ? 'Y' : ' ',
                       VAR_25[VAR_14] & 2 ? 'U' : ' ',
                       VAR_25[VAR_14] & 4 ? 'V' : ' ');

                if(VAR_8) {
                    VAR_28 = VAR_12[0] + VAR_20 * 16 + VAR_21 * 16 * VAR_9;
                    VAR_29 = VAR_12[1] + VAR_20 * 16 + VAR_21 * 16 * VAR_9;

                    for(VAR_21 = 0; VAR_21 < 16; VAR_21++) {
                        FUNC_9("%c ", "TB"[VAR_21&1]);
                        for(VAR_20 = 0; VAR_20 < 16; VAR_20++)
                            FUNC_9("%02x%c", VAR_28[VAR_20 + VAR_21 * VAR_9],
                                   VAR_28[VAR_20 + VAR_21 * VAR_9] != VAR_29[VAR_20 + VAR_21 * VAR_9] ? '<' : ' ');

                        FUNC_9("| ");
                        for(VAR_20 = 0; VAR_20 < 16; VAR_20++)
                            FUNC_9("%02x%c", VAR_29[VAR_20 + VAR_21 * VAR_9],
                                   VAR_28[VAR_20 + VAR_21 * VAR_9] != VAR_29[VAR_20 + VAR_21 * VAR_9] ? '<' : ' ');

                        FUNC_9("\n");
                    }
                }
            }
        }
    }

    return 0;
}
