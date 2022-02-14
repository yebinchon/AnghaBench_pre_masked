
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int year ;
typedef int day_month ;
struct TYPE_4__ {char* key; char* value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 TYPE_1__* FUNC_1 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_2 (int **,char const*,char const*,int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_6(AVDictionary **VAR_1)
{
    AVDictionaryEntry *VAR_2 = ((void*)0);
    AVDictionary *VAR_3 = ((void*)0);
    const char *VAR_4, *VAR_5;
    char VAR_6[5] = {0}, VAR_7[5] = {0};
    int VAR_8;

    while ((VAR_2 = FUNC_1(*VAR_1, "", VAR_2, VAR_0))) {
        VAR_4 = VAR_2->key;
        if (!FUNC_3(VAR_4, "date")) {

            VAR_5 = VAR_2->value;
            VAR_8 = 0;
            while (VAR_5[VAR_8] >= '0' && VAR_5[VAR_8] <= '9') VAR_8++;
            if (VAR_5[VAR_8] == '\0' || VAR_5[VAR_8] == '-') {
                FUNC_4(VAR_6, VAR_5, sizeof(VAR_6));
                FUNC_2(&VAR_3, "TYER", VAR_6, 0);

                if (VAR_5[VAR_8] == '-' &&
                    VAR_5[VAR_8+1] >= '0' && VAR_5[VAR_8+1] <= '1' &&
                    VAR_5[VAR_8+2] >= '0' && VAR_5[VAR_8+2] <= '9' &&
                    VAR_5[VAR_8+3] == '-' &&
                    VAR_5[VAR_8+4] >= '0' && VAR_5[VAR_8+4] <= '3' &&
                    VAR_5[VAR_8+5] >= '0' && VAR_5[VAR_8+5] <= '9' &&
                    (VAR_5[VAR_8+6] == '\0' || VAR_5[VAR_8+6] == ' ')) {
                    FUNC_5(VAR_7, sizeof(VAR_7), "%.2s%.2s", VAR_5 + VAR_8 + 4, VAR_5 + VAR_8 + 1);
                    FUNC_2(&VAR_3, "TDAT", VAR_7, 0);
                }
            } else
                FUNC_2(&VAR_3, VAR_4, VAR_5, 0);
        } else
            FUNC_2(&VAR_3, VAR_4, VAR_2->value, 0);
    }
    FUNC_0(VAR_1);
    *VAR_1 = VAR_3;
}
