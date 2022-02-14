
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int signal_user_data_t ;
typedef int * gpointer ;
typedef int gchar ;
struct TYPE_4__ {struct TYPE_4__* next; int data; } ;
typedef int GSourceFunc ;
typedef TYPE_1__ GList ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

gpointer
FUNC_14(signal_user_data_t *VAR_3)
{
    GList *VAR_4, *VAR_5;

    FUNC_2("ghb_cache_volnames()");
    VAR_4 = VAR_5 = FUNC_0();
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    FUNC_9(VAR_2);
    FUNC_6(VAR_1);
    while (VAR_4 != ((void*)0))
    {
        gchar *VAR_6, *VAR_7;


        if (!FUNC_3 (VAR_4->data))
        {
            FUNC_11(VAR_4->data);
            VAR_4 = VAR_4->next;
            continue;
        }

        VAR_7 = FUNC_13(VAR_4->data);
        VAR_6 = FUNC_12(VAR_7);

        if (VAR_7 != ((void*)0) && VAR_6 != ((void*)0))
        {
            FUNC_5(VAR_1, VAR_7, VAR_6);
        }
        else
        {
            if (VAR_7 != ((void*)0))
                FUNC_4(VAR_7);
            if (VAR_6 != ((void*)0))
                FUNC_4(VAR_6);
        }

        FUNC_1(VAR_4->data);
        VAR_4 = VAR_4->next;
    }
    FUNC_10(VAR_2);

    FUNC_8(VAR_5);

    FUNC_7((GSourceFunc)VAR_0, VAR_3);

    return ((void*)0);
}
