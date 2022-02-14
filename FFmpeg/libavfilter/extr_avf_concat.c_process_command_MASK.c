
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2, const char *VAR_3, const char *VAR_4,
                           char *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8 = FUNC_0(VAR_1);

    if (!FUNC_3(VAR_3, "next")) {
        FUNC_1(VAR_2, VAR_0, "Command received: next\n");
        return FUNC_2(VAR_2);
    }

    return VAR_8;
}
