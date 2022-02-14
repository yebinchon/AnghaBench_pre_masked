
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int num; int den; } ;
typedef TYPE_1__ AVRational ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int,int,int ) ;

AVRational FUNC_1(AVRational VAR_1, AVRational VAR_2)
{
    FUNC_0(&VAR_1.num, &VAR_1.den,
               VAR_1.num * (int64_t) VAR_2.num,
               VAR_1.den * (int64_t) VAR_2.den, VAR_0);
    return VAR_1;
}
