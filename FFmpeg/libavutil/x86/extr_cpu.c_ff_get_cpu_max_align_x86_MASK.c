
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 () ;

size_t FUNC_1(void)
{
    int VAR_18 = FUNC_0();

    if (VAR_18 & VAR_4)
        return 64;
    if (VAR_18 & (VAR_3 |
                 VAR_2 |
                 VAR_17 |
                 VAR_7 |
                 VAR_6 |
                 VAR_5))
        return 32;
    if (VAR_18 & (VAR_0 |
                 VAR_14 |
                 VAR_13 |
                 VAR_15 |
                 VAR_11 |
                 VAR_9 |
                 VAR_8 |
                 VAR_1 |
                 VAR_16 |
                 VAR_12 |
                 VAR_10))
        return 16;

    return 8;
}
