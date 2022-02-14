
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int den; int num; } ;
typedef TYPE_1__ AVRational ;



__attribute__((used)) static int FUNC_0(AVRational VAR_0)
{
    if (!VAR_0.den || !VAR_0.num)
        return -1;
    return (VAR_0.num + VAR_0.den/2) / VAR_0.den;
}
