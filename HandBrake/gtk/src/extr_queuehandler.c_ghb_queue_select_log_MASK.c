
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * extra_activity_buffer; int * extra_activity_path; int * queue_activity_buffer; int builder; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gint ;
typedef int GtkTextView ;
typedef int GtkTextBuffer ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;
typedef int GhbValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*,char*,int ) ;
 int * FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int ) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (TYPE_1__*,char const*) ;

void FUNC_17(signal_user_data_t * VAR_2)
{
    GtkListBox * VAR_3;
    GtkListBoxRow * VAR_4;
    GtkTextBuffer * VAR_5;
    gint VAR_6;
    GhbValue * VAR_7, *VAR_8;

    VAR_3 = FUNC_1(FUNC_0(VAR_2->builder, "queue_list"));
    VAR_4 = FUNC_11(VAR_3);
    if (VAR_4 != ((void*)0))
    {

        GtkTextView * VAR_9;
        int VAR_10;
        const char * VAR_11;

        VAR_6 = FUNC_12(VAR_4);
        if (VAR_6 < 0 || VAR_6 >= FUNC_5(VAR_2->queue))
        {
            return;
        }
        VAR_7 = FUNC_4(VAR_2->queue, VAR_6);
        VAR_8 = FUNC_6(VAR_7, "uiSettings");

        VAR_9 = FUNC_2(FUNC_0(VAR_2->builder, "queue_activity_view"));
        VAR_5 = FUNC_14(VAR_9);

        VAR_10 = FUNC_7(VAR_8, "job_status");
        VAR_11 = FUNC_8(VAR_8, "ActivityFilename");
        if (VAR_10 != VAR_0 && VAR_11 != ((void*)0))
        {
            FUNC_10(VAR_2, "queue_activity_location",
                          FUNC_9(VAR_11));
        }
        else
        {
            FUNC_10(VAR_2, "queue_activity_location", FUNC_9(""));
        }
        if (VAR_10 == VAR_1)
        {


            if (VAR_2->queue_activity_buffer != VAR_5)
            {
                FUNC_15(VAR_9, VAR_2->queue_activity_buffer);
            }
        }
        else
        {


            if (VAR_2->extra_activity_buffer != VAR_5)
            {
                FUNC_15(VAR_9, VAR_2->extra_activity_buffer);
            }
            VAR_11 = FUNC_8(VAR_8, "ActivityFilename");
            if (VAR_10 != VAR_0 && VAR_11 != ((void*)0))
            {

                FUNC_16(VAR_2, VAR_11);
            }
            else
            {


                FUNC_3(VAR_2->extra_activity_path);
                VAR_2->extra_activity_path = ((void*)0);
                FUNC_13(VAR_2->extra_activity_buffer, "", 0);
            }
        }
    }
}
