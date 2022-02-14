
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static unsigned int FUNC_1(AVIOContext *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    while (VAR_1--)
        VAR_2 = (VAR_2 << 7) + (FUNC_0(VAR_0) & 0x7F);
    return VAR_2;
}
