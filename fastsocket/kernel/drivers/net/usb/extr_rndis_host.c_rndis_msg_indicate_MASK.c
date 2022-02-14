
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_2__* driver_info; int data; } ;
struct rndis_indicate {int status; } ;
struct device {int dummy; } ;
struct cdc_state {TYPE_1__* control; } ;
struct TYPE_4__ {int (* indication ) (struct usbnet*,struct rndis_indicate*,int) ;} ;
struct TYPE_3__ {struct device dev; } ;




 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usbnet*,struct rndis_indicate*,int) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0, struct rndis_indicate *VAR_1,
    int VAR_2)
{
 struct cdc_state *VAR_3 = (void *)&VAR_0->data;
 struct device *VAR_4 = &VAR_3->control->dev;

 if (VAR_0->driver_info->indication) {
  VAR_0->driver_info->indication(VAR_0, VAR_1, VAR_2);
 } else {
  switch (VAR_1->status) {
  case 129:
   FUNC_0(VAR_4, "rndis media connect\n");
   break;
  case 128:
   FUNC_0(VAR_4, "rndis media disconnect\n");
   break;
  default:
   FUNC_0(VAR_4, "rndis indication: 0x%08x\n",
     FUNC_1(VAR_1->status));
  }
 }
}
