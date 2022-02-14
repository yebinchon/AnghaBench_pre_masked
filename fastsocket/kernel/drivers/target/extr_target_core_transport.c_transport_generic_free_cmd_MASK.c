
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int se_cmd_flags; scalar_t__ se_lun; TYPE_1__* se_sess; } ;
struct TYPE_2__ {int se_node_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct se_cmd*) ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*) ;

void FUNC_5(struct se_cmd *VAR_2, int VAR_3)
{
 if (!(VAR_2->se_cmd_flags & VAR_1)) {
  if (VAR_3 && (VAR_2->se_cmd_flags & VAR_0))
    FUNC_4(VAR_2);

  FUNC_3(VAR_2);
 } else {
  if (VAR_3)
   FUNC_4(VAR_2);

  FUNC_0(VAR_2->se_sess->se_node_acl, VAR_2);

  if (VAR_2->se_lun)
   FUNC_1(VAR_2);

  FUNC_2(VAR_2);
 }
}
