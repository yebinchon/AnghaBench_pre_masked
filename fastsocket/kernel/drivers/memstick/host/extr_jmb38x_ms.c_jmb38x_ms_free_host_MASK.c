
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int addr; int irq; } ;


 int FUNC_0 (int ,struct memstick_host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct memstick_host*) ;
 struct jmb38x_ms_host* FUNC_3 (struct memstick_host*) ;

__attribute__((used)) static void FUNC_4(struct memstick_host *VAR_0)
{
 struct jmb38x_ms_host *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->irq, VAR_0);
 FUNC_1(VAR_1->addr);
 FUNC_2(VAR_0);
}
