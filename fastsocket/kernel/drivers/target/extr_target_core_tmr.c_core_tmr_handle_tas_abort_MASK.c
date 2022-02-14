
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_node_acl {int dummy; } ;
struct se_cmd {TYPE_1__* se_sess; } ;
struct TYPE_2__ {struct se_node_acl* se_node_acl; } ;


 int FUNC_0 (struct se_cmd*,int) ;
 int FUNC_1 (struct se_cmd*) ;

__attribute__((used)) static void FUNC_2(
 struct se_node_acl *VAR_0,
 struct se_cmd *VAR_1,
 int VAR_2,
 int VAR_3)
{
 if (!VAR_3) {
  FUNC_0(VAR_1, 1);
  return;
 }



 if ((VAR_0 &&
      (VAR_0 == VAR_1->se_sess->se_node_acl)) || VAR_2)
  FUNC_1(VAR_1);

 FUNC_0(VAR_1, 0);
}
