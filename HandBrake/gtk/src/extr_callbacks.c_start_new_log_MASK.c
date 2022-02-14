
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_4__ {scalar_t__ job_activity_log; int prefs; int queue_activity_buffer; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ gchar ;
typedef int GhbValue ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,char*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__*,int,int *,int *) ;
 scalar_t__* FUNC_4 (scalar_t__ const*) ;
 scalar_t__* FUNC_5 (scalar_t__ const*) ;
 scalar_t__* FUNC_6 (char*,int ,int ,...) ;
 scalar_t__* FUNC_7 (scalar_t__*,char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 scalar_t__* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,scalar_t__*) ;
 scalar_t__* FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct tm* FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(signal_user_data_t *VAR_0, GhbValue *VAR_1)
{
    time_t VAR_2;
    struct tm *VAR_3;
    gchar *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    const gchar *VAR_8;



    FUNC_12(VAR_0);

    FUNC_13(VAR_0->queue_activity_buffer, "", 0);

    VAR_2 = FUNC_17(((void*)0));
    VAR_3 = FUNC_16(&VAR_2);
    VAR_8 = FUNC_9(VAR_1, "destination");
    VAR_6 = FUNC_4(VAR_8);
    if (FUNC_8(VAR_0->prefs, "EncodeLogLocation"))
    {
        VAR_7 = FUNC_5 (VAR_8);
    }
    else
    {
        VAR_7 = FUNC_11("EncodeLogs");
    }
    VAR_5 = FUNC_7( VAR_6, "." );
    if (VAR_5 != ((void*)0))
    {
        *VAR_5 = 0;
    }
    VAR_4 = FUNC_6("%s/%s %d-%02d-%02d %02d-%02d-%02d.log",
        VAR_7,
        VAR_6,
        VAR_3->tm_year + 1900, VAR_3->tm_mon + 1, VAR_3->tm_mday,
        VAR_3->tm_hour, VAR_3->tm_min, VAR_3->tm_sec);
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    if (VAR_0->job_activity_log)
        FUNC_2(VAR_0->job_activity_log);
    VAR_0->job_activity_log = FUNC_1 (VAR_4, "w", ((void*)0));
    if (VAR_0->job_activity_log)
    {
        gchar *VAR_9;

        VAR_9 = FUNC_6("Handbrake Version: %s (%d)\n",
                                    FUNC_15(((void*)0)), FUNC_14(((void*)0)));
        FUNC_3 (VAR_0->job_activity_log, VAR_9,
                                    -1, ((void*)0), ((void*)0));
        FUNC_0(VAR_9);
        FUNC_10(VAR_1, "ActivityFilename", VAR_4);
    }
    FUNC_0(VAR_4);
}
