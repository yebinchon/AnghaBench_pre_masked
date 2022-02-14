
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ksign_user_id {int len; scalar_t__* name; } ;
typedef int (* ksign_user_id_actor_t ) (struct ksign_user_id*,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 struct ksign_user_id* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ksign_user_id*) ;
 int FUNC_2 (scalar_t__*,int const*,int) ;

__attribute__((used)) static int FUNC_3(const uint8_t *VAR_2, const uint8_t *VAR_3,
          ksign_user_id_actor_t VAR_4, void *VAR_5)
{
 struct ksign_user_id *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 if (!VAR_4)
  return 0;

 VAR_8 = VAR_3 - VAR_2;
 VAR_6 = FUNC_0(sizeof(*VAR_6) + VAR_8 + 1, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->len = VAR_8;

 FUNC_2(VAR_6->name, VAR_2, VAR_8);
 VAR_6->name[VAR_8] = 0;

 VAR_7 = VAR_4(VAR_6, VAR_5);
 if (VAR_7 == 0)
  return VAR_7;
 if (VAR_7 == 1)
  VAR_7 = 0;

 FUNC_1(VAR_6);
 return VAR_7;
}
