
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__ cmd_type; int cmd_flags; int * cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct request *VAR_3)
{
 if (FUNC_2(VAR_3->cmd_type != VAR_1))
  return 0;

 if (!FUNC_1(VAR_3) || (VAR_3->cmd_flags & VAR_2))
  return 0;

 return FUNC_0(VAR_3->cmd[0]) == VAR_0;
}
