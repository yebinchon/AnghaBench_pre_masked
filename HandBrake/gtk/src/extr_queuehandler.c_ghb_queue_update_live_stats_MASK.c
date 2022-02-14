
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct stat {double st_size; } ;
struct TYPE_9__ {int builder; int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_10__ {int state; int eta_seconds; int paused; int pass_count; int pass_id; int error; int pass; } ;
typedef TYPE_2__ ghb_instance_status_t ;
struct TYPE_11__ {char const* str; } ;
typedef int GtkListBoxRow ;
typedef int GtkListBox ;
typedef int GtkLabel ;
typedef int GhbValue ;
typedef TYPE_3__ GString ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;




 int VAR_4 ;
 char const* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,struct stat*) ;
 char* FUNC_7 (char const*,double,...) ;
 int FUNC_8 (TYPE_3__*,char const*,int ,int,char const*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_10 (int *) ;
 int * FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int*,int*,int*) ;
 int * FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*) ;
 char* FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,char const*) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ) ;
 struct tm* FUNC_21 (int*) ;
 int FUNC_22 (char*,int,char*,struct tm*) ;
 int FUNC_23 (int *) ;

void
FUNC_24(signal_user_data_t * VAR_5, int VAR_6, ghb_instance_status_t * VAR_7)
{
    int VAR_8 = FUNC_12(VAR_5->queue);
    if (VAR_6 < 0 || VAR_6 >= VAR_8)
    {

        return;
    }

    GtkListBox * VAR_9;
    GtkListBoxRow * VAR_10;

    VAR_9 = FUNC_2(FUNC_0(VAR_5->builder, "queue_list"));
    VAR_10 = FUNC_18(VAR_9);
    if (VAR_10 == ((void*)0) || VAR_6 != FUNC_19(VAR_10))
    {
        return;
    }

    GhbValue * VAR_11, * VAR_12;
    VAR_11 = FUNC_11(VAR_5->queue, VAR_6);
    if (VAR_11 == ((void*)0))
    {
        return;
    }
    VAR_12 = FUNC_14(VAR_11, "uiSettings");
    if (VAR_12 == ((void*)0))
    {
        return;
    }

    GString * VAR_13 = ((void*)0);
    GtkLabel * VAR_14;
    struct tm * VAR_15;
    char VAR_16[40] = "";
    char * VAR_17;
    const char * VAR_18 = "";
    const char * VAR_19 = "";
    time_t VAR_20, VAR_21, VAR_22, VAR_23;

    VAR_20 = FUNC_15(VAR_12, "job_start_time");
    VAR_21 = FUNC_23(((void*)0));
    if (VAR_7->state & VAR_3)
    {
        VAR_21 += VAR_7->eta_seconds;
    }
    VAR_22 = VAR_7->paused / 1000;
    if ((VAR_7->state & VAR_3) && VAR_7->pass_count > 1)
    {
        VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_pass_label"));
        FUNC_20(FUNC_3(VAR_14), VAR_4);
        VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_pass"));
        FUNC_20(FUNC_3(VAR_14), VAR_4);
        switch (VAR_7->pass_id)
        {
            case 128:
                VAR_18 = FUNC_4("Foreign Audio Search");
                break;

            case 131:
                VAR_18 = FUNC_4("Encode");
                break;

            case 130:
                VAR_18 = FUNC_4("Encode First Pass (Analysis)");
                break;

            case 129:
                VAR_18 = FUNC_4("Encode Second Pass (Final)");
                break;

            default:

                VAR_18 = FUNC_4("Error");
                break;
        }
        VAR_13 = FUNC_10(((void*)0));
        FUNC_8(VAR_13, FUNC_4("pass %d of %d\n%s"), VAR_7->pass, VAR_7->pass_count, VAR_18);
    }
    else
    {
        VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_pass_label"));
        FUNC_20(FUNC_3(VAR_14), VAR_0);
        VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_pass"));
        FUNC_20(FUNC_3(VAR_14), VAR_0);
    }

    if (VAR_7->state & VAR_1)
    {
        VAR_19 = FUNC_4("Scanning Title");
    }
    else if (VAR_7->state & VAR_1)
    {
        VAR_19 = FUNC_4("Encoding Paused");
    }
    else if (VAR_7->state & VAR_3)
    {
        VAR_19 = FUNC_4("Encoding In Progress");
    }
    else if (VAR_7->state & VAR_2)
    {
        switch (VAR_7->error)
        {
            case 132:
                VAR_19 = FUNC_4("Completed");
                break;

            case 134:
                VAR_19 = FUNC_4("Canceled");
                break;

            case 133:
                VAR_19 = FUNC_4("Failed");
                break;

            default:

                VAR_19 = FUNC_4("Unknown");
                break;
        }
    }

    if (VAR_13 != ((void*)0))
    {
        VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_pass"));
        FUNC_17(VAR_14, VAR_13->str);
        FUNC_9(VAR_13, VAR_4);
    }

    VAR_15 = FUNC_21( &VAR_20 );
    FUNC_22(VAR_16, 40, "%c", VAR_15);
    VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_start_time"));
    FUNC_17(VAR_14, VAR_16);

    VAR_15 = FUNC_21( &VAR_21 );
    FUNC_22(VAR_16, 40, "%c", VAR_15);
    VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_finish_time"));
    FUNC_17(VAR_14, VAR_16);

    int VAR_24 = 0, VAR_25, VAR_26, VAR_27;
    FUNC_13(VAR_22, &VAR_25, &VAR_26, &VAR_27);
    if (VAR_25 >= 24)
    {
        VAR_24 = VAR_25 / 24;
        VAR_25 = VAR_25 - VAR_24 * 24;
    }
    switch (VAR_24)
    {
        case 0:
            VAR_17 = FUNC_7("%02d:%02d:%02d", VAR_25, VAR_26, VAR_27);
            break;
        case 1:
            VAR_17 = FUNC_7(FUNC_4("%d Day %02d:%02d:%02d"), VAR_24, VAR_25, VAR_26, VAR_27);
            break;
        default:
            VAR_17 = FUNC_7(FUNC_4("%d Days %02d:%02d:%02d"), VAR_24, VAR_25, VAR_26, VAR_27);
            break;
    }
    VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_paused"));
    FUNC_17(VAR_14, VAR_17);
    FUNC_5(VAR_17);

    VAR_23 = VAR_21 - VAR_20;
    if (VAR_23 < 0)
    {
        VAR_23 = 0;
    }
    VAR_24 = 0;
    FUNC_13(VAR_23, &VAR_25, &VAR_26, &VAR_27);
    if (VAR_25 >= 24)
    {
        VAR_24 = VAR_25 / 24;
        VAR_25 = VAR_25 - VAR_24 * 24;
    }
    switch (VAR_24)
    {
        case 0:
            VAR_17 = FUNC_7("%02d:%02d:%02d", VAR_25, VAR_26, VAR_27);
            break;
        case 1:
            VAR_17 = FUNC_7(FUNC_4("%d Day %02d:%02d:%02d"), VAR_24, VAR_25, VAR_26, VAR_27);
            break;
        default:
            VAR_17 = FUNC_7(FUNC_4("%d Days %02d:%02d:%02d"), VAR_24, VAR_25, VAR_26, VAR_27);
            break;
    }
    VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_encode"));
    FUNC_17(VAR_14, VAR_17);
    FUNC_5(VAR_17);

    const char * VAR_28;
    struct stat VAR_29;

    VAR_28 = FUNC_16(VAR_12, "destination");
    if (FUNC_6(VAR_28, &VAR_29) == 0)
    {
        const char * VAR_30 = FUNC_4("B");
        double VAR_31 = VAR_29.st_size;
        if (VAR_31 > 1024)
        {
            VAR_30 = FUNC_4("KB");
            VAR_31 /= 1024.0;
        }
        if (VAR_31 > 1024)
        {
            VAR_30 = FUNC_4("MB");
            VAR_31 /= 1024.0;
        }
        if (VAR_31 > 1024)
        {
            VAR_30 = FUNC_4("GB");
            VAR_31 /= 1024.0;
        }
        VAR_17 = FUNC_7("%.2f %s", VAR_31, VAR_30);
        VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_file_size"));
        FUNC_17(VAR_14, VAR_17);
        FUNC_5(VAR_17);
    }
    else
    {
        VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_file_size"));
        FUNC_17(VAR_14, FUNC_4("Not Available"));
    }

    VAR_14 = FUNC_1(FUNC_0(VAR_5->builder, "queue_stats_result"));
    FUNC_17(VAR_14, VAR_19);
}
