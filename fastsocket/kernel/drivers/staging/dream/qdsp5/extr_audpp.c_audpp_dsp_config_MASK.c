
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_3__ {int cfg; int cmd_id; } ;
typedef TYPE_1__ audpp_cmd_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{
 audpp_cmd_cfg VAR_4;

 VAR_4.cmd_id = VAR_0;
 VAR_4.cfg = VAR_3 ? VAR_1 : VAR_2;

 return FUNC_0(&VAR_4, sizeof(VAR_4));
}
