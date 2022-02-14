
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct carl9170_disable_key_cmd {int user; } ;
struct ar9170 {int dummy; } ;
typedef int key ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*,int ,int,int *,int ,int *) ;
 int FUNC_1 (int const) ;

int FUNC_2(struct ar9170 *VAR_1, const u8 VAR_2)
{
 struct carl9170_disable_key_cmd VAR_3 = { };

 VAR_3.user = FUNC_1(VAR_2);

 return FUNC_0(VAR_1, VAR_0,
  sizeof(VAR_3), (u8 *)&VAR_3, 0, ((void*)0));
}
