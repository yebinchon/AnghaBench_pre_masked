
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct stat {double st_size; } ;
struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int GtkLabel ;
typedef int GhbValue ;


 int VAR_0 ;





 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 char const* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 char* FUNC_6 (char const*,double,...) ;
 int FUNC_7 (int,int*,int*,int*) ;
 int * FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int ,int ) ;
 struct tm* FUNC_13 (int*) ;
 int FUNC_14 (char*,int,char*,struct tm*) ;

void
FUNC_15(GhbValue * VAR_1, signal_user_data_t *VAR_2)
{
    GhbValue * VAR_3;
    GtkLabel * VAR_4;

    VAR_3 = FUNC_8(VAR_1, "uiSettings");
    if (VAR_3 == ((void*)0))
    {
        return;
    }

    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_pass_label"));
    FUNC_12(FUNC_2(VAR_4), VAR_0);
    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_pass"));
    FUNC_12(FUNC_2(VAR_4), VAR_0);

    const char * VAR_5 = "";
    int VAR_6 = FUNC_9(VAR_3, "job_status");

    if (VAR_6 == 129)
    {
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_start_time"));
        FUNC_11(VAR_4, "");
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_finish_time"));
        FUNC_11(VAR_4, "");
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_paused"));
        FUNC_11(VAR_4, "");
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_encode"));
        FUNC_11(VAR_4, "");
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_file_size"));
        FUNC_11(VAR_4, "");
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_result"));
        FUNC_11(VAR_4, "Pending");
        return;
    }

    switch (VAR_6)
    {
        case 128:


            return;

        case 131:
            VAR_5 = FUNC_3("Completed");
            break;

        case 132:
            VAR_5 = FUNC_3("Canceled");
            break;

        case 130:
            VAR_5 = FUNC_3("Failed");
            break;

        case 129:
        default:
            VAR_5 = FUNC_3("Pending");
            break;
    }

    struct tm * VAR_7;
    char VAR_8[40] = "";
    char * VAR_9;
    time_t VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_10 = FUNC_9(VAR_3, "job_start_time");
    VAR_11 = FUNC_9(VAR_3, "job_finish_time");
    VAR_12 = FUNC_9(VAR_3, "job_pause_time_ms") / 1000;

    VAR_7 = FUNC_13( &VAR_10 );
    FUNC_14(VAR_8, 40, "%c", VAR_7);
    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_start_time"));
    FUNC_11(VAR_4, VAR_8);

    VAR_7 = FUNC_13( &VAR_11 );
    FUNC_14(VAR_8, 40, "%c", VAR_7);
    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_finish_time"));
    FUNC_11(VAR_4, VAR_8);

    int VAR_14 = 0, VAR_15, VAR_16, VAR_17;
    FUNC_7(VAR_12, &VAR_15, &VAR_16, &VAR_17);
    if (VAR_15 >= 24)
    {
        VAR_14 = VAR_15 / 24;
        VAR_15 = VAR_15 - VAR_14 * 24;
    }
    switch (VAR_14)
    {
        case 0:
            VAR_9 = FUNC_6("%02d:%02d:%02d", VAR_15, VAR_16, VAR_17);
            break;
        case 1:
            VAR_9 = FUNC_6(FUNC_3("%d Day %02d:%02d:%02d"), VAR_14, VAR_15, VAR_16, VAR_17);
            break;
        default:
            VAR_9 = FUNC_6(FUNC_3("%d Days %02d:%02d:%02d"), VAR_14, VAR_15, VAR_16, VAR_17);
            break;
    }
    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_paused"));
    FUNC_11(VAR_4, VAR_9);
    FUNC_4(VAR_9);

    VAR_13 = VAR_11 - VAR_10;
    if (VAR_13 < 0)
    {
        VAR_13 = 0;
    }
    VAR_14 = 0;
    FUNC_7(VAR_13, &VAR_15, &VAR_16, &VAR_17);
    if (VAR_15 >= 24)
    {
        VAR_14 = VAR_15 / 24;
        VAR_15 = VAR_15 - VAR_14 * 24;
    }
    switch (VAR_14)
    {
        case 0:
            VAR_9 = FUNC_6("%02d:%02d:%02d", VAR_15, VAR_16, VAR_17);
            break;
        case 1:
            VAR_9 = FUNC_6(FUNC_3("%d Day %02d:%02d:%02d"), VAR_14, VAR_15, VAR_16, VAR_17);
            break;
        default:
            VAR_9 = FUNC_6(FUNC_3("%d Days %02d:%02d:%02d"), VAR_14, VAR_15, VAR_16, VAR_17);
            break;
    }
    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_encode"));
    FUNC_11(VAR_4, VAR_9);
    FUNC_4(VAR_9);

    const char * VAR_18;
    struct stat VAR_19;

    VAR_18 = FUNC_10(VAR_3, "destination");
    if (FUNC_5(VAR_18, &VAR_19) == 0)
    {
        const char * VAR_20 = FUNC_3("B");
        double VAR_21 = VAR_19.st_size;
        if (VAR_21 > 1024)
        {
            VAR_20 = FUNC_3("KB");
            VAR_21 /= 1024.0;
        }
        if (VAR_21 > 1024)
        {
            VAR_20 = FUNC_3("MB");
            VAR_21 /= 1024.0;
        }
        if (VAR_21 > 1024)
        {
            VAR_20 = FUNC_3("GB");
            VAR_21 /= 1024.0;
        }
        VAR_9 = FUNC_6("%.2f %s", VAR_21, VAR_20);
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_file_size"));
        FUNC_11(VAR_4, VAR_9);
        FUNC_4(VAR_9);
    }
    else
    {
        VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_file_size"));
        FUNC_11(VAR_4, FUNC_3("Not Available"));
    }

    VAR_4 = FUNC_1(FUNC_0(VAR_2->builder, "queue_stats_result"));
    FUNC_11(VAR_4, VAR_5);
}
