
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static inline int FUNC_1(double VAR_1, int VAR_2)
{
    if (FUNC_0(VAR_1))
        return VAR_0;
    return (int)VAR_1 & ~((1 << VAR_2) - 1);
}
