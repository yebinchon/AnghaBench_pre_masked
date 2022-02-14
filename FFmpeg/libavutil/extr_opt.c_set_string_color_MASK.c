
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVOption ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,char const*) ;
 int FUNC_1 (int *,char const*,int,void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const AVOption *VAR_2, const char *VAR_3, uint8_t *VAR_4)
{
    int VAR_5;

    if (!VAR_3) {
        return 0;
    } else {
        VAR_5 = FUNC_1(VAR_4, VAR_3, -1, VAR_1);
        if (VAR_5 < 0)
            FUNC_0(VAR_1, VAR_0, "Unable to parse option value \"%s\" as color\n", VAR_3);
        return VAR_5;
    }
    return 0;
}
