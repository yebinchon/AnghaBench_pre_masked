
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int dummy; } ;
struct carl9170_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct carl9170_cmd*) ;
 int FUNC_1 (struct carl9170_cmd*) ;
 struct carl9170_cmd* FUNC_2 (struct carlu*,int ,int ) ;
 int FUNC_3 (struct carlu*,struct carl9170_cmd*,int) ;

int FUNC_4(struct carlu *VAR_2)
{
 struct carl9170_cmd *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_2(VAR_2, VAR_0, 0);
 if (FUNC_0(VAR_3))
  return VAR_3 ? FUNC_1(VAR_3) : -VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_3, 1);
 return VAR_4;
}
