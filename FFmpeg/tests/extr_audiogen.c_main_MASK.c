
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int*,int) ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int,int) ;
 int VAR_4 ;
 int FUNC_11 (char*,char*) ;
 char* FUNC_12 (char*,char) ;

int FUNC_13(int VAR_5, char **VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    unsigned int VAR_14 = 1;
    int VAR_15[VAR_2], VAR_16[VAR_2];
    int VAR_17[VAR_2];
    int VAR_18 = 44100;
    int VAR_19 = 2;
    char *VAR_20;

    if (VAR_5 < 2 || VAR_5 > 5) {
        FUNC_8("usage: %s file [<sample rate> [<channels>] [<random seed>]]\n"
               "generate a test raw 16 bit audio stream\n"
               "If the file extension is .wav a WAVE header will be added.\n"
               "default: 44100 Hz stereo\n", VAR_6[0]);
        FUNC_1(1);
    }

    if (VAR_5 > 2) {
        VAR_18 = FUNC_0(VAR_6[2]);
        if (VAR_18 <= 0) {
            FUNC_4(VAR_4, "invalid sample rate: %d\n", VAR_18);
            return 1;
        }
    }

    if (VAR_5 > 3) {
        VAR_19 = FUNC_0(VAR_6[3]);
        if (VAR_19 < 1 || VAR_19 > VAR_2) {
            FUNC_4(VAR_4, "invalid number of channels: %d\n", VAR_19);
            return 1;
        }
    }

    if (VAR_5 > 4)
        VAR_14 = FUNC_0(VAR_6[4]);

    VAR_3 = FUNC_3(VAR_6[1], "wb");
    if (!VAR_3) {
        FUNC_7(VAR_6[1]);
        return 1;
    }

    if ((VAR_20 = FUNC_12(VAR_6[1], '.')) && !FUNC_11(VAR_20, ".wav"))
        FUNC_10(VAR_18, VAR_19, 6 * VAR_18);


    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < 1 * VAR_18; VAR_7++) {
        VAR_9 = (FUNC_5(VAR_8) * 10000) >> VAR_0;
        for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++)
            FUNC_9(VAR_9);
        VAR_8 += (1000 * VAR_1) / VAR_18;
    }


    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < 1 * VAR_18; VAR_7++) {
        VAR_9 = (FUNC_5(VAR_8) * 10000) >> VAR_0;
        for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++)
            FUNC_9(VAR_9);
        VAR_11 = 100 + (((10000 - 100) * VAR_7) / VAR_18);
        VAR_8 += (VAR_11 * VAR_1) / VAR_18;
    }


    for (VAR_7 = 0; VAR_7 < VAR_18 / 2; VAR_7++) {
        VAR_9 = FUNC_6(&VAR_14, 20000) - 10000;
        for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++)
            FUNC_9(VAR_9);
    }


    for (VAR_7 = 0; VAR_7 < VAR_18 / 2; VAR_7++) {
        VAR_9 = FUNC_6(&VAR_14, 65535) - 32768;
        for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++)
            FUNC_9(VAR_9);
    }


    for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++) {
        VAR_17[VAR_10] = 0;
        VAR_15[VAR_10] = 100 + FUNC_6(&VAR_14, 5000);
        VAR_16[VAR_10] = 100 + FUNC_6(&VAR_14, 5000);
    }
    for (VAR_7 = 0; VAR_7 < 1 * VAR_18; VAR_7++) {
        for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++) {
            VAR_9 = (FUNC_5(VAR_17[VAR_10]) * 10000) >> VAR_0;
            FUNC_9(VAR_9);
            VAR_11 = VAR_15[VAR_10] + (((VAR_16[VAR_10] - VAR_15[VAR_10]) * VAR_7) / VAR_18);
            VAR_17[VAR_10] += (VAR_11 * VAR_1) / VAR_18;
        }
    }


    VAR_8 = 0;
    VAR_13 = 0;
    for (VAR_7 = 0; VAR_7 < 2 * VAR_18; VAR_7++) {
        for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++) {
            VAR_12 = ((VAR_1 + FUNC_5(VAR_13)) * 5000) >> VAR_0;
            if (VAR_10 & 1)
                VAR_12 = 10000 - VAR_12;
            VAR_9 = (FUNC_5(VAR_8) * VAR_12) >> VAR_0;
            FUNC_9(VAR_9);
            VAR_8 += (500 * VAR_1) / VAR_18;
            VAR_13 += (2 * VAR_1) / VAR_18;
        }
    }

    FUNC_2(VAR_3);
    return 0;
}
