
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(GetByteContext *VAR_0, int *VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = 4;
    *VAR_1 = FUNC_0(VAR_0);
    while (VAR_3--) {
        int VAR_4 = FUNC_0(VAR_0);
        VAR_2 = (VAR_2 << 7) | (VAR_4 & 0x7f);
        if (!(VAR_4 & 0x80))
            break;
    }
    return VAR_2;
}
