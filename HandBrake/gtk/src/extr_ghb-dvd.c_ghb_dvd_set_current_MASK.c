
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * current_dvd_device; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ guint ;
typedef int gchar ;
typedef int GFileInfo ;
typedef int GFile ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int const*) ;
 int FUNC_7 (int *,int const*,int) ;
 int * FUNC_8 (int const*) ;

void
FUNC_9(const gchar *VAR_4, signal_user_data_t *VAR_5)
{

    GFile *VAR_6;
    GFileInfo *VAR_7;
    gchar *VAR_8 = FUNC_8(VAR_4);

    if (VAR_5->current_dvd_device != ((void*)0))
    {
        FUNC_4(VAR_5->current_dvd_device);
        VAR_5->current_dvd_device = ((void*)0);
    }
    VAR_6 = FUNC_2(VAR_8);
    VAR_7 = FUNC_3(VAR_6,
        VAR_1,
        VAR_2, ((void*)0), ((void*)0));
    if (VAR_7 != ((void*)0))
    {
        if (FUNC_1(VAR_7) == VAR_3)
        {



            VAR_5->current_dvd_device = VAR_8;
        }
        else
        {
            FUNC_4(VAR_8);
        }
        FUNC_5(VAR_7);
    }
    else
    {
        FUNC_4(VAR_8);
    }
    FUNC_5(VAR_6);
}
