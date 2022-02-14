
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct clock_event_device {char* name; unsigned long rating; int set_mode; int cpumask; int features; } ;
struct sh_mtu2_priv {TYPE_1__ irqaction; struct clock_event_device ced; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clock_event_device*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct sh_mtu2_priv *VAR_2,
           char *VAR_3, unsigned long VAR_4)
{
 struct clock_event_device *VAR_5 = &VAR_2->ced;
 int VAR_6;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->name = VAR_3;
 VAR_5->features = VAR_0;
 VAR_5->rating = VAR_4;
 VAR_5->cpumask = FUNC_1(0);
 VAR_5->set_mode = VAR_1;

 VAR_6 = FUNC_5(VAR_2->irqaction.irq, &VAR_2->irqaction);
 if (VAR_6) {
  FUNC_3("sh_mtu2: failed to request irq %d\n",
         VAR_2->irqaction.irq);
  return;
 }

 FUNC_4("sh_mtu2: %s used for clock events\n", VAR_5->name);
 FUNC_0(VAR_5);
}
