
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int portno; int lan_type; } ;
struct TYPE_4__ {TYPE_1__ lcs_std_cmd; } ;
struct lcs_cmd {TYPE_2__ cmd; int initiator; int cmd_code; } ;
struct lcs_card {int portno; int lan_type; } ;
struct lcs_buffer {scalar_t__ data; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_1 ;
 struct lcs_buffer* FUNC_1 (struct lcs_card*,int ) ;
 int FUNC_2 (struct lcs_card*,struct lcs_buffer*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct lcs_card *VAR_3, __u8 VAR_4)
{
 struct lcs_buffer *VAR_5;
 struct lcs_cmd *VAR_6;

 FUNC_0(2, VAR_2, "cmdstpln");
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 VAR_6 = (struct lcs_cmd *) VAR_5->data;
 VAR_6->cmd_code = VAR_0;
 VAR_6->initiator = VAR_4;
 VAR_6->cmd.lcs_std_cmd.lan_type = VAR_3->lan_type;
 VAR_6->cmd.lcs_std_cmd.portno = VAR_3->portno;
 return FUNC_2(VAR_3, VAR_5, ((void*)0));
}
