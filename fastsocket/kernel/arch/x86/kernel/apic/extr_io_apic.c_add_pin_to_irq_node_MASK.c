
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_cfg {int dummy; } ;


 scalar_t__ FUNC_0 (struct irq_cfg*,int,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct irq_cfg *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
  FUNC_1("IO-APIC: failed to add irq-pin. Can not proceed\n");
}
