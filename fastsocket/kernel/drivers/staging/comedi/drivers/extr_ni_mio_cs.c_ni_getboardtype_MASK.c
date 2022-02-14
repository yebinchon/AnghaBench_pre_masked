
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int device_id; } ;


 int FUNC_0 (struct comedi_device*,struct pcmcia_device*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
      struct pcmcia_device *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5].device_id == VAR_4) {
   return VAR_5;
  }
 }

 FUNC_1("unknown board 0x%04x -- pretend it is a ", VAR_4);

 return 0;
}
