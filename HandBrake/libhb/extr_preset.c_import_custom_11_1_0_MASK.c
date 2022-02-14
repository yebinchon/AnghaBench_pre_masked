
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_value_t ;
struct TYPE_3__ {char* settings_template; } ;
typedef TYPE_1__ hb_filter_object_t ;
typedef int hb_dict_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char const*,int ) ;
 TYPE_1__* FUNC_4 (int) ;
 char* FUNC_5 (int,int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char**) ;
 char** FUNC_8 (char*,char) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(hb_value_t * VAR_0, int VAR_1,
                                 const char * VAR_2)
{
    char *VAR_3 = FUNC_9(FUNC_1(VAR_0, VAR_2));
    if (VAR_3 == ((void*)0))
    {
        return;
    }
    hb_filter_object_t * VAR_4 = FUNC_4(VAR_1);
    if (VAR_4 == ((void*)0))
    {
        FUNC_6("import_custom_11_1_0: invalid filter id %d\n", VAR_1);
        return;
    }
    if (VAR_4->settings_template == ((void*)0))
    {
        return;
    }
    char ** VAR_5 = FUNC_8(VAR_3, ':');
    char ** VAR_6 = FUNC_8(VAR_4->settings_template, ':');
    int VAR_7;

    FUNC_0(VAR_3);
    hb_dict_t * VAR_8 = FUNC_2();
    for (VAR_7 = 0; VAR_5[VAR_7] != ((void*)0); VAR_7++)
    {
        if (VAR_6[VAR_7] == ((void*)0))
        {

            break;
        }
        char ** VAR_9 = FUNC_8(VAR_6[VAR_7], '=');
        if (VAR_9[0] != ((void*)0))
        {
            FUNC_3(VAR_8, VAR_9[0], FUNC_10(VAR_5[VAR_7]));
        }
        FUNC_7(VAR_9);
    }
    FUNC_7(VAR_6);
    FUNC_7(VAR_5);

    char * VAR_10 = FUNC_5(VAR_1, VAR_8);
    FUNC_3(VAR_0, VAR_2, FUNC_10(VAR_10));
    FUNC_0(VAR_10);
}
