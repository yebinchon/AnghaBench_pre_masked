
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ stderr_src_id; struct TYPE_8__* current_dvd_device; struct TYPE_8__* extra_activity_path; int * activity_buffer; int * queue_activity_buffer; int * extra_activity_buffer; int * builder; int * activity_log; int globals; int prefs; int settings_array; int queue; int app; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_9__ {void* _file; } ;
typedef int GCallback ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (void*) ;
 int VAR_7 ;
 int FUNC_7 (char*,char*,TYPE_2__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,char**) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_17 () ;
 scalar_t__ VAR_9 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 int FUNC_22 () ;
 int FUNC_23 (char*,int) ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_24 (int ) ;
 scalar_t__ VAR_12 ;

int
FUNC_25(int VAR_13, char *VAR_14[])
{
    int VAR_15;
    signal_user_data_t * VAR_16;

    FUNC_20();
    VAR_16 = FUNC_13(sizeof(signal_user_data_t));
    VAR_16->app = FUNC_23("fr.handbrake.ghb",
                                  VAR_3 |
                                  VAR_2);

    FUNC_15(VAR_16->app, "activate", (GCallback)VAR_8, VAR_16);
    FUNC_15(VAR_16->app, "open", (GCallback)VAR_9, VAR_16);

    FUNC_8(FUNC_2(VAR_16->app), VAR_7);




    VAR_15 = FUNC_10(FUNC_2(VAR_16->app), VAR_13, VAR_14);

    FUNC_17();


    if (VAR_16->stderr_src_id > 0)
        FUNC_16(VAR_16->stderr_src_id);
    FUNC_21(&VAR_16->queue);
    FUNC_21(&VAR_16->settings_array);
    FUNC_21(&VAR_16->prefs);
    FUNC_21(&VAR_16->globals);

    if (VAR_16->activity_log != ((void*)0))
        FUNC_12(VAR_16->activity_log);
    FUNC_19();
    FUNC_18();

    if (VAR_16->builder != ((void*)0))
        FUNC_14(VAR_16->builder);

    FUNC_14(VAR_16->extra_activity_buffer);
    FUNC_14(VAR_16->queue_activity_buffer);
    FUNC_14(VAR_16->activity_buffer);
    FUNC_11(VAR_16->extra_activity_path);

    FUNC_11(VAR_16->current_dvd_device);
    FUNC_11(VAR_16);

    return VAR_15;
}
