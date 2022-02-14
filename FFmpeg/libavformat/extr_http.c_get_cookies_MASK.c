
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tm {int member_0; } ;
struct TYPE_8__ {char const* value; int key; } ;
struct TYPE_7__ {int * cookie_dict; int cookies; } ;
typedef TYPE_1__ HTTPContext ;
typedef TYPE_2__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*,char*,char const*,...) ;
 int FUNC_2 (int **) ;
 TYPE_2__* FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ,char*,char*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*,char const*,int) ;
 char* FUNC_10 (char*,char*,char**) ;
 int FUNC_11 (struct tm*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,char*,int **) ;
 scalar_t__ FUNC_13 (char*,int **) ;
 int FUNC_14 (char const*,struct tm*) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static int FUNC_16(HTTPContext *VAR_3, char **VAR_4, const char *VAR_5,
                       const char *VAR_6)
{


    int VAR_7 = 0;
    char *VAR_8, *VAR_9, *VAR_10;


    FUNC_2(&VAR_3->cookie_dict);

    if (!VAR_3->cookies)
        return 0;

    VAR_10 = VAR_9 = FUNC_8(VAR_3->cookies);
    if (!VAR_10)
        return FUNC_0(VAR_2);

    *VAR_4 = ((void*)0);
    while ((VAR_8 = FUNC_10(VAR_10, "\n", &VAR_10)) && !VAR_7) {
        AVDictionary *VAR_11 = ((void*)0);
        AVDictionaryEntry *VAR_12, *VAR_13;


        if (FUNC_12(VAR_3, VAR_8, &VAR_3->cookie_dict))
            FUNC_6(VAR_3, VAR_1, "Unable to parse '%s'\n", VAR_8);


        if (FUNC_13(VAR_8, &VAR_11))
            goto skip_cookie;


        VAR_12 = FUNC_3(VAR_11, "", ((void*)0), VAR_0);
        if (!VAR_12 || !VAR_12->value)
            goto skip_cookie;


        if ((VAR_13 = FUNC_3(VAR_11, "expires", ((void*)0), 0)) && VAR_13->value) {
            struct tm VAR_14 = {0};
            if (!FUNC_14(VAR_13->value, &VAR_14)) {
                if (FUNC_11(&VAR_14) < FUNC_5() / 1000000)
                    goto skip_cookie;
            }
        }


        if ((VAR_13 = FUNC_3(VAR_11, "domain", ((void*)0), 0)) && VAR_13->value) {

            int VAR_15 = FUNC_15(VAR_6) - FUNC_15(VAR_13->value);
            if (VAR_15 < 0)
                goto skip_cookie;


            if (FUNC_7(&VAR_6[VAR_15], VAR_13->value))
                goto skip_cookie;
        }


        VAR_13 = FUNC_3(VAR_11, "path", ((void*)0), 0);
        if (!VAR_13 || FUNC_9(VAR_5, VAR_13->value, FUNC_15(VAR_13->value)))
            goto skip_cookie;


        if (!*VAR_4) {
            *VAR_4 = FUNC_1("%s=%s", VAR_12->key, VAR_12->value);
        } else {
            char *VAR_16 = *VAR_4;
            *VAR_4 = FUNC_1("%s; %s=%s", VAR_16, VAR_12->key, VAR_12->value);
            FUNC_4(VAR_16);
        }
        if (!*VAR_4)
            VAR_7 = FUNC_0(VAR_2);

    skip_cookie:
        FUNC_2(&VAR_11);
    }

    FUNC_4(VAR_9);

    return VAR_7;
}
