
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
 int VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_11(hb_value_array_t *VAR_7, int VAR_8, int *VAR_9)
{
    int64_t VAR_10 = 0;
    char *VAR_11 = "und";
    int VAR_12 = !*VAR_9 && VAR_1 == VAR_8 + 1 &&
               FUNC_4(VAR_0);
    *VAR_9 |= VAR_12;
    int VAR_13 = VAR_2 == VAR_8 + 1;

    if (VAR_5 && VAR_8 < FUNC_3(VAR_5) && VAR_5[VAR_8])
        VAR_10 = FUNC_10(VAR_5[VAR_8], ((void*)0), 0);
    if (VAR_4 && VAR_8 < FUNC_3(VAR_4) && VAR_4[VAR_8])
    {
        const iso639_lang_t *VAR_14 = FUNC_9(VAR_4[VAR_8]);
        if (VAR_14 != ((void*)0))
        {
            VAR_11 = VAR_14->iso639_2;
        }
        else
        {
            FUNC_0(VAR_6, "Warning: Invalid SRT language (%s)\n",
                    VAR_4[VAR_8]);
        }
    }

    hb_dict_t *VAR_15 = FUNC_1();
    hb_dict_t *VAR_16 = FUNC_1();
    FUNC_2(VAR_15, "Import", VAR_16);
    FUNC_2(VAR_15, "Default", FUNC_6(VAR_13));
    FUNC_2(VAR_15, "Burn", FUNC_6(VAR_12));
    FUNC_2(VAR_15, "Offset", FUNC_7(VAR_10));
    FUNC_2(VAR_16, "Format", FUNC_8("SSA"));
    FUNC_2(VAR_16, "Filename", FUNC_8(VAR_3[VAR_8]));
    FUNC_2(VAR_16, "Language", FUNC_8(VAR_11));
    FUNC_5(VAR_7, VAR_15);
    return 0;
}
