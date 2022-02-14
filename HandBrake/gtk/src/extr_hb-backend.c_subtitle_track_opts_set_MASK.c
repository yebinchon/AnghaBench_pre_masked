
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {int list_subtitle; } ;
typedef TYPE_2__ hb_title_t ;
struct TYPE_8__ {int lang; } ;
typedef TYPE_3__ hb_subtitle_t ;
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
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ,int *,int,int ,int,char*,int,double,int) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_3__* FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(signal_user_data_t *VAR_1, const gchar *VAR_2,
                        void *VAR_3, const void* VAR_4)
{
    (void)VAR_3;
    const hb_title_t *VAR_5 = (const hb_title_t*)VAR_4;
    GtkTreeIter VAR_6;
    GtkListStore *VAR_7;
    hb_subtitle_t * VAR_8;
    gint VAR_9, VAR_10 = 0;

    GtkComboBox *VAR_11 = FUNC_1(FUNC_0(VAR_1->builder, VAR_2));
    VAR_7 = FUNC_2(FUNC_6 (VAR_11));
    FUNC_9(VAR_7);

    if (VAR_5 != ((void*)0))
    {
        VAR_10 = FUNC_11( VAR_5->list_subtitle );
    }
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    {
        gchar *VAR_12;
        char VAR_13[4];

        VAR_8 = FUNC_12(VAR_5->list_subtitle, VAR_9);
        VAR_12 = FUNC_5("%d - %s", VAR_9+1, VAR_8->lang);
        FUNC_13(VAR_13, 4, "%d", VAR_9);

        FUNC_8(VAR_7, &VAR_6);
        FUNC_10(VAR_7, &VAR_6,
                    0, VAR_12,
                    1, VAR_0,
                    2, VAR_13,
                    3, (gdouble)VAR_9,
                    -1);
        FUNC_4(VAR_12);
    }
    if (VAR_10 <= 0)
    {
        FUNC_8(VAR_7, &VAR_6);
        FUNC_10(VAR_7, &VAR_6,
                           0, FUNC_3("None"),
                           1, VAR_0,
                           2, "0",
                           3, 0.0,
                           -1);
    }
    FUNC_7 (VAR_11, 0);
}
