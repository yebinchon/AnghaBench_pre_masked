
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int signal_user_data_t ;
struct TYPE_4__ {char* member_0; char* member_2; char* member_3; int * member_1; int member_4; } ;
typedef int GApplication ;
typedef TYPE_1__ GActionEntry ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int ,TYPE_1__ const*,int ,int *) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int * VAR_36 ;
 int * VAR_37 ;

__attribute__((used)) static void FUNC_3(GApplication * VAR_38, signal_user_data_t * VAR_39)
{
    const GActionEntry VAR_40[] =
    {
        { "source", VAR_37 },
        { "single", VAR_36 },
        { "destination", VAR_1 },
        { "preferences", VAR_4 },
        { "quit", VAR_31 },
        { "queue-add", VAR_15 },
        { "queue-add-all", VAR_16 },
        { "queue-start", VAR_30 },
        { "queue-pause", VAR_26 },
        { "queue-open-source", VAR_25 },
        { "queue-open-dest", VAR_22 },
        { "queue-open-log-dir", VAR_24 },
        { "queue-open-log", VAR_23 },
        { "queue-reset-fail", VAR_29 },
        { "queue-reset-all", VAR_28 },
        { "queue-reset", VAR_27 },
        { "queue-delete-complete", VAR_18 },
        { "queue-delete-all", VAR_17 },
        { "queue-export", VAR_20 },
        { "queue-import", VAR_21 },
        { "queue-edit", VAR_19 },
        { "hbfd", ((void*)0),
          ((void*)0), "false", VAR_3 },
        { "show-presets", ((void*)0),
          ((void*)0), "false", VAR_33 },
        { "show-queue", ((void*)0),
          ((void*)0), "false", VAR_35 },
        { "show-preview", ((void*)0),
          ((void*)0), "false", VAR_34 },
        { "show-activity", ((void*)0),
          ((void*)0), "false", VAR_32 },
        { "preset-save", VAR_11 },
        { "preset-save-as", VAR_12 },
        { "preset-rename", VAR_10 },
        { "preset-remove", VAR_9 },
        { "preset-default", VAR_5 },
        { "preset-export", VAR_6 },
        { "preset-import", VAR_7 },
        { "presets-reload", VAR_14 },
        { "about", VAR_0 },
        { "guide", VAR_2 },
        { "preset-select", VAR_13, "s" },
        { "preset-reload", VAR_8, },
    };
    FUNC_2(FUNC_0(VAR_38), VAR_40,
                                    FUNC_1(VAR_40), VAR_39);
}
