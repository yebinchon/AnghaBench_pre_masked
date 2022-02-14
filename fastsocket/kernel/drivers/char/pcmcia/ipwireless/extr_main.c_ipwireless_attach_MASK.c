
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ipw_dev* Instance; } ;
struct pcmcia_device {int * dev_node; TYPE_1__ irq; struct ipw_dev* priv; } ;
struct ipw_dev {int hardware; int * nodes; struct pcmcia_device* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipw_dev*) ;
 int FUNC_1 (struct pcmcia_device*,int ,int) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ipw_dev*) ;
 struct ipw_dev* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_3)
{
 struct ipw_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(sizeof(struct ipw_dev), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->link = VAR_3;
 VAR_3->priv = VAR_4;
 VAR_3->irq.Instance = VAR_4;


 VAR_3->dev_node = &VAR_4->nodes[0];

 VAR_4->hardware = FUNC_3();
 if (!VAR_4->hardware) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }


 VAR_5 = FUNC_0(VAR_4);

 if (VAR_5 != 0) {
  FUNC_1(VAR_3, VAR_2, VAR_5);
  FUNC_2(VAR_3);
  return VAR_5;
 }

 return 0;
}
