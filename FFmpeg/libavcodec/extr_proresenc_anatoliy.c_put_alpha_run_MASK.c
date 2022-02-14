
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_1(PutBitContext *VAR_0, int VAR_1)
{
    if (VAR_1) {
        FUNC_0(VAR_0, 1, 0);
        if (VAR_1 < 0x10)
            FUNC_0(VAR_0, 4, VAR_1);
        else
            FUNC_0(VAR_0, 15, VAR_1);
    } else {
        FUNC_0(VAR_0, 1, 1);
    }
}
