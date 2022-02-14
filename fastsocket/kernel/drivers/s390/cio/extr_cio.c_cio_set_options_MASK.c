
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int suspend; int prefetch; int inter; } ;
struct subchannel {TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0 (struct subchannel *VAR_3, int VAR_4)
{
       VAR_3->options.suspend = (VAR_4 & VAR_0) != 0;
       VAR_3->options.prefetch = (VAR_4 & VAR_1) != 0;
       VAR_3->options.inter = (VAR_4 & VAR_2) != 0;
       return 0;
}
