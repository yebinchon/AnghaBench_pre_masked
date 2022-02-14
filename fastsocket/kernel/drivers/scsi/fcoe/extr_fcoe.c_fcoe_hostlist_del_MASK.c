
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_port {struct fcoe_interface* priv; } ;
struct fcoe_interface {int list; } ;
struct fc_lport {int dummy; } ;


 int FUNC_0 (int *) ;
 struct fcoe_port* FUNC_1 (struct fc_lport const*) ;

__attribute__((used)) static void FUNC_2(const struct fc_lport *VAR_0)
{
 struct fcoe_interface *VAR_1;
 struct fcoe_port *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = VAR_2->priv;
 FUNC_0(&VAR_1->list);
 return;
}
