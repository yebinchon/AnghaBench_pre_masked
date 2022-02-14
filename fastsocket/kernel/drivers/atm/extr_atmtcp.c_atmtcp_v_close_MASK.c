
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vci; int vpi; } ;
struct TYPE_4__ {TYPE_1__ sap_addr; int sap_family; } ;
struct atmtcp_control {TYPE_2__ addr; } ;
struct atm_vcc {int flags; int vci; int vpi; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atm_vcc*,int ,struct atmtcp_control*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct atmtcp_control*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct atm_vcc *VAR_4)
{
 struct atmtcp_control VAR_5;

 FUNC_2(&VAR_5,0,sizeof(VAR_5));
 VAR_5.addr.sap_family = VAR_0;
 VAR_5.addr.sap_addr.vpi = VAR_4->vpi;
 VAR_5.addr.sap_addr.vci = VAR_4->vci;
 FUNC_1(VAR_3,&VAR_4->flags);
 (void) FUNC_0(VAR_4,VAR_1,&VAR_5,VAR_2);
}
