
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int numbacktrace; int * addr; } ;
struct TYPE_5__ {TYPE_1__ bt; } ;
typedef TYPE_2__ SH2_struct ;



u32 *FUNC_0(SH2_struct *VAR_0, int *VAR_1)
{
   *VAR_1 = VAR_0->bt.numbacktrace;
   return VAR_0->bt.addr;
}
