
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_info {scalar_t__ multi; } ;
struct TYPE_2__ {int ExtStatus; int Present; } ;
struct pcmcia_device {TYPE_1__ conf; struct serial_info* priv; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct pcmcia_device *VAR_2)
{
 struct serial_info *VAR_3 = VAR_2->priv;

 if (VAR_3->multi) {
  VAR_2->conf.Present |= VAR_1;
  VAR_2->conf.ExtStatus = VAR_0;
 }
}
