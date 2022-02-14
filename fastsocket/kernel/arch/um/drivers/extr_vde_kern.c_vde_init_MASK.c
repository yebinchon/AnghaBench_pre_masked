
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vde_init {char* vde_switch; char* descr; } ;
struct vde_data {char* vde_switch; char* descr; struct net_device* dev; int * conn; int * args; } ;
struct uml_net_private {scalar_t__ user; } ;
struct net_device {int dummy; } ;


 struct uml_net_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct vde_data*,struct vde_init*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct vde_init *VAR_2 = VAR_1;
 struct uml_net_private *VAR_3;
 struct vde_data *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = (struct vde_data *) VAR_3->user;

 VAR_4->vde_switch = VAR_2->vde_switch;
 VAR_4->descr = VAR_2->descr ? VAR_2->descr : "UML vde_transport";
 VAR_4->args = ((void*)0);
 VAR_4->conn = ((void*)0);
 VAR_4->dev = VAR_0;

 FUNC_1("vde backend - %s, ", VAR_4->vde_switch ?
        VAR_4->vde_switch : "(default socket)");

 FUNC_2(VAR_4, VAR_2);

 FUNC_1("\n");
}
