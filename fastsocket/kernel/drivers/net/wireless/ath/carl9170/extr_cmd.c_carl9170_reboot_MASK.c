
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carl9170_cmd {int dummy; } ;
struct ar9170 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar9170*,struct carl9170_cmd*,int) ;
 struct carl9170_cmd* FUNC_1 (struct ar9170*,int ,int ) ;

int FUNC_2(struct ar9170 *VAR_2)
{
 struct carl9170_cmd *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_0, 0);
 if (!VAR_3)
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_2, VAR_3, 1);
 return VAR_4;
}
