
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (double,long) ;

__attribute__((used)) static float FUNC_1(unsigned VAR_0)
{
    double VAR_1 = VAR_0 & 0x1fffff;
    long VAR_2 = (VAR_0 & 0x7fe00000L) >> 21;
    if (VAR_0 & 0x80000000)
        VAR_1 = -VAR_1;
    return FUNC_0(VAR_1, VAR_2 - 20 - 768);
}
