
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct amba_kmi_port* port_data; } ;
struct amba_kmi_port {int clk; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct amba_kmi_port*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct serio *VAR_1)
{
 struct amba_kmi_port *VAR_2 = VAR_1->port_data;

 FUNC_2(0, VAR_0);

 FUNC_1(VAR_2->irq, VAR_2);
 FUNC_0(VAR_2->clk);
}
