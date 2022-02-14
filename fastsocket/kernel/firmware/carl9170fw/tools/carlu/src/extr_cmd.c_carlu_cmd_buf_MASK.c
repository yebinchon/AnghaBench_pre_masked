
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carlu {int dummy; } ;
struct carl9170_cmd_head {int dummy; } ;
struct TYPE_2__ {int cmd; unsigned int len; } ;
struct carl9170_cmd {TYPE_1__ hdr; } ;
typedef enum carl9170_cmd_oids { ____Placeholder_carl9170_cmd_oids } carl9170_cmd_oids ;


 int VAR_0 ;
 struct carl9170_cmd* FUNC_0 (int ) ;
 struct carl9170_cmd* FUNC_1 (int) ;

struct carl9170_cmd *FUNC_2(struct carlu *VAR_1,
 const enum carl9170_cmd_oids VAR_2, const unsigned int VAR_3)
{
 struct carl9170_cmd *VAR_4;

 if (VAR_3 % 4 || (sizeof(struct carl9170_cmd_head) + VAR_3 > 64))
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_1(sizeof(struct carl9170_cmd_head) + VAR_3);
 if (VAR_4) {
  VAR_4->hdr.cmd = VAR_2;
  VAR_4->hdr.len = VAR_3;
 }
 return VAR_4;
}
