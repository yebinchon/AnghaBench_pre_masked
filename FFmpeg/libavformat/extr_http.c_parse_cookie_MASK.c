
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int member_0; } ;
struct TYPE_3__ {char* key; scalar_t__ value; } ;
typedef int HTTPContext ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 TYPE_1__* FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int **,char*,char*,int ) ;
 int FUNC_4 () ;
 char* FUNC_5 (char const*,int) ;
 int FUNC_6 (struct tm*) ;
 scalar_t__ FUNC_7 (char const*,int **) ;
 int FUNC_8 (scalar_t__,struct tm*) ;
 char* FUNC_9 (char const*,char) ;

__attribute__((used)) static int FUNC_10(HTTPContext *VAR_4, const char *VAR_5, AVDictionary **VAR_6)
{
    AVDictionary *VAR_7 = ((void*)0);
    AVDictionaryEntry *VAR_8, *VAR_9;
    char *VAR_10, *VAR_11;


    if (FUNC_7(VAR_5, &VAR_7))
        return -1;


    VAR_9 = FUNC_2(VAR_7, "", ((void*)0), VAR_1);
    if (!VAR_9 || !VAR_9->value) {
        FUNC_1(&VAR_7);
        return -1;
    }


    if ((VAR_8 = FUNC_2(VAR_7, "expires", ((void*)0), 0)) && VAR_8->value) {
        struct tm VAR_12 = {0};
        if (!FUNC_8(VAR_8->value, &VAR_12)) {
            AVDictionaryEntry *VAR_13;


            if (FUNC_6(&VAR_12) < FUNC_4() / 1000000) {
                FUNC_1(&VAR_7);
                return 0;
            }


            VAR_13 = FUNC_2(*VAR_6, VAR_9->key, ((void*)0), 0);
            if (VAR_13 && VAR_13->value) {
                AVDictionary *VAR_14 = ((void*)0);
                if (!FUNC_7(VAR_5, &VAR_14)) {
                    VAR_13 = FUNC_2(VAR_14, "expires", ((void*)0), 0);
                    if (VAR_13 && VAR_13->value) {
                        struct tm VAR_15 = {0};
                        if (!FUNC_8(VAR_8->value, &VAR_15)) {
                            if (FUNC_6(&VAR_12) < FUNC_6(&VAR_15)) {
                                FUNC_1(&VAR_7);
                                FUNC_1(&VAR_14);
                                return -1;
                            }
                        }
                    }
                }
                FUNC_1(&VAR_14);
            }
        }
    }
    FUNC_1(&VAR_7);


    if (!(VAR_10 = FUNC_9(VAR_5, '='))) return FUNC_0(VAR_2);
    if (!(VAR_11 = FUNC_5(VAR_5, VAR_10 - VAR_5))) return FUNC_0(VAR_3);


    FUNC_3(VAR_6, VAR_11, VAR_10, VAR_0);

    return 0;
}
