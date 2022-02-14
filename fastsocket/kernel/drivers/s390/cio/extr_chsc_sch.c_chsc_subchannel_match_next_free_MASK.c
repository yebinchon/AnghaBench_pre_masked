
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ena; } ;
struct TYPE_4__ {int scsw; TYPE_1__ pmcw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->schib.pmcw.ena && !FUNC_0(&VAR_2->schib.scsw);
}
