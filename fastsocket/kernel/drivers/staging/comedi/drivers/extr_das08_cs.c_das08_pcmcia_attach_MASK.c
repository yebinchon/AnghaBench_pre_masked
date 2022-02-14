
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int IntType; scalar_t__ Attributes; } ;
struct TYPE_3__ {int * Handler; int IRQInfo1; int Attributes; } ;
struct pcmcia_device {TYPE_2__ conf; TYPE_1__ irq; struct local_info_t* priv; } ;
struct local_info_t {struct pcmcia_device* link; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pcmcia_device* VAR_5 ;
 int FUNC_1 (struct pcmcia_device*) ;
 struct local_info_t* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_6)
{
 struct local_info_t *VAR_7;

 FUNC_0(0, "das08_pcmcia_attach()\n");


 VAR_7 = FUNC_2(sizeof(struct local_info_t), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->link = VAR_6;
 VAR_6->priv = VAR_7;


 VAR_6->irq.Attributes = VAR_4;
 VAR_6->irq.IRQInfo1 = VAR_3;
 VAR_6->irq.Handler = ((void*)0);
 VAR_6->conf.Attributes = 0;
 VAR_6->conf.IntType = VAR_2;

 VAR_5 = VAR_6;

 FUNC_1(VAR_6);

 return 0;
}
