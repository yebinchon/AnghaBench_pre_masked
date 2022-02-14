
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int64_t FUNC_1(AVIOContext *VAR_2)
{
    uint64_t VAR_3 = FUNC_0(VAR_2);
    if (VAR_3 & 0x80) {
        int VAR_4 = VAR_3 & 0x7f;

        if (VAR_4 > 8)
            return VAR_0;
        VAR_3 = 0;
        while (VAR_4--)
            VAR_3 = VAR_3 << 8 | FUNC_0(VAR_2);
    }
    if (VAR_3 > VAR_1)
        return VAR_0;
    return VAR_3;
}
