
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1, const char *VAR_2, const char *VAR_3,
                           char *VAR_4, int VAR_5, int VAR_6)
{
    if (!FUNC_3(VAR_2, "map")) {
        int VAR_7 = FUNC_2(VAR_1, VAR_3);

        if (VAR_7 < 0)
            return VAR_7;
        return FUNC_1(VAR_1);
    }
    return FUNC_0(VAR_0);
}
