
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_state {size_t type; int irq; int port; int line; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct seq_file *VAR_1, struct serial_state *VAR_2)
{
 FUNC_0(VAR_1, "%d: uart:%s port:%lX irq:%d\n",
         VAR_2->line, VAR_0[VAR_2->type].name,
         VAR_2->port, VAR_2->irq);
}
