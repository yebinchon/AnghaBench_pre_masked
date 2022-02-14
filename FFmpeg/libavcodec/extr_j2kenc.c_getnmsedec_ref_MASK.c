
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4, int VAR_5)
{
    if (VAR_5 > VAR_1)
        return VAR_2[(VAR_4 >> (VAR_5 - VAR_1)) & ((1 << VAR_0) - 1)];
    return VAR_3[VAR_4 & ((1 << VAR_0) - 1)];
}
