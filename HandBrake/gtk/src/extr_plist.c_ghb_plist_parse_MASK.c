
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * plist; void* tag_stack; void* stack; int * value; int * key; int closed_top; } ;
typedef TYPE_1__ parse_data_t ;
typedef int gssize ;
typedef int gchar ;
struct TYPE_6__ {int error; int passthrough; int text; int end_element; int start_element; } ;
typedef int GhbValue ;
typedef TYPE_2__ GMarkupParser ;
typedef int GMarkupParseContext ;
typedef int GError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,int ,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int const*,int ,int **) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

GhbValue*
FUNC_7(const gchar *VAR_7, gssize VAR_8)
{
    GMarkupParseContext *VAR_9;
    GMarkupParser VAR_10;
    parse_data_t VAR_11;
    GError *VAR_12 = ((void*)0);

    VAR_11.stack = FUNC_6();
    VAR_11.tag_stack = FUNC_6();
    VAR_11.key = ((void*)0);
    VAR_11.value = ((void*)0);
    VAR_11.plist = ((void*)0);
    VAR_11.closed_top = VAR_0;

    VAR_10.start_element = VAR_5;
    VAR_10.end_element = VAR_2;
    VAR_10.text = VAR_6;
    VAR_10.passthrough = VAR_4;
    VAR_10.error = VAR_3;
    VAR_9 = FUNC_3(&VAR_10, 0, &VAR_11, VAR_1);

    FUNC_4(VAR_9, VAR_7, VAR_8, &VAR_12);
    FUNC_1(VAR_9, &VAR_12);
    FUNC_2(VAR_9);
    if (VAR_11.key) FUNC_0(VAR_11.key);
    if (VAR_11.value) FUNC_0(VAR_11.value);
    FUNC_5(VAR_11.stack);
    FUNC_5(VAR_11.tag_stack);
    return VAR_11.plist;
}
