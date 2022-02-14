
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int IntType; scalar_t__ Attributes; } ;
struct TYPE_3__ {int Attributes; int IRQInfo1; int * Handler; } ;
struct pcmcia_device {TYPE_2__ conf; TYPE_1__ irq; struct local_info_t* priv; } ;
struct local_info_t {struct pcmcia_device* link; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct local_info_t* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;
 struct pcmcia_device* VAR_7 ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_8)
{
 struct local_info_t *VAR_9;

 FUNC_0(0, "labpc_cs_attach()\n");


 VAR_9 = FUNC_1(sizeof(struct local_info_t), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->link = VAR_8;
 VAR_8->priv = VAR_9;


 VAR_8->irq.Attributes = VAR_6 | VAR_3;
 VAR_8->irq.IRQInfo1 = VAR_4 | VAR_5;
 VAR_8->irq.Handler = ((void*)0);
 VAR_8->conf.Attributes = 0;
 VAR_8->conf.IntType = VAR_2;

 VAR_7 = VAR_8;

 FUNC_2(VAR_8);

 return 0;
}
