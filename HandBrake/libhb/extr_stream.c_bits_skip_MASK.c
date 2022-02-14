
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitbuf_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline int FUNC_1(bitbuf_t *VAR_0, int VAR_1)
{
    if (VAR_1 <= 0)
        return 0;
    while (VAR_1 > 32)
    {
        FUNC_0(VAR_0, 32);
        VAR_1 -= 32;
    }
    FUNC_0(VAR_0, VAR_1);
    return 0;
}
