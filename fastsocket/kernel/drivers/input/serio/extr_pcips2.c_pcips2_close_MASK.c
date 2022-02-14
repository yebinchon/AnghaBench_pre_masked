
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {struct pcips2_data* port_data; } ;
struct pcips2_data {TYPE_1__* dev; int base; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,struct pcips2_data*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_0)
{
 struct pcips2_data *VAR_1 = VAR_0->port_data;

 FUNC_1(0, VAR_1->base);

 FUNC_0(VAR_1->dev->irq, VAR_1);
}
