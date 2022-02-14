
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, int VAR_3) {
    if (VAR_2 & VAR_0) {
        int VAR_4 = VAR_3 % 3;
        VAR_3 /= 3;
        if (VAR_4 == 0 && VAR_3 > 2)
            return 2;
        if (VAR_4 == 2 && VAR_3 > 2)
            return 1;
        if (VAR_2 & VAR_1) {
            return VAR_3 > 2 ? 2 : 1;
        }
    }
    if (VAR_2 & VAR_1)
        return 1;
    return 0;
}
