
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int settings; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_8__ {int format; } ;
typedef TYPE_2__ hb_container_t ;
typedef scalar_t__ gint ;
typedef int gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char*,int) ;
 int * FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (char const*) ;
 int FUNC_9 (int,int ) ;
 int * FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;

void
FUNC_12(signal_user_data_t *VAR_1)
{
    GhbValue *VAR_2;
    GhbValue *VAR_3;
    gint VAR_4;
    gboolean VAR_5 = VAR_0;

    VAR_2 = FUNC_7(VAR_1->settings);
    if (VAR_2 == ((void*)0))
        return;

    const char *VAR_6;
    const hb_container_t *VAR_7;

    VAR_6 = FUNC_5(VAR_1->settings, "FileFormat");
    VAR_7 = FUNC_8(VAR_6);

    for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_2); )
    {
        gboolean VAR_8;
        int VAR_9;

        VAR_3 = FUNC_1(VAR_2, VAR_4);
        VAR_8 = FUNC_4(VAR_3, "Burn");
        VAR_9 = FUNC_0(VAR_1->settings, VAR_3);
        VAR_8 = VAR_8 || !FUNC_9(VAR_9, VAR_7->format);
        if (VAR_8 && VAR_5)
        {
            FUNC_3(VAR_2, VAR_4);
            continue;
        }
        VAR_5 = VAR_5 || VAR_8;
        FUNC_6(VAR_3, "Burn", VAR_8);
        VAR_4++;
    }
    VAR_3 = FUNC_10(VAR_1, ((void*)0));
    if (VAR_3 != ((void*)0))
    {
        FUNC_11(VAR_1, VAR_3);
    }
}
