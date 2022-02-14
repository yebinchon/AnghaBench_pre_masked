
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {TYPE_2__* internal; } ;
struct TYPE_6__ {TYPE_1__* priv_pts; } ;
struct TYPE_5__ {int val; } ;
typedef TYPE_3__ AVStream ;


 int VAR_0 ;

int64_t FUNC_0(const AVStream *VAR_1)
{
    if (VAR_1->internal->priv_pts) {
        return VAR_1->internal->priv_pts->val;
    } else
        return VAR_0;
}
