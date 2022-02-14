
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int builder; } ;
typedef TYPE_2__ signal_user_data_t ;
struct TYPE_9__ {int list_audio; } ;
typedef TYPE_3__ hb_title_t ;
struct TYPE_7__ {int description; } ;
struct TYPE_10__ {TYPE_1__ lang; } ;
typedef TYPE_4__ hb_audio_config_t ;
typedef scalar_t__ gint ;
typedef double gdouble ;
typedef int gchar ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int FUNC_0 (int ,int const*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,scalar_t__,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ,int *,int,int ,int,char*,int,double,int) ;
 TYPE_4__* FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,int,char*,scalar_t__) ;

void
FUNC_14(signal_user_data_t *VAR_1, const gchar *VAR_2,
                     void *VAR_3, const void* VAR_4)
{
    (void)VAR_3;
    const hb_title_t *VAR_5 = (const hb_title_t*)VAR_4;
    GtkTreeIter VAR_6;
    GtkListStore *VAR_7;
    hb_audio_config_t * VAR_8;
    gint VAR_9;
    gint VAR_10 = 0;
    gchar *VAR_11;

    GtkComboBox *VAR_12 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_7 = FUNC_2(FUNC_6 (VAR_12));
    FUNC_9(VAR_7);
    if (VAR_5 != ((void*)0))
    {
        VAR_10 = FUNC_12( VAR_5->list_audio );
    }
    if( VAR_10 <= 0 )
    {

        VAR_11 = FUNC_5("<small>%s</small>", FUNC_3("No Audio"));

        FUNC_8(VAR_7, &VAR_6);
        FUNC_10(VAR_7, &VAR_6,
                           0, VAR_11,
                           1, VAR_0,
                           2, "none",
                           3, -1.0,
                           -1);
        FUNC_4(VAR_11);
        return;
    }
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    {
        char VAR_13[4];
        VAR_8 = FUNC_11(VAR_5->list_audio, VAR_9);
        VAR_11 = FUNC_5("<small>%d - %s</small>",
                              VAR_9 + 1, VAR_8->lang.description);
        FUNC_13(VAR_13, 4, "%d", VAR_9);

        FUNC_8(VAR_7, &VAR_6);
        FUNC_10(VAR_7, &VAR_6,
                           0, VAR_11,
                           1, VAR_0,
                           2, VAR_13,
                           3, (gdouble)VAR_9,
                           -1);
        FUNC_4(VAR_11);
    }
    FUNC_7 (VAR_12, 0);
}
