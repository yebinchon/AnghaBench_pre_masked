
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline int64_t FUNC_1(GetBitContext *VAR_0) {
    int64_t VAR_1 = 0;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        int VAR_3 = FUNC_0(VAR_0, 8);
        VAR_1 |= (int64_t)(VAR_3 & 0x7f) << (VAR_2 * 7);
        if (!(VAR_3 & 0x80))
            break;
    }
    return VAR_1;
}
