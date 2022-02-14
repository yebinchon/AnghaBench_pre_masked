
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_2, const int VAR_3)
{
    VAR_2 ^= (VAR_3 << VAR_0);
    if (VAR_2 >= VAR_1)
        VAR_2 -= VAR_1;
    FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1);
    return VAR_2;
}
