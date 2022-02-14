
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* class_name; } ;
struct TYPE_8__ {TYPE_3__* priv_class; } ;
struct TYPE_7__ {TYPE_3__* priv_class; } ;
typedef TYPE_1__ AVOutputFormat ;
typedef TYPE_2__ AVInputFormat ;


 TYPE_2__* FUNC_0 (void**) ;
 TYPE_1__* FUNC_1 (void**) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(void)
{
    const AVInputFormat *VAR_0 = ((void*)0);
    const AVOutputFormat *VAR_1 = ((void*)0);
    void *VAR_2 = ((void*)0);
    void *VAR_3 = ((void*)0);

    FUNC_3("@section Generic format AVOptions\n");
    FUNC_4(FUNC_2());

    FUNC_3("@section Format-specific AVOptions\n");
    while ((VAR_0 = FUNC_0(&VAR_2))) {
        if (!VAR_0->priv_class)
            continue;
        FUNC_3("@subsection %s AVOptions\n", VAR_0->priv_class->class_name);
        FUNC_4(VAR_0->priv_class);
    }
    while ((VAR_1 = FUNC_1(&VAR_3))) {
        if (!VAR_1->priv_class)
            continue;
        FUNC_3("@subsection %s AVOptions\n", VAR_1->priv_class->class_name);
        FUNC_4(VAR_1->priv_class);
    }
}
