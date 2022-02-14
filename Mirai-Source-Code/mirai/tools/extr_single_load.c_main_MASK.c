
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int timeText ;
struct tm {int dummy; } ;
typedef int pthread_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 void* FUNC_0 (char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 () ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 int VAR_11 ;
 struct tm* FUNC_8 (int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_9 (int) ;
 void* VAR_13 ;
 int FUNC_10 (char*,char,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *,int *,int *,void*) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ VAR_14 ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,char*,...) ;
 TYPE_1__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_17 (char*,int,char*,struct tm*) ;
 int FUNC_18 (int *) ;
 scalar_t__ VAR_21 ;

int FUNC_19(int VAR_22, char *VAR_23[ ])
{
    if(VAR_22 < 4){
        FUNC_5(VAR_19, "Invalid parameters!\n");
        FUNC_5(VAR_20, "Usage: %s <bind ip> <input file> <file_to_load> <argument> <threads> <connections> (debug mode)\n", VAR_23[0]);
        FUNC_2(-1);
    }

    FUNC_14(VAR_1, VAR_2);

    VAR_6 = FUNC_1(0xDEAD);
    VAR_3 = VAR_23[1];
    VAR_10 = FUNC_4(VAR_23[2], "r");
    FUNC_14(VAR_0, &VAR_17);
    int VAR_24 = FUNC_0(VAR_23[5]);
    VAR_13 = FUNC_0(VAR_23[6]);

    if (VAR_22 == 8)
        VAR_5 = 1;

    int VAR_25;
    for(VAR_25 = 0; VAR_25 < (1024 * 100); VAR_25++)
    {
        FUNC_13(&VAR_18[VAR_25].mutex, ((void*)0));
    }

    FUNC_7(VAR_23[3]);
    VAR_15 = VAR_23[4];

    pthread_t VAR_26;
    FUNC_12( &VAR_26, ((void*)0), &VAR_11, (void *) &VAR_24);

    for(VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) FUNC_12( &VAR_26, ((void*)0), &VAR_8, (void *) ((void*)0));

    char VAR_27[100];
    time_t VAR_28 = FUNC_18(((void*)0));
    struct tm *VAR_29 = FUNC_8(&VAR_28);
    FUNC_17(VAR_27, sizeof(VAR_27)-1, "%d %b %Y %l:%M %p %Z", VAR_29);

    FUNC_11("Starting Scan at %s\n", VAR_27);
    char VAR_30[17] = {0};
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "Loaded");
    FUNC_11("%-16s", VAR_30);
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "State Timeout");
    FUNC_11("%-16s", VAR_30);
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "No Connect");
    FUNC_11("%-16s", VAR_30);
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "Closed Us");
    FUNC_11("%-16s", VAR_30);
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "Logins Tried");
    FUNC_11("%-16s", VAR_30);
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "B/s");
    FUNC_11("%-16s", VAR_30);
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "Connected");
    FUNC_11("%-16s", VAR_30);
    FUNC_10(VAR_30, 0, 17);
    FUNC_16(VAR_30, "Running Thrds");
    FUNC_11("%s", VAR_30);
    FUNC_11("\n");

    FUNC_15(1);

    char *VAR_31;
    VAR_31 = (char *)FUNC_9(16*6);
    while (VAR_5 ? 1 : VAR_16 > 0)
    {
        FUNC_11("\r");
        FUNC_10(VAR_31, '\0', 16*6);
        FUNC_16(VAR_31, "%s|%-15lu", VAR_31, VAR_9);
        FUNC_16(VAR_31, "%s|%-15lu", VAR_31, VAR_21);
        FUNC_16(VAR_31, "%s|%-15lu", VAR_31, VAR_7);
        FUNC_16(VAR_31, "%s|%-15lu", VAR_31, VAR_14);
        FUNC_16(VAR_31, "%s|%-15lu", VAR_31, VAR_12);
        FUNC_16(VAR_31, "%s|%-15d", VAR_31, VAR_4);
        FUNC_16(VAR_31, "%s|%-15lu", VAR_31, FUNC_6());
        FUNC_16(VAR_31, "%s|%-15d", VAR_31, VAR_16);
        FUNC_11("%s", VAR_31);
        FUNC_3(VAR_20);
        VAR_4=0;
        FUNC_15(1);
    }
    FUNC_11("\n");

    VAR_28 = FUNC_18(((void*)0));
    VAR_29 = FUNC_8(&VAR_28);
    FUNC_17(VAR_27, sizeof(VAR_27)-1, "%d %b %Y %l:%M %p %Z", VAR_29);
    FUNC_11("Scan finished at %s\n", VAR_27);
    return 0;
}
