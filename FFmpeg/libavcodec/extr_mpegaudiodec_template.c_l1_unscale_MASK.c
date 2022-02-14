
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long int64_t ;


 long long FUNC_0 (int,int ) ;
 int* VAR_0 ;
 int ** VAR_1 ;

__attribute__((used)) static inline int FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int64_t VAR_7;

    VAR_5 = VAR_0[VAR_4];
    VAR_6 = VAR_5 & 3;
    VAR_5 >>= 2;
    VAR_7 = FUNC_0((int)(VAR_3 + (-1U << VAR_2) + 1), VAR_1[VAR_2-1][VAR_6]);
    VAR_5 += VAR_2;

    return (int)((VAR_7 + (1LL << (VAR_5 - 1))) >> VAR_5);
}
