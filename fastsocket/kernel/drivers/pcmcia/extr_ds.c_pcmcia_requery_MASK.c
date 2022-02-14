
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct pcmcia_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,struct device*,char*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 struct pcmcia_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void * VAR_1)
{
 struct pcmcia_device *VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2->dev.driver) {
  FUNC_0(1, VAR_0, "update device information\n");
  FUNC_1(VAR_2);
 }

 return 0;
}
