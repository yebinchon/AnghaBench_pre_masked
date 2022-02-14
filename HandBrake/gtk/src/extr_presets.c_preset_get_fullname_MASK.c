
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int depth; } ;
typedef TYPE_1__ hb_preset_index_t ;
typedef scalar_t__ gboolean ;
typedef int GhbValue ;
typedef int GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int *,int ) ;
 int * FUNC_5 (char*) ;
 char* FUNC_6 (int *,char*) ;
 int * FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;

char*
FUNC_9(hb_preset_index_t *VAR_1, const char * VAR_2, gboolean VAR_3)
{
    int VAR_4;
    GString *VAR_5;
    hb_preset_index_t *VAR_6;
    GhbValue *VAR_7;

    VAR_5 = FUNC_5("");
    VAR_6 = FUNC_8(VAR_1);
    for (VAR_4 = 1; VAR_4 <= VAR_1->depth; VAR_4++)
    {
        const char *VAR_8;
        VAR_6->depth = VAR_4;
        VAR_7 = FUNC_7(VAR_6);
        if (VAR_7 == ((void*)0))
        {
            break;
        }
        VAR_8 = FUNC_6(VAR_7, "PresetName");
        if (VAR_8 != ((void*)0))
        {
            FUNC_3(VAR_5, VAR_2);
            if (VAR_3)
            {
                char * VAR_9 = FUNC_2(VAR_8, -1);
                FUNC_3(VAR_5, VAR_9);
                FUNC_1(VAR_9);
            }
            else
            {
                FUNC_3(VAR_5, VAR_8);
            }
        }
    }
    FUNC_0(VAR_6);
    char *VAR_10 = FUNC_4(VAR_5, VAR_0);
    return VAR_10;
}
