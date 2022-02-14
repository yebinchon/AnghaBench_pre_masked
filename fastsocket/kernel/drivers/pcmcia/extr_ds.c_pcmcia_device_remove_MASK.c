
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct pcmcia_driver {int owner; TYPE_1__ drv; int (* remove ) (struct pcmcia_device*) ;} ;
struct pcmcia_device_id {int match_flags; } ;
struct pcmcia_device {scalar_t__ device_no; int _win; scalar_t__ _locked; scalar_t__ _io; scalar_t__ _irq; int * dev_node; TYPE_2__* socket; int dev; } ;
struct device {int driver; } ;
struct TYPE_4__ {scalar_t__ device_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcmcia_device_id* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct device*,char*,int ) ;
 int FUNC_3 (int,struct device*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,struct pcmcia_device*) ;
 int FUNC_6 (struct pcmcia_device*) ;
 int FUNC_7 (struct pcmcia_device*) ;
 struct pcmcia_device* FUNC_8 (struct device*) ;
 struct pcmcia_driver* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct device * VAR_3)
{
 struct pcmcia_device *VAR_4;
 struct pcmcia_driver *VAR_5;
 struct pcmcia_device_id *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_8(VAR_3);
 VAR_5 = FUNC_9(VAR_3->driver);

 FUNC_3(1, VAR_3, "removing device\n");





 VAR_6 = FUNC_1(&VAR_4->dev);
 if (VAR_6 && (VAR_6->match_flags & VAR_2) &&
     (VAR_4->socket->device_count != 0) &&
     (VAR_4->device_no == 0))
  FUNC_5(VAR_4->socket, VAR_4);


 if (!VAR_5)
  return 0;

 if (VAR_5->remove)
         VAR_5->remove(VAR_4);

 VAR_4->dev_node = ((void*)0);


 if (VAR_4->_irq || VAR_4->_io || VAR_4->_locked)
  FUNC_2(VAR_0, VAR_3,
   "pcmcia: driver %s did not release config properly\n",
   VAR_5->drv.name);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_4->_win & FUNC_0(VAR_7))
   FUNC_2(VAR_0, VAR_3,
     "pcmcia: driver %s did not release window properly\n",
      VAR_5->drv.name);


 FUNC_6(VAR_4);
 FUNC_4(VAR_5->owner);

 return 0;
}
