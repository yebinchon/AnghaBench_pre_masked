
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct mca_driver {scalar_t__ integrated_id; TYPE_1__ driver; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

int FUNC_1(struct mca_driver *VAR_2)
{
 int VAR_3;

 if (VAR_0) {
  VAR_2->driver.bus = &VAR_1;
  if ((VAR_3 = FUNC_0(&VAR_2->driver)) < 0)
   return VAR_3;
  VAR_2->integrated_id = 0;
 }

 return 0;
}
