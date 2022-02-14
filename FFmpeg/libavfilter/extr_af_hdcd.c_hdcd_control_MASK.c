
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int control; } ;
typedef TYPE_1__ hdcd_state ;
struct TYPE_6__ {scalar_t__ force_pe; } ;
typedef TYPE_2__ HDCDContext ;



__attribute__((used)) static void FUNC_0(HDCDContext *VAR_0, hdcd_state *VAR_1, int *VAR_2, int *VAR_3)
{
    *VAR_2 = (VAR_0->force_pe || VAR_1->control & 16);
    *VAR_3 = (VAR_1->control & 15) << 7;
}
