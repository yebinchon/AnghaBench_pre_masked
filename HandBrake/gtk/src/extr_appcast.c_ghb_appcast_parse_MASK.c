
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* version; scalar_t__* build; int description; int tag_stack; int * value; int * key; int item; } ;
typedef TYPE_1__ parse_data_t ;
typedef int gint ;
typedef scalar_t__ gchar ;
struct TYPE_6__ {int error; int passthrough; int text; int end_element; int start_element; } ;
typedef TYPE_2__ GMarkupParser ;
typedef int GMarkupParseContext ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,int ,TYPE_1__*,int ) ;
 int FUNC_3 (int *,scalar_t__*,int ,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 scalar_t__* FUNC_8 (scalar_t__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__* FUNC_10 (scalar_t__*,char*) ;
 int VAR_7 ;

void
FUNC_11(gchar *VAR_8, gchar **VAR_9, gchar **VAR_10, gchar **VAR_11)
{
    GMarkupParseContext *VAR_12;
    GMarkupParser VAR_13;
    parse_data_t VAR_14;
    GError *VAR_15 = ((void*)0);
    gint VAR_16;
    gchar *VAR_17;



    VAR_17 = FUNC_10(VAR_8, "<?xml ");
    VAR_14.description = FUNC_7("");
    VAR_14.item = VAR_0;
    VAR_14.build = ((void*)0);
    VAR_14.version = ((void*)0);
    VAR_16 = FUNC_9(VAR_17);
    VAR_14.tag_stack = FUNC_5();
    VAR_14.key = ((void*)0);
    VAR_14.value = ((void*)0);

    VAR_13.start_element = VAR_6;
    VAR_13.end_element = VAR_3;
    VAR_13.text = VAR_7;
    VAR_13.passthrough = VAR_5;
    VAR_13.error = VAR_4;
    VAR_12 = FUNC_2(
            &VAR_13, VAR_1, &VAR_14, VAR_2);

    FUNC_3(VAR_12, VAR_17, VAR_16, &VAR_15);
    FUNC_0(VAR_12, &VAR_15);
    FUNC_1(VAR_12);
    FUNC_4(VAR_14.tag_stack);
    *VAR_9 = FUNC_6(VAR_14.description, VAR_0);

    gchar *VAR_18;
    VAR_18 = FUNC_8(*VAR_9, "]]>");
    if (VAR_18)
        *VAR_18 = 0;
    *VAR_10 = VAR_14.build;
    *VAR_11 = VAR_14.version;
}
