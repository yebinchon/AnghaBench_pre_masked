
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(void)
{
    int VAR_9 = 0;

    if (FUNC_0(VAR_8) & (1 << 31))
        VAR_9 |= VAR_2;
    if (FUNC_0(VAR_4) & (1 << 31))
        VAR_9 |= VAR_1;
    if (FUNC_0(VAR_6) & (1 << 31))
        VAR_9 |= VAR_0;
    if ((FUNC_0(VAR_5) | FUNC_0(VAR_7)) & (1 << 31))
        VAR_9 |= VAR_3;

    return VAR_9;
}
