
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,int,char*,int,char const*,double,...) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(void *VAR_1, const char *VAR_2,
                            double VAR_3, double VAR_4, double VAR_5,
                            double VAR_6, int VAR_7)
{
    int VAR_8 = VAR_0;
    if (FUNC_1(VAR_3)) {
        FUNC_0(VAR_1, VAR_8, "[%d] %s is nan, setting it to %g.\n",
               VAR_7, VAR_2, VAR_6);
        VAR_3 = VAR_6;
    } else if (VAR_3 < VAR_4) {
        FUNC_0(VAR_1, VAR_8, "[%d] %s is too low (%g), setting it to %g.\n",
               VAR_7, VAR_2, VAR_3, VAR_4);
        VAR_3 = VAR_4;
    } else if (VAR_3 > VAR_5) {
        FUNC_0(VAR_1, VAR_8, "[%d] %s it too high (%g), setting it to %g.\n",
               VAR_7, VAR_2, VAR_3, VAR_5);
        VAR_3 = VAR_5;
    }
    return VAR_3;
}
