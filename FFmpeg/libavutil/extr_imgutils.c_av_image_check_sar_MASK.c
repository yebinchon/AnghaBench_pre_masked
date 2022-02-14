
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ den; scalar_t__ num; } ;
typedef TYPE_1__ AVRational ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int,scalar_t__,scalar_t__,int ) ;

int FUNC_2(unsigned int VAR_2, unsigned int VAR_3, AVRational VAR_4)
{
    int64_t VAR_5;

    if (VAR_4.den <= 0 || VAR_4.num < 0)
        return FUNC_0(VAR_1);

    if (!VAR_4.num || VAR_4.num == VAR_4.den)
        return 0;

    if (VAR_4.num < VAR_4.den)
        VAR_5 = FUNC_1(VAR_2, VAR_4.num, VAR_4.den, VAR_0);
    else
        VAR_5 = FUNC_1(VAR_3, VAR_4.den, VAR_4.num, VAR_0);

    if (VAR_5 > 0)
        return 0;

    return FUNC_0(VAR_1);
}
