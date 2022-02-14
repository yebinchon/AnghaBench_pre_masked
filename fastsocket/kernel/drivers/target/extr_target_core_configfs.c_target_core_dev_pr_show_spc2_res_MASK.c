
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_node_acl {char* initiatorname; TYPE_2__* se_tpg; } ;
struct se_device {struct se_node_acl* dev_reserved_node_acl; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* se_tpg_tfo; } ;
struct TYPE_3__ {char* (* get_fabric_name ) () ;} ;


 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;

__attribute__((used)) static ssize_t FUNC_3(struct se_device *VAR_0,
  char *VAR_1)
{
 struct se_node_acl *VAR_2;
 ssize_t VAR_3;

 VAR_2 = VAR_0->dev_reserved_node_acl;
 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_1,
         "SPC-2 Reservation: %s Initiator: %s\n",
         VAR_2->se_tpg->se_tpg_tfo->get_fabric_name(),
         VAR_2->initiatorname);
 } else {
  VAR_3 = FUNC_0(VAR_1, "No SPC-2 Reservation holder\n");
 }
 return VAR_3;
}
