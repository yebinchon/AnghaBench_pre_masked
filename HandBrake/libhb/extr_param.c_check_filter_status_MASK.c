
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, hb_value_t *VAR_1)
{
    int VAR_2 = 0;

    if (VAR_1 == ((void*)0))
    {
        return;
    }
    switch (VAR_0)
    {
        case 128:
        {
            int VAR_3 = FUNC_0(VAR_1, "angle");
            int VAR_4 = FUNC_0(VAR_1, "hflip");
            VAR_2 = VAR_3 == 0 && VAR_4 == 0;
        } break;
        default:
        {
        } break;
    }
    if (VAR_2)
    {
        FUNC_1(VAR_1, "disable", FUNC_2(VAR_2));
    }
}
