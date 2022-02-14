
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvd {int last_error; int ifaceAltInactive; int iface; TYPE_2__* dev; int remove_pending; TYPE_1__* sbuf; scalar_t__ streaming; scalar_t__ user_data; } ;
struct qcm {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct uvd*) ;
 int FUNC_3 (struct qcm*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct uvd *VAR_1)
{
 struct qcm *VAR_2 = (struct qcm *) VAR_1->user_data;
 int VAR_3, VAR_4;
 int VAR_5;

 if ((VAR_1 == ((void*)0)) || (!VAR_1->streaming) || (VAR_1->dev == ((void*)0)))
  return;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
  FUNC_0(&VAR_1->dev->dev, "couldn't turn the cam off.\n");

 VAR_1->streaming = 0;


 for (VAR_3=0; VAR_3 < VAR_0; VAR_3++)
  FUNC_4(VAR_1->sbuf[VAR_3].urb);

 FUNC_3(VAR_2);

 if (!VAR_1->remove_pending) {

  VAR_4 = FUNC_5(VAR_1->dev, VAR_1->iface,
     VAR_1->ifaceAltInactive);
  if (VAR_4 < 0) {
   FUNC_1("usb_set_interface() error %d.", VAR_4);
   VAR_1->last_error = VAR_4;
  }
 }
}
