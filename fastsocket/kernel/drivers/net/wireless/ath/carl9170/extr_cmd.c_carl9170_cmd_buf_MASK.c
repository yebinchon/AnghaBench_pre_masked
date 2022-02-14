
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carl9170_cmd_head {int dummy; } ;
struct TYPE_2__ {int cmd; unsigned int len; } ;
struct carl9170_cmd {TYPE_1__ hdr; } ;
struct ar9170 {int dummy; } ;
typedef enum carl9170_cmd_oids { ____Placeholder_carl9170_cmd_oids } carl9170_cmd_oids ;


 int VAR_0 ;
 struct carl9170_cmd* FUNC_0 (int,int ) ;

struct carl9170_cmd *FUNC_1(struct ar9170 *VAR_1,
 const enum carl9170_cmd_oids VAR_2, const unsigned int VAR_3)
{
 struct carl9170_cmd *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct carl9170_cmd_head) + VAR_3, VAR_0);
 if (VAR_4) {
  VAR_4->hdr.cmd = VAR_2;
  VAR_4->hdr.len = VAR_3;
 }

 return VAR_4;
}
