
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef char gchar ;
typedef scalar_t__ gboolean ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (char*,char*,char*,char const*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(signal_user_data_t *VAR_1, GhbValue *VAR_2)
{
    gchar *VAR_3, *VAR_4;
    const char *VAR_5;
    GhbValue *VAR_6;
    gboolean VAR_7;

    FUNC_0("submit_job");
    if (VAR_2 == ((void*)0)) return;
    VAR_6 = FUNC_2(VAR_2, "uiSettings");
    VAR_7 = FUNC_3(VAR_6, "preset_modified");
    VAR_5 = FUNC_5(VAR_6, "PresetFullName");
    VAR_3 = FUNC_4(VAR_6, "Type") == 1 ? "Custom " : "";
    VAR_4 = VAR_7 ? "Modified " : "";
    FUNC_8("%s%sPreset: %s", VAR_4, VAR_3, VAR_5);

    FUNC_6(VAR_6, "job_status", VAR_0);
    FUNC_12(VAR_1, VAR_6);
    GhbValue *VAR_8 = FUNC_2(VAR_2, "Job");
    int VAR_9 = FUNC_1(FUNC_9(), VAR_8);
    FUNC_6(VAR_6, "job_unique_id", VAR_9);
    time_t VAR_10 = FUNC_13(((void*)0));
    FUNC_6(VAR_6, "job_start_time", VAR_10);
    FUNC_11();


    int VAR_11 = FUNC_7(VAR_1->queue, VAR_9, ((void*)0));
    FUNC_10(VAR_1, VAR_11, 1);
}
