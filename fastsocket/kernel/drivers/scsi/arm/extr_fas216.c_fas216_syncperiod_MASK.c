
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int clockrate; } ;
struct TYPE_6__ {TYPE_1__ ifcfg; } ;
typedef TYPE_2__ FAS216_Info ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(FAS216_Info *VAR_0, int VAR_1)
{
 int VAR_2 = (VAR_0->ifcfg.clockrate * VAR_1) / 1000;

 FUNC_0(VAR_0);

 if (VAR_2 < 4)
  VAR_2 = 4;
 else if (VAR_2 > 35)
  VAR_2 = 35;

 return VAR_2 & 31;
}
