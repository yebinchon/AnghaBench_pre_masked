
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVRational ;
typedef int AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,char*,char const*) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, const AVOption *VAR_3, const char *VAR_4, AVRational *VAR_5)
{
    int VAR_6;
    if (!VAR_4) {
        VAR_6 = FUNC_0(VAR_1);
    } else {
        VAR_6 = FUNC_2(VAR_5, VAR_4);
    }
    if (VAR_6 < 0)
        FUNC_1(VAR_2, VAR_0, "Unable to parse option value \"%s\" as video rate\n", VAR_4);
    return VAR_6;
}
