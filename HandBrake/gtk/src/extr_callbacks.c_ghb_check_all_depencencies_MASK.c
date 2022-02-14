
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gchar ;
typedef scalar_t__ gboolean ;
typedef int GhbValue ;
typedef int GhbDictIter ;
typedef int GObject ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*,scalar_t__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int const**,int **) ;
 int * FUNC_6 (int ,int const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ) ;
 int * VAR_0 ;

void
FUNC_11(signal_user_data_t *VAR_1)
{
    GhbDictIter VAR_2;
    const gchar *VAR_3;
    GhbValue *VAR_4;
    GObject *VAR_5;

    FUNC_2("ghb_check_all_depencencies ()");
    if (VAR_0 == ((void*)0)) return;
    VAR_2 = FUNC_4(VAR_0);
    while (FUNC_5(VAR_0, &VAR_2, &VAR_3, &VAR_4))
    {
        gboolean VAR_6;
        gboolean VAR_7;

        VAR_5 = FUNC_6 (VAR_1->builder, VAR_3);
        if (VAR_5 == ((void*)0))
        {
            FUNC_3("Failed to find dependent widget %s", VAR_3);
            continue;
        }
        VAR_6 = FUNC_1(VAR_1, VAR_3, &VAR_7);
        FUNC_9(FUNC_0(VAR_5), VAR_6);
        FUNC_8(FUNC_0(VAR_5), VAR_6);
        if (!VAR_6 && VAR_7)
        {
            FUNC_7(FUNC_0(VAR_5));
        }
        else
        {
            FUNC_10(FUNC_0(VAR_5));
        }
    }
}
