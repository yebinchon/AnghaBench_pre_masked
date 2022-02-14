
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* settings_template; } ;
typedef TYPE_1__ hb_filter_object_t ;


 char** FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (char*,char) ;
 char* FUNC_4 (char*) ;

char ** FUNC_5(int VAR_0)
{
    hb_filter_object_t * VAR_1 = FUNC_1(VAR_0);

    if (VAR_1 == ((void*)0) || VAR_1->settings_template == ((void*)0))
    {
        return ((void*)0);
    }

    char ** VAR_2 = FUNC_3(VAR_1->settings_template, ':');
    int VAR_3, VAR_4 = 0;

    for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); VAR_3++)
    {
        VAR_4++;
    }
    char ** VAR_5 = FUNC_0(VAR_4 + 1, sizeof(char*));
    for (VAR_3 = 0; VAR_2[VAR_3] != ((void*)0); VAR_3++)
    {
        char ** VAR_6 = FUNC_3(VAR_2[VAR_3], '=');
        VAR_5[VAR_3] = FUNC_4(VAR_6[0]);
        FUNC_2(VAR_6);
    }
    VAR_5[VAR_3] = ((void*)0);
    FUNC_2(VAR_2);

    return VAR_5;
}
