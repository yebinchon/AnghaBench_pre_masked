
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cl_mem_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline cl_mem_flags FUNC_0(int VAR_5)
{
    if ((VAR_5 & VAR_0) &&
        (VAR_5 & VAR_1))
        return VAR_3;
    else if (VAR_5 & VAR_0)
        return VAR_2;
    else if (VAR_5 & VAR_1)
        return VAR_4;
    else
        return 0;
}
