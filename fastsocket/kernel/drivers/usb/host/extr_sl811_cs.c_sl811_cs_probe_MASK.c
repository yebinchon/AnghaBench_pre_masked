
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IntType; scalar_t__ Attributes; } ;
struct TYPE_6__ {int IRQInfo1; int * Handler; int Attributes; } ;
struct pcmcia_device {TYPE_1__ conf; TYPE_2__ irq; TYPE_3__* priv; } ;
struct TYPE_7__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_3__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_6)
{
 local_info_t *VAR_7;

 VAR_7 = FUNC_0(sizeof(local_info_t), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->p_dev = VAR_6;
 VAR_6->priv = VAR_7;


 VAR_6->irq.Attributes = VAR_5;
 VAR_6->irq.IRQInfo1 = VAR_3|VAR_4;
 VAR_6->irq.Handler = ((void*)0);

 VAR_6->conf.Attributes = 0;
 VAR_6->conf.IntType = VAR_2;

 return FUNC_1(VAR_6);
}
