
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef scalar_t__ gdouble ;
typedef int gboolean ;
typedef int GtkTreeIter ;
typedef int GtkListStore ;
typedef int GtkComboBox ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,int,int) ;
 int FUNC_5 (int ,int *,int,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

void
FUNC_8(
    GtkComboBox *VAR_2,
    gint VAR_3,
    gint VAR_4)
{
    GtkTreeIter VAR_5;
    GtkListStore *VAR_6;
    gdouble VAR_7;
    gboolean VAR_8 = VAR_0;

    FUNC_2("audio_bitrate_opts_filter ()\n");
    VAR_6 = FUNC_0(FUNC_3 (VAR_2));
    if (FUNC_6 (FUNC_1(VAR_6), &VAR_5))
    {
        do
        {
            FUNC_5(FUNC_1(VAR_6), &VAR_5, 3, &VAR_7, -1);
            if ((int)VAR_7 < VAR_3 || (int)VAR_7 > VAR_4)
            {
                FUNC_4(VAR_6, &VAR_5, 1, VAR_0, -1);
            }
            else
            {
                FUNC_4(VAR_6, &VAR_5, 1, VAR_1, -1);
            }
            VAR_8 = !FUNC_7 (FUNC_1(VAR_6), &VAR_5);
        } while (!VAR_8);
    }
}
