
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ name; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;

const AVPixFmtDescriptor *FUNC_1(const AVPixFmtDescriptor *VAR_1)
{
    if (!VAR_1)
        return &VAR_0[0];
    while (VAR_1 - VAR_0 < FUNC_0(VAR_0) - 1) {
        VAR_1++;
        if (VAR_1->name)
            return VAR_1;
    }
    return ((void*)0);
}
