
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ setup_done; } ;
struct ssb_bus {int chipco; TYPE_1__ pcicore; int * mapped_device; } ;


 int FUNC_0 (struct ssb_bus*) ;
 int FUNC_1 (struct ssb_bus*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ssb_bus*) ;

int FUNC_4(struct ssb_bus *VAR_0)
{
 int VAR_1;



 VAR_0->mapped_device = ((void*)0);




 VAR_1 = FUNC_1(VAR_0, 0);
 if (VAR_1)
  return VAR_1;
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0);
  return VAR_1;
 }
 FUNC_2(&VAR_0->chipco);
 FUNC_0(VAR_0);

 return 0;
}
