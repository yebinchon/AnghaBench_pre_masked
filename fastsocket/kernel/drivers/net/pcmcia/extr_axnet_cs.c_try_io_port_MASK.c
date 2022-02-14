
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int NumPorts1; scalar_t__ NumPorts2; int BasePort1; int IOAddrLines; int BasePort2; void* Attributes2; void* Attributes1; } ;
struct TYPE_3__ {int Attributes; } ;
struct pcmcia_device {TYPE_2__ io; TYPE_1__ irq; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_5)
{
    int VAR_6, VAR_7;
    if (VAR_5->io.NumPorts1 == 32) {
 VAR_5->io.Attributes1 = VAR_2;
 if (VAR_5->io.NumPorts2 > 0) {

     VAR_5->io.Attributes2 = VAR_1;
     VAR_5->irq.Attributes =
  VAR_4|VAR_3;
 }
    } else {

 VAR_5->io.Attributes1 = VAR_1;
 VAR_5->io.Attributes2 = VAR_0;
    }
    if (VAR_5->io.BasePort1 == 0) {
 VAR_5->io.IOAddrLines = 16;
 for (VAR_6 = 0; VAR_6 < 0x400; VAR_6 += 0x20) {
     VAR_5->io.BasePort1 = VAR_6 ^ 0x300;
     VAR_5->io.BasePort2 = (VAR_6 ^ 0x300) + 0x10;
     VAR_7 = FUNC_0(VAR_5, &VAR_5->io);
     if (VAR_7 == 0)
      return VAR_7;
 }
 return VAR_7;
    } else {
 return FUNC_0(VAR_5, &VAR_5->io);
    }
}
