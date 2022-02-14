
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int error; int warning; int characters; int endElement; int startElement; int initialized; } ;
typedef TYPE_1__ xmlSAXHandler ;
typedef int parser ;
struct TYPE_7__ {int * plist; void* tag_stack; void* stack; int * value; int * key; scalar_t__ closed_top; } ;
typedef TYPE_2__ parse_data_t ;
typedef int hb_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void**) ;
 void* FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,char const*,size_t) ;

hb_value_t*
FUNC_7(const char *VAR_6, size_t VAR_7)
{
    xmlSAXHandler VAR_8;
    parse_data_t VAR_9;

    VAR_9.stack = FUNC_4();
    VAR_9.tag_stack = FUNC_4();
    VAR_9.key = ((void*)0);
    VAR_9.value = ((void*)0);
    VAR_9.plist = ((void*)0);
    VAR_9.closed_top = 0;

    FUNC_2(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.initialized = VAR_0;
    VAR_8.startElement = VAR_4;
    VAR_8.endElement = VAR_1;
    VAR_8.characters = VAR_5;
    VAR_8.warning = VAR_3;
    VAR_8.error = VAR_2;
    int VAR_10 = FUNC_6(&VAR_8, &VAR_9, VAR_6, VAR_7);
    if (VAR_10 != 0)
    {
        FUNC_1("Plist parse failed");
        return ((void*)0);
    }
    FUNC_5();

    if (VAR_9.key) FUNC_0(VAR_9.key);
    if (VAR_9.value) FUNC_0(VAR_9.value);
    FUNC_3(&VAR_9.stack);
    FUNC_3(&VAR_9.tag_stack);

    return VAR_9.plist;
}
