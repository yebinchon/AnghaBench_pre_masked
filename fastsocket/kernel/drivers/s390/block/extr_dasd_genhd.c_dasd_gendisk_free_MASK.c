
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_block {TYPE_1__* gdp; } ;
struct TYPE_3__ {int * private_data; int * queue; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct dasd_block *VAR_0)
{
 if (VAR_0->gdp) {
  FUNC_0(VAR_0->gdp);
  VAR_0->gdp->queue = ((void*)0);
  VAR_0->gdp->private_data = ((void*)0);
  FUNC_1(VAR_0->gdp);
  VAR_0->gdp = ((void*)0);
 }
}
