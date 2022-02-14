
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcmcia_socket {int device_count; } ;
struct TYPE_6__ {int name; } ;
struct pcmcia_driver {int (* probe ) (struct pcmcia_device*) ;int owner; TYPE_2__ drv; } ;
struct pcmcia_device_id {int match_flags; } ;
struct TYPE_5__ {scalar_t__ Present; scalar_t__ ConfigBase; } ;
struct pcmcia_device {scalar_t__ device_no; struct pcmcia_socket* socket; TYPE_1__ conf; int func; int function_config; int dev; } ;
struct device {int driver; } ;
struct TYPE_7__ {scalar_t__* rmask; scalar_t__ base; } ;
typedef TYPE_3__ cistpl_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pcmcia_device_id* FUNC_0 (int *) ;
 int FUNC_1 (int ,struct device*,char*) ;
 int FUNC_2 (int,struct device*,char*,int ,...) ;
 struct device* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pcmcia_socket*,int ,int ,TYPE_3__*) ;
 int FUNC_6 (struct pcmcia_socket*,int ) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct pcmcia_device*) ;
 struct pcmcia_device* FUNC_9 (struct device*) ;
 struct pcmcia_driver* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct device * VAR_5)
{
 struct pcmcia_device *VAR_6;
 struct pcmcia_driver *VAR_7;
 struct pcmcia_device_id *VAR_8;
 struct pcmcia_socket *VAR_9;
 cistpl_config_t VAR_10;
 int VAR_11 = 0;

 VAR_5 = FUNC_3(VAR_5);
 if (!VAR_5)
  return -VAR_2;

 VAR_6 = FUNC_9(VAR_5);
 VAR_7 = FUNC_10(VAR_5->driver);
 VAR_9 = VAR_6->socket;
 VAR_8 = FUNC_0(&VAR_6->dev);

 FUNC_2(1, VAR_5, "trying to bind to %s\n", VAR_7->drv.name);

 if ((!VAR_7->probe) || (!VAR_6->function_config) ||
     (!FUNC_11(VAR_7->owner))) {
  VAR_11 = -VAR_1;
  goto put_dev;
 }


 VAR_11 = FUNC_5(VAR_6->socket, VAR_6->func, VAR_0,
    &VAR_10);
 if (!VAR_11) {
  VAR_6->conf.ConfigBase = VAR_10.base;
  VAR_6->conf.Present = VAR_10.rmask[0];
 } else {
  FUNC_1(VAR_3, VAR_5,
      "pcmcia: could not parse base and rmask0 of CIS\n");
  VAR_6->conf.ConfigBase = 0;
  VAR_6->conf.Present = 0;
 }

 VAR_11 = VAR_7->probe(VAR_6);
 if (VAR_11) {
  FUNC_2(1, VAR_5, "binding to %s failed with %d\n",
      VAR_7->drv.name, VAR_11);
  goto put_module;
 }

 if (VAR_8 && (VAR_8->match_flags & VAR_4) &&
     (VAR_6->socket->device_count == 1) && (VAR_6->device_no == 0))
  FUNC_6(VAR_6->socket, 0);

put_module:
 if (VAR_11)
  FUNC_4(VAR_7->owner);
put_dev:
 if (VAR_11)
  FUNC_7(VAR_5);
 return (VAR_11);
}
