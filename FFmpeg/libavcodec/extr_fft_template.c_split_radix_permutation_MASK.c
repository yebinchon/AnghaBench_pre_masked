
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    if(VAR_1 <= 2) return VAR_0&1;
    VAR_3 = VAR_1 >> 1;
    if(!(VAR_0&VAR_3)) return FUNC_0(VAR_0, VAR_3, VAR_2)*2;
    VAR_3 >>= 1;
    if(VAR_2 == !(VAR_0&VAR_3)) return FUNC_0(VAR_0, VAR_3, VAR_2)*4 + 1;
    else return FUNC_0(VAR_0, VAR_3, VAR_2)*4 - 1;
}
