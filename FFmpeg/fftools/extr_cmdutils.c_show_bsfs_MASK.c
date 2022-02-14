
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ AVBitStreamFilter ;


 TYPE_1__* FUNC_0 (void**) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    const AVBitStreamFilter *VAR_3 = ((void*)0);
    void *VAR_4 = ((void*)0);

    FUNC_1("Bitstream filters:\n");
    while ((VAR_3 = FUNC_0(&VAR_4)))
        FUNC_1("%s\n", VAR_3->name);
    FUNC_1("\n");
    return 0;
}
