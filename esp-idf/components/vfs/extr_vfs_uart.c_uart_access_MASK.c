
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_7, int VAR_8)
{
    int VAR_9 = -1;

    if (FUNC_0(VAR_7, "/0") == 0 || FUNC_0(VAR_7, "/1") == 0 || FUNC_0(VAR_7, "/2") == 0) {
        if (VAR_2 == VAR_8) {
            VAR_9 = 0;
        } else {
            if ((((VAR_8 & VAR_3) == VAR_3) || ((VAR_8 & VAR_4) == VAR_4)) && ((VAR_8 & VAR_5) != VAR_5)) {
                VAR_9 = 0;
            } else {
                VAR_6 = VAR_0;
            }
        }
    } else {
        VAR_6 = VAR_1;
    }

    return VAR_9;
}
