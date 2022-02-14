
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_cmd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct se_cmd*,int ) ;

__attribute__((used)) static int FUNC_1(struct se_cmd *VAR_1)
{





 if (VAR_1->se_cmd_flags & VAR_0)
  return 0;




 FUNC_0(VAR_1, 0);
 return 1;
}
