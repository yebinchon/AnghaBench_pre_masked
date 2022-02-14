
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_port {struct fcoe_interface* priv; } ;
struct fcoe_interface {int list; } ;
struct fc_lport {int dummy; } ;


 int VAR_0 ;
 struct fcoe_interface* FUNC_0 (int ) ;
 int FUNC_1 (struct fc_lport const*) ;
 int FUNC_2 (int *,int *) ;
 struct fcoe_port* FUNC_3 (struct fc_lport const*) ;

__attribute__((used)) static int FUNC_4(const struct fc_lport *VAR_1)
{
 struct fcoe_interface *VAR_2;
 struct fcoe_port *VAR_3;

 VAR_2 = FUNC_0(FUNC_1(VAR_1));
 if (!VAR_2) {
  VAR_3 = FUNC_3(VAR_1);
  VAR_2 = VAR_3->priv;
  FUNC_2(&VAR_2->list, &VAR_0);
 }
 return 0;
}
