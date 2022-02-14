
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* class_name; } ;
struct TYPE_6__ {TYPE_2__* priv_class; } ;
typedef TYPE_1__ AVCodec ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(void)
{
    AVCodec *VAR_0 = ((void*)0);

    FUNC_2("@section Generic codec AVOptions\n");
    FUNC_3(FUNC_1());

    FUNC_2("@section Codec-specific AVOptions\n");
    while ((VAR_0 = FUNC_0(VAR_0))) {
        if (!VAR_0->priv_class)
            continue;
        FUNC_2("@subsection %s AVOptions\n", VAR_0->priv_class->class_name);
        FUNC_3(VAR_0->priv_class);
    }
}
