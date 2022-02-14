
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int BasePort1; } ;
struct TYPE_3__ {int ConfigIndex; } ;
struct pcmcia_device {TYPE_2__ io; TYPE_1__ conf; } ;


 int FUNC_0 (struct pcmcia_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_0)
{
    int VAR_1;
    unsigned int VAR_2;




    for (VAR_2 = 0x300; VAR_2 < 0x3e0; VAR_2 += 0x20) {
 VAR_0->io.BasePort1 = VAR_2;
 VAR_1 = FUNC_0(VAR_0, &VAR_0->io);
 if (VAR_1 == 0) {

     VAR_0->conf.ConfigIndex =
  ((VAR_0->io.BasePort1 & 0x0f0) >> 3) | 0x22;
     return VAR_1;
 }
    }
    return VAR_1;
}
