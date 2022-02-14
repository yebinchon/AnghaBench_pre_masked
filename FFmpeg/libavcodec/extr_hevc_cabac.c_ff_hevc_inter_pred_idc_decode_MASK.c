
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* HEVClc; } ;
struct TYPE_4__ {scalar_t__ ct_depth; } ;
typedef TYPE_2__ HEVCContext ;


 int FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

int FUNC_1(HEVCContext *VAR_3, int VAR_4, int VAR_5)
{
    if (VAR_4 + VAR_5 == 12)
        return FUNC_0(VAR_2[VAR_0] + 4);
    if (FUNC_0(VAR_2[VAR_0] + VAR_3->HEVClc->ct_depth))
        return VAR_1;

    return FUNC_0(VAR_2[VAR_0] + 4);
}
