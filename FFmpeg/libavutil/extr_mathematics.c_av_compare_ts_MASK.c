
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int num; scalar_t__ den; } ;
typedef TYPE_1__ AVRational ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int,int ) ;

int FUNC_2(int64_t VAR_2, AVRational VAR_3, int64_t VAR_4, AVRational VAR_5)
{
    int64_t VAR_6 = VAR_3.num * (int64_t)VAR_5.den;
    int64_t VAR_7 = VAR_5.num * (int64_t)VAR_3.den;
    if ((FUNC_0(VAR_2)|VAR_6|FUNC_0(VAR_4)|VAR_7) <= VAR_1)
        return (VAR_2*VAR_6 > VAR_4*VAR_7) - (VAR_2*VAR_6 < VAR_4*VAR_7);
    if (FUNC_1(VAR_2, VAR_6, VAR_7, VAR_0) < VAR_4)
        return -1;
    if (FUNC_1(VAR_4, VAR_7, VAR_6, VAR_0) < VAR_2)
        return 1;
    return 0;
}
