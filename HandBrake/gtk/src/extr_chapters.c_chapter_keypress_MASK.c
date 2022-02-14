
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_user_data_t ;
typedef scalar_t__ guint ;
typedef int gboolean ;
typedef int GtkWidget ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int * FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static gboolean
FUNC_8(
    GtkWidget * VAR_5,
    guint VAR_6,
    signal_user_data_t * VAR_7)
{
    GtkWidget * VAR_8;
    GtkListBoxRow * VAR_9;
    GtkListBox * VAR_10;
    int VAR_11;

    if (VAR_6 != VAR_2 &&
        VAR_6 != VAR_1 &&
        VAR_6 != VAR_3)
    {
        return VAR_0;
    }

    VAR_9 = FUNC_7(VAR_5);
    VAR_10 = FUNC_0(FUNC_5(FUNC_1(VAR_9)));
    VAR_11 = FUNC_4(VAR_9);
    if (VAR_6 == VAR_2 || VAR_6 == VAR_1)
    {
        VAR_11++;
    }
    else if (VAR_6 == VAR_3 && VAR_11 > 0)
    {
        VAR_11--;
    }
    if (VAR_11 >= 0)
    {
        VAR_9 = FUNC_3(VAR_10, VAR_11);
        if (VAR_9 != ((void*)0))
        {
            VAR_8 = FUNC_2(FUNC_1(VAR_9), "chapter_entry");
            if (VAR_8 != ((void*)0))
            {
                FUNC_6(VAR_8);
                return VAR_4;
            }
        }
    }
    return VAR_0;
}
