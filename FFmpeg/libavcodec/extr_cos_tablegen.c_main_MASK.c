
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (double,int) ;
 double FUNC_3 (double) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int VAR_2, char *VAR_3[])
{
    int VAR_4, VAR_5;
    int VAR_6 = VAR_2 > 1 && !FUNC_4(VAR_3[1], "sin");
    int VAR_7 = VAR_2 > 1 && FUNC_5(VAR_3[1], "fixed");
    double (*VAR_8)(double) = VAR_6 ? FUNC_3 : FUNC_0;

    FUNC_1("/* This file was automatically generated. */\n");
    FUNC_1("#define FFT_FLOAT %d\n", !VAR_7);
    FUNC_1("#include \"libavcodec/%s\"\n", VAR_6 ? "rdft.h" : "fft.h");
    for (VAR_4 = 4; VAR_4 <= VAR_0; VAR_4++) {
        int VAR_9 = 1 << VAR_4;
        double VAR_10 = 2*VAR_1/VAR_9;
        FUNC_1("%s(%i) = {\n   ", VAR_6 ? "SINTABLE" : "COSTABLE", VAR_9);
        for (VAR_5 = 0; VAR_5 < VAR_9/2 - 1; VAR_5++) {
            int VAR_11 = VAR_5 > VAR_9/4 ? VAR_9/2 - VAR_5 : VAR_5;
            if (VAR_6 && VAR_5 >= VAR_9/4)
                VAR_11 = VAR_9/4 - VAR_5;
            FUNC_2(VAR_8(VAR_11*VAR_10), VAR_7);
            if ((VAR_5 & 3) == 3)
                FUNC_1("\n   ");
        }
        FUNC_2(VAR_8(VAR_6 ? -(VAR_9/4 - 1)*VAR_10 : VAR_10), VAR_7);
        FUNC_1("\n};\n");
    }
    return 0;
}
