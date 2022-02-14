
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_preset_index_t ;
typedef int gint ;
typedef int GhbValue ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static gint
FUNC_3(hb_preset_index_t *VAR_0)
{
    GhbValue *VAR_1;
    VAR_1 = FUNC_2(VAR_0);
    if (VAR_1)
    {
        return FUNC_1(VAR_1, "Type");
    }
    else
    {
        FUNC_0("ghb_preset_get_type (): internal preset lookup error");
        return 0;
    }
    return 0;
}
