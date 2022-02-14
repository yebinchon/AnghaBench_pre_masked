
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_15 ;
 int FUNC_5 (char*,...) ;
 char* VAR_16 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,char*,int const,int const,int const) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

void FUNC_12(const char *VAR_17, const char *VAR_18)
{

    const int VAR_19 = VAR_12 | VAR_10 | VAR_11;
    int VAR_20 = 0, VAR_21 = 0;

    if (VAR_17 && *VAR_17) {
        if (!FUNC_9(VAR_17, "long"))
            VAR_20 = 1;
        else if (!FUNC_9(VAR_17, "full"))
            VAR_20 = VAR_21 = 1;
        else
            FUNC_1(((void*)0), VAR_0, "Unknown help option '%s'.\n", VAR_17);
    }

    FUNC_8();

    FUNC_5("Getting help:\n"
           "    -h      -- print basic options\n"
           "    -h long -- print more options\n"
           "    -h full -- print all options (including all format and codec specific options, very long)\n"
           "    -h type=name -- print all options for the named decoder/encoder/demuxer/muxer/filter/bsf\n"
           "    See man %s for detailed description of the options.\n"
           "\n", VAR_16);

    FUNC_7(VAR_15, "Print help / information / capabilities:",
                      VAR_8, 0, 0);

    FUNC_7(VAR_15, "Global options (affect whole program "
                      "instead of just one file:",
                      0, VAR_19 | VAR_8 | VAR_9, 0);
    if (VAR_20)
        FUNC_7(VAR_15, "Advanced global options:", VAR_9,
                          VAR_19 | VAR_8, 0);

    FUNC_7(VAR_15, "Per-file main options:", 0,
                      VAR_9 | VAR_7 | VAR_14 | VAR_13 |
                      VAR_8, VAR_19);
    if (VAR_20)
        FUNC_7(VAR_15, "Advanced per-file options:",
                          VAR_9, VAR_7 | VAR_14 | VAR_13, VAR_19);

    FUNC_7(VAR_15, "Video options:",
                      VAR_14, VAR_9 | VAR_7, 0);
    if (VAR_20)
        FUNC_7(VAR_15, "Advanced Video options:",
                          VAR_9 | VAR_14, VAR_7, 0);

    FUNC_7(VAR_15, "Audio options:",
                      VAR_7, VAR_9 | VAR_14, 0);
    if (VAR_20)
        FUNC_7(VAR_15, "Advanced Audio options:",
                          VAR_9 | VAR_7, VAR_14, 0);
    FUNC_7(VAR_15, "Subtitle options:",
                      VAR_13, 0, 0);
    FUNC_5("\n");

    if (VAR_21) {
        int VAR_22 = VAR_3 | VAR_4;
        FUNC_6(FUNC_2(), VAR_22);
        FUNC_6(FUNC_4(), VAR_22);






        FUNC_6(FUNC_3(), VAR_6 | VAR_1 | VAR_5);
        FUNC_6(FUNC_0(), VAR_6 | VAR_1 | VAR_2);
    }
}
