
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef enum AVRounding { ____Placeholder_AVRounding } AVRounding ;
struct TYPE_4__ {int num; scalar_t__ den; } ;
typedef TYPE_1__ AVRational ;


 int FUNC_0 (int,int,int,int) ;

int64_t FUNC_1(int64_t VAR_0, AVRational VAR_1, AVRational VAR_2,
                         enum AVRounding VAR_3)
{
    int64_t VAR_4 = VAR_1.num * (int64_t)VAR_2.den;
    int64_t VAR_5 = VAR_2.num * (int64_t)VAR_1.den;
    return FUNC_0(VAR_0, VAR_4, VAR_5, VAR_3);
}
