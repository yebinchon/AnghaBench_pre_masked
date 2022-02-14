
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {int dummy; } ;
struct creg_completion {int st; int cmd_done; int creg_status; } ;
struct creg_cmd {int status; struct creg_completion* cb_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rsxx_cardinfo *VAR_0,
        struct creg_cmd *VAR_1,
        int VAR_2)
{
 struct creg_completion *VAR_3;

 VAR_3 = VAR_1->cb_private;
 FUNC_0(!VAR_3);

 VAR_3->st = VAR_2;
 VAR_3->creg_status = VAR_1->status;
 FUNC_1(VAR_3->cmd_done);
}
