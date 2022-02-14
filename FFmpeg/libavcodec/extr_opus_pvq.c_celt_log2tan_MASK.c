
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;
    VAR_2 = FUNC_1(VAR_1);
    VAR_3 = FUNC_1(VAR_0);
    VAR_1 <<= 15 - VAR_2;
    VAR_0 <<= 15 - VAR_3;
    return (VAR_3 << 11) - (VAR_2 << 11) +
           FUNC_0(VAR_0, FUNC_0(VAR_0, -2597) + 7932) -
           FUNC_0(VAR_1, FUNC_0(VAR_1, -2597) + 7932);
}
