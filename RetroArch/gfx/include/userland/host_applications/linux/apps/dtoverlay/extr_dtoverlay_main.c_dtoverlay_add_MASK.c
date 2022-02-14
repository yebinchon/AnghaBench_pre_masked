
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int count; } ;
struct TYPE_6__ {int num_strings; char** strings; } ;
typedef TYPE_1__ STRING_VEC_T ;
typedef TYPE_2__ STATE_T ;
typedef int DTBLOB_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,char const*,char const*,int,char const*) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int,char const*,void const*,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,int) ;
 char* FUNC_7 (int *,char const*,int*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *,int,char const*,int*) ;
 int * FUNC_11 (char const*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char const*) ;
 int FUNC_14 (int *,char const*,char const*,int,char const*,TYPE_1__*) ;
 int FUNC_15 (char*,...) ;
 char* VAR_1 ;
 int FUNC_16 (char*) ;
 int VAR_2 ;
 int FUNC_17 (char const*,char*) ;
 scalar_t__ FUNC_18 (char*,char const*) ;
 void* FUNC_19 (char*,...) ;
 int FUNC_20 (char const*,char*,int*) ;
 char* FUNC_21 (char const*,char) ;
 scalar_t__ FUNC_22 (char const*,char*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (char const*) ;
 char* FUNC_25 (char const*,char) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_26(STATE_T *VAR_4, const char *VAR_5,
    int VAR_6, const char **VAR_7)
{
    const char *VAR_8;
    const char *VAR_9;
    char *VAR_10 = ((void*)0);
    int VAR_11;
    DTBLOB_T *VAR_12 = ((void*)0);
    DTBLOB_T *VAR_13;
    STRING_VEC_T VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;

    VAR_16 = FUNC_24(VAR_5) - 5;
    VAR_11 = (FUNC_22(VAR_5, "dtparam") == 0);
    if (VAR_11)
    {

 VAR_9 = FUNC_19("%s/%s", VAR_3, "base.dtb");
 if (FUNC_18("dtc -I fs -O dtb -o '%s' /proc/device-tree 1>/dev/null 2>&1",
      VAR_9) != 0)
           return FUNC_15("Failed to read active DTB");
    }
    else if ((VAR_16 > 0) && (FUNC_22(VAR_5 + VAR_16, ".dtbo") == 0))
    {
 const char *VAR_18;
 VAR_9 = VAR_5;
 VAR_18 = FUNC_25(VAR_5, '/');
 if (VAR_18)
 {
     VAR_5 = VAR_18 + 1;
     VAR_16 = FUNC_24(VAR_5) - 5;
 }

 VAR_5 = FUNC_19("%.*s", VAR_16, VAR_5);
    }
    else
    {
 VAR_9 = FUNC_19("%s/%s.dtbo", VAR_2, VAR_5);
    }

    if (VAR_0)
        VAR_8 = "dry_run";
    else
 VAR_8 = FUNC_19("%d_%s", VAR_4->count, VAR_5);
    VAR_13 = FUNC_11(VAR_9, FUNC_0(4096));
    if (!VAR_13)
 return FUNC_15("Failed to read '%s'", VAR_9);

    if (VAR_11)
    {
        VAR_12 = VAR_13;
 FUNC_23(&VAR_14);
    }


    for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++)
    {
 const char *VAR_19 = VAR_7[VAR_17];
 const char *VAR_20 = FUNC_21(VAR_19, '=');
 const char *VAR_21, *VAR_22;
 char *VAR_23 = ((void*)0);
 int VAR_24;
 if (VAR_20)
 {
     int VAR_25 = (VAR_20 - VAR_19);
     VAR_23 = FUNC_19("%.*s", VAR_25, VAR_19);
     VAR_21 = VAR_23;
     VAR_20++;
 }
 else
 {

     VAR_21 = VAR_19;
     VAR_20 = "true";
 }

 VAR_22 = FUNC_7(VAR_13, VAR_21, &VAR_24);

 if (!VAR_22)
     return FUNC_15("Unknown parameter '%s'", VAR_21);

 if (VAR_11)
     VAR_15 = FUNC_14(VAR_13, VAR_21,
    VAR_22, VAR_24,
    VAR_20, &VAR_14);
 else
     VAR_15 = FUNC_2(VAR_13, VAR_21,
        VAR_22, VAR_24,
        VAR_20);
 if (VAR_15 != 0)
     return FUNC_15("Failed to set %s=%s", VAR_21, VAR_20);

 VAR_10 = FUNC_19("%s %s=%s",
       VAR_10 ? VAR_10 : "",
       VAR_21, VAR_20);

 FUNC_16(VAR_23);
    }

    if (VAR_11)
    {

        VAR_13 = FUNC_3(2048 + 256 * VAR_14.num_strings);

        for (VAR_17 = 0; VAR_17 < VAR_14.num_strings; VAR_17++)
        {
            int VAR_26, VAR_27, VAR_28;
            const char *VAR_29, *VAR_30;
            const void *VAR_31;

            VAR_29 = VAR_14.strings[VAR_17];
            FUNC_20(VAR_29, "%8x", &VAR_26);
            VAR_30 = VAR_29 + 8;
            VAR_27 = FUNC_8(VAR_12, VAR_26);

            VAR_31 = FUNC_10(VAR_12, VAR_27,
                                               VAR_30, &VAR_28);
            VAR_15 = FUNC_4(VAR_13, VAR_17, VAR_26,
                                   VAR_30, VAR_31, VAR_28);
        }

        FUNC_9(VAR_12);
    }







    FUNC_5(VAR_13, "/__symbols__", 0);

    if (VAR_10)
 FUNC_6(VAR_13, VAR_10,
      FUNC_24(VAR_10) + 1);


    VAR_9 = FUNC_19("%s/%s.dtbo", VAR_3, VAR_8);


    FUNC_12(VAR_13);
    FUNC_13(VAR_13, VAR_9);
    FUNC_9(VAR_13);

    if (!VAR_0 && !FUNC_1(VAR_9, VAR_8))
    {
 if (VAR_1)
 {
     FUNC_17(VAR_9, VAR_1);
     FUNC_16(VAR_1);
 }
 return 1;
    }

    return 0;
}
