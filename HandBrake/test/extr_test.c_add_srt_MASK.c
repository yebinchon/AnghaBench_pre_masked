
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* iso639_2; } ;
typedef TYPE_1__ iso639_lang_t ;
typedef int int64_t ;
typedef int hb_value_array_t ;
typedef int hb_dict_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 (char*) ;
 int VAR_1 ;
 char** VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_11(hb_value_array_t *VAR_8, int VAR_9, int *VAR_10)
{
    char *VAR_11 = "ISO-8859-1";
    int64_t VAR_12 = 0;
    char *VAR_13 = "und";
    int VAR_14 = !*VAR_10 && VAR_1 == VAR_9 + 1 &&
               FUNC_4(VAR_0);
    *VAR_10 |= VAR_14;
    int VAR_15 = VAR_3 == VAR_9 + 1;

    if (VAR_2 && VAR_9 < FUNC_3(VAR_2) && VAR_2[VAR_9])
        VAR_11 = VAR_2[VAR_9];
    if (VAR_6 && VAR_9 < FUNC_3(VAR_6) && VAR_6[VAR_9])
        VAR_12 = FUNC_10(VAR_6[VAR_9], ((void*)0), 0);
    if (VAR_5 && VAR_9 < FUNC_3(VAR_5) && VAR_5[VAR_9])
    {
        const iso639_lang_t *VAR_16 = FUNC_9(VAR_5[VAR_9]);
        if (VAR_16 != ((void*)0))
        {
            VAR_13 = VAR_16->iso639_2;
        }
        else
        {
            FUNC_0(VAR_7, "Warning: Invalid SRT language (%s)\n",
                    VAR_5[VAR_9]);
        }
    }

    hb_dict_t *VAR_17 = FUNC_1();
    hb_dict_t *VAR_18 = FUNC_1();
    FUNC_2(VAR_17, "Import", VAR_18);
    FUNC_2(VAR_17, "Default", FUNC_6(VAR_15));
    FUNC_2(VAR_17, "Burn", FUNC_6(VAR_14));
    FUNC_2(VAR_17, "Offset", FUNC_7(VAR_12));
    FUNC_2(VAR_18, "Format", FUNC_8("SRT"));
    FUNC_2(VAR_18, "Filename", FUNC_8(VAR_4[VAR_9]));
    FUNC_2(VAR_18, "Language", FUNC_8(VAR_13));
    FUNC_2(VAR_18, "Codeset", FUNC_8(VAR_11));
    FUNC_5(VAR_8, VAR_17);
    return 0;
}
