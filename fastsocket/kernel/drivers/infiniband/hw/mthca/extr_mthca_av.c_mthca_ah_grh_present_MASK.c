
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_ah {TYPE_1__* av; } ;
struct TYPE_2__ {int g_slid; } ;



int FUNC_0(struct mthca_ah *VAR_0)
{
 return !!(VAR_0->av->g_slid & 0x80);
}
