
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,char*,int ,char**) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 char* FUNC_4 (char const*,int) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static char* FUNC_7(AVIOContext* VAR_1)
{
    uint8_t *VAR_2 = ((void*)0);
    const char *VAR_3;
    const char *VAR_4;
    uint8_t *VAR_5 = ((void*)0);
    int VAR_6;


    FUNC_2(VAR_1, "mime_type", VAR_0, &VAR_2);
    VAR_3 = VAR_2;
    while (VAR_3 != ((void*)0) && *VAR_3 != '\0') {
        VAR_3 = FUNC_5(VAR_3, ';');
        if (!VAR_3)
            break;

        VAR_3 = VAR_3+1;

        while (FUNC_1(*VAR_3))
            VAR_3++;

        if (FUNC_3(VAR_3, "boundary=", &VAR_3)) {
            VAR_4 = FUNC_5(VAR_3, ';');
            if (VAR_4)
                VAR_6 = VAR_4 - VAR_3 - 1;
            else
                VAR_6 = FUNC_6(VAR_3);



            if ( VAR_6>2 && *VAR_3 == '"' && VAR_3[VAR_6-1] == '"' ) {
                VAR_3++;
                VAR_6 -= 2;
            }
            VAR_5 = FUNC_4(VAR_3, VAR_6);
            break;
        }
    }

    FUNC_0(&VAR_2);
    return VAR_5;
}
