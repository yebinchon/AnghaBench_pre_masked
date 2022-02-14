
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 TYPE_1__* FUNC_4 (int,int) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (char*,TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static int FUNC_9(const char *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    char *VAR_9, *VAR_10 = FUNC_5(VAR_5);
    if (!VAR_10)
        return FUNC_0(VAR_2);


    for (VAR_7 = 0, VAR_9 = VAR_10; *VAR_9; VAR_9++)
        if (*VAR_9 == ',')
            VAR_7++;
    VAR_7++;

    VAR_3 = FUNC_4(VAR_7, sizeof(*VAR_3));
    if (!VAR_3) {
        VAR_6 = FUNC_0(VAR_2);
        goto end;
    }
    VAR_4 = VAR_7;


    VAR_9 = VAR_10;
    for (VAR_8 = 0; VAR_9; VAR_8++) {
        char *VAR_11;

        FUNC_1(VAR_8 < VAR_4);
        VAR_11 = FUNC_8(VAR_9, ',');
        if (VAR_11)
            *VAR_11++ = 0;

        VAR_3[VAR_8].id = VAR_8;
        VAR_6 = FUNC_7(VAR_9, &VAR_3[VAR_8]);
        if (VAR_6 < 0) {
            FUNC_3(((void*)0), VAR_0, "Error parsing read interval #%d '%s'\n",
                   VAR_8, VAR_9);
            goto end;
        }
        FUNC_3(((void*)0), VAR_1, "Parsed log interval ");
        FUNC_6(&VAR_3[VAR_8], ((void*)0), VAR_1);
        VAR_9 = VAR_11;
    }
    FUNC_1(VAR_8 == VAR_4);

end:
    FUNC_2(VAR_10);
    return VAR_6;
}
