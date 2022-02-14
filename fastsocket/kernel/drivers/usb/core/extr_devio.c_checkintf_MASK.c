
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dev_state {TYPE_1__* dev; int ifclaimed; } ;
struct TYPE_5__ {int comm; } ;
struct TYPE_4__ {scalar_t__ state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dev_state*,unsigned int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *,char*,int ,int ,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_4(struct dev_state *VAR_4, unsigned int VAR_5)
{
 if (VAR_4->dev->state != VAR_2)
  return -VAR_0;
 if (VAR_5 >= 8*sizeof(VAR_4->ifclaimed))
  return -VAR_1;
 if (FUNC_3(VAR_5, &VAR_4->ifclaimed))
  return 0;

 FUNC_1(&VAR_4->dev->dev, "usbfs: process %d (%s) did not claim "
   "interface %u before use\n", FUNC_2(VAR_3),
   VAR_3->comm, VAR_5);
 return FUNC_0(VAR_4, VAR_5);
}
