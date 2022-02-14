
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attack_option {struct attack_option* val; } ;


 int FUNC_0 (struct attack_option*) ;

__attribute__((used)) static void FUNC_1(struct attack_option *VAR_0, int VAR_1)
{
    int VAR_2;

    if (VAR_0 == ((void*)0))
        return;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        if (VAR_0[VAR_2].val != ((void*)0))
            FUNC_0(VAR_0[VAR_2].val);
    }
    FUNC_0(VAR_0);
}
