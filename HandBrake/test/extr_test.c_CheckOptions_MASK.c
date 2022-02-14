
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int short_name; } ;
typedef TYPE_1__ hb_container_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (char*,char) ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_6( int VAR_20, char ** VAR_21 )
{
    if (VAR_13 != ((void*)0))
    {

        return 0;
    }

    if (VAR_12 == ((void*)0) && (VAR_5 == ((void*)0) || *VAR_5 == '\0'))
    {
        FUNC_1( VAR_14, "Missing input device. Run %s --help for "
                 "syntax.\n", VAR_21[0] );
        return 1;
    }


    if (VAR_18 > 0 && !VAR_19)
    {
        if (VAR_12 == ((void*)0) && (VAR_7 == ((void*)0) || *VAR_7 == '\0'))
        {
            FUNC_1( VAR_14, "Missing output file name. Run %s --help "
                     "for syntax.\n", VAR_21[0] );
            return 1;
        }

        if (VAR_4 == ((void*)0) && VAR_7 != ((void*)0))
        {

            const char *VAR_22 = FUNC_5(VAR_7, '.');
            if (VAR_22 != ((void*)0))
            {

                VAR_6 = FUNC_2(VAR_22 + 1);
            }
            hb_container_t * VAR_23 = FUNC_3(VAR_6);
            if (VAR_23 != ((void*)0))
                VAR_4 = FUNC_4(VAR_23->short_name);
        }
    }

    int VAR_24 = FUNC_0(VAR_17);
    if (VAR_24 > 0 && VAR_16 != ((void*)0))
    {
        FUNC_1(VAR_14,
                "Incompatible options: --subtitle-lang-list and --subtitle\n");
        return 1;
    }

    if (VAR_24 > 0 && VAR_15 != -1)
    {
        FUNC_1(VAR_14,
                "Incompatible options: --all-subtitles/--first-subtitle and --subtitle\n");
        return 1;
    }

    if (VAR_0 != ((void*)0) && VAR_2 != ((void*)0))
    {
        FUNC_1(VAR_14,
                "Incompatible options: --audio-lang-list and --audio\n");
        return 1;
    }

    if (VAR_0 != ((void*)0) && VAR_1 != -1)
    {
        FUNC_1(VAR_14,
                "Incompatible options: --all-audio/--first-audio and --audio\n");
        return 1;
    }

    if ((VAR_9 > 0 && VAR_8 > 0) && VAR_3 > 0)
    {
        FUNC_1(VAR_14,
                "Incompatible options: --display-width and --pixel-aspect\n");
        return 1;
    }

    if (VAR_11 != ((void*)0) && VAR_12 == ((void*)0))
    {
        FUNC_1(VAR_14,
                "Error: --preset-export-file requires option --preset-export\n");
        return 1;
    }

    if (VAR_10 != ((void*)0) && VAR_12 == ((void*)0))
    {
        FUNC_1(VAR_14,
                "Error: --preset-export-desc requires option --preset-export\n");
        return 1;
    }

    return 0;
}
