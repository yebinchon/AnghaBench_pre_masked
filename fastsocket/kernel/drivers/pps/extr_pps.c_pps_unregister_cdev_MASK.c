
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pps_device {TYPE_1__* dev; int id; } ;
struct TYPE_2__ {int devt; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(struct pps_device *VAR_1)
{
 FUNC_1("unregistering pps%d\n", VAR_1->id);
 FUNC_0(VAR_0, VAR_1->dev->devt);
}
