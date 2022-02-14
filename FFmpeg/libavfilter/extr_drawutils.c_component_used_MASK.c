
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* comp_mask; } ;
typedef TYPE_1__ FFDrawContext ;



__attribute__((used)) static int FUNC_0(FFDrawContext *VAR_0, int VAR_1, int VAR_2)
{
    return (VAR_0->comp_mask[VAR_1] >> VAR_2) & 1;
}
