
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const char* VAR_0) {
    if (FUNC_1(VAR_0, "{\\an", 4) != 0) {
        return 0;
    }
    if (!FUNC_0(VAR_0[4])) {
        return 0;
    }
    if (VAR_0[5] != '}') {
        return 0;
    }
    return 1;
}
