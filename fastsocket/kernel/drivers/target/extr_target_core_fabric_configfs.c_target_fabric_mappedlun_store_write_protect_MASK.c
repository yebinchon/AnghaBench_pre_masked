
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {struct se_portal_group* se_tpg; } ;
struct se_lun_acl {int mapped_lun; int initiatorname; struct se_node_acl* se_lun_nacl; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* get_fabric_name ) () ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct se_node_acl*) ;
 int FUNC_1 (char*,int ,int ,int ,char*) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 () ;

__attribute__((used)) static ssize_t FUNC_4(
 struct se_lun_acl *VAR_3,
 const char *VAR_4,
 size_t VAR_5)
{
 struct se_node_acl *VAR_6 = VAR_3->se_lun_nacl;
 struct se_portal_group *VAR_7 = VAR_6->se_tpg;
 unsigned long VAR_8;

 if (FUNC_2(VAR_4, 0, &VAR_8))
  return -VAR_0;

 if ((VAR_8 != 1) && (VAR_8 != 0))
  return -VAR_0;

 FUNC_0(VAR_3->mapped_lun, (VAR_8) ?
   VAR_1 :
   VAR_2,
   VAR_3->se_lun_nacl);

 FUNC_1("%s_ConfigFS: Changed Initiator ACL: %s"
  " Mapped LUN: %u Write Protect bit to %s\n",
  VAR_7->se_tpg_tfo->get_fabric_name(),
  VAR_3->initiatorname, VAR_3->mapped_lun, (VAR_8) ? "ON" : "OFF");

 return VAR_5;

}
