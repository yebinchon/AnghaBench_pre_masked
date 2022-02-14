
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;
 char const** VAR_0 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char **VAR_1) {
    int VAR_2 = 0;
    for (; VAR_2 < 12; VAR_2++) {
        if (!FUNC_0(*VAR_1, VAR_0[VAR_2], 3)) {
            const char *VAR_3 = VAR_0[VAR_2] + 3;
            int VAR_4 = FUNC_1(VAR_3);
            *VAR_1 += 3;
            if (VAR_4 > 0 && !FUNC_0(*VAR_1, VAR_3, VAR_4))
                *VAR_1 += VAR_4;
            return VAR_2;
        }
    }
    return -1;
}
