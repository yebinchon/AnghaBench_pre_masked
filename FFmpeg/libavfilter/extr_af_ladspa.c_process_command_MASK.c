
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long LADSPA_Data ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,unsigned long*) ;
 int FUNC_2 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1, const char *VAR_2, const char *VAR_3,
                           char *VAR_4, int VAR_5, int VAR_6)
{
    LADSPA_Data VAR_7;
    unsigned long VAR_8;

    if (FUNC_1(VAR_2, "c%ld", &VAR_8) + FUNC_1(VAR_3, "%f", &VAR_7) != 2)
        return FUNC_0(VAR_0);

    return FUNC_2(VAR_1, VAR_8, VAR_7);
}
