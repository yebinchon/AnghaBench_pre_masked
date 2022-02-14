
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; char* name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_1, const char *VAR_2)
{
    int VAR_3;

    FUNC_0("cpu_flags(%s) = 0x%08X\n", VAR_2, VAR_1);
    FUNC_0("cpu_flags_str(%s) =", VAR_2);
    for (VAR_3 = 0; VAR_0[VAR_3].flag; VAR_3++)
        if (VAR_1 & VAR_0[VAR_3].flag)
            FUNC_0(" %s", VAR_0[VAR_3].name);
    FUNC_0("\n");
}
