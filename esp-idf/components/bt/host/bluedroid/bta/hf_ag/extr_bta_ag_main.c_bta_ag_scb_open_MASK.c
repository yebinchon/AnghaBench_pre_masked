
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; scalar_t__ in_use; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_0(tBTA_AG_SCB *VAR_3)
{
    if (VAR_3 && VAR_3->in_use && VAR_3->state == VAR_0) {
        return VAR_2;
    }
    return VAR_1;
}
