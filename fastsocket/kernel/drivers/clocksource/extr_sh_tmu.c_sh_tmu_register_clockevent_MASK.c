
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct clock_event_device {char* name; unsigned long rating; int set_mode; int set_next_event; int cpumask; int features; } ;
struct sh_tmu_priv {TYPE_1__ irqaction; struct clock_event_device ced; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clock_event_device*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct sh_tmu_priv *VAR_4,
           char *VAR_5, unsigned long VAR_6)
{
 struct clock_event_device *VAR_7 = &VAR_4->ced;
 int VAR_8;

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->name = VAR_5;
 VAR_7->features = VAR_1;
 VAR_7->features |= VAR_0;
 VAR_7->rating = VAR_6;
 VAR_7->cpumask = FUNC_1(0);
 VAR_7->set_next_event = VAR_3;
 VAR_7->set_mode = VAR_2;

 VAR_8 = FUNC_5(VAR_4->irqaction.irq, &VAR_4->irqaction);
 if (VAR_8) {
  FUNC_3("sh_tmu: failed to request irq %d\n",
         VAR_4->irqaction.irq);
  return;
 }

 FUNC_4("sh_tmu: %s used for clock events\n", VAR_7->name);
 FUNC_0(VAR_7);
}
