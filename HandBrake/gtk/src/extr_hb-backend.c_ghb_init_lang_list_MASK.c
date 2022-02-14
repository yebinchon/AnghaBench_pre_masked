
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int signal_user_data_t ;
struct TYPE_5__ {scalar_t__* native_name; char* eng_name; int iso639_2; } ;
typedef TYPE_1__ iso639_lang_t ;
typedef int GtkTreeView ;
typedef int GtkTreeStore ;
typedef int GtkTreeIter ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int ,char const*,int,int,int) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 () ;
 TYPE_1__* FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (int ) ;

void FUNC_8(GtkTreeView *VAR_0, signal_user_data_t *VAR_1)
{
    GtkTreeIter VAR_2;
    GtkTreeStore * VAR_3;

    FUNC_1(VAR_0);
    VAR_3 = FUNC_0(FUNC_4(VAR_0));

    const iso639_lang_t *VAR_4;
    for (VAR_4 = FUNC_5(); VAR_4 != ((void*)0);
         VAR_4 = FUNC_6(VAR_4))
    {
        int VAR_5 = FUNC_7(VAR_4->iso639_2);
        const char * VAR_6;
        if (VAR_4->native_name != ((void*)0) && VAR_4->native_name[0] != 0)
        {
            VAR_6 = VAR_4->native_name;
        }
        else
        {
            VAR_6 = VAR_4->eng_name;
        }
        FUNC_2(VAR_3, &VAR_2, ((void*)0));
        FUNC_3(VAR_3, &VAR_2, 0, VAR_6, 1, VAR_5, -1);
    }
}
