
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uid_t ;
struct persona {int dummy; } ;
typedef int persona_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct persona* FUNC_3 (int ) ;
 int FUNC_4 (struct persona*) ;

__attribute__((used)) static int FUNC_5(user_addr_t VAR_2)
{
 int VAR_3 = 0;
 uid_t VAR_4;
 struct persona *VAR_5;

 if (!FUNC_2(FUNC_1()))
  return VAR_0;

 VAR_3 = FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_3)
  return VAR_3;


 VAR_5 = FUNC_3(VAR_4);

 if (!VAR_5)
  return VAR_1;


 FUNC_4(VAR_5);


 FUNC_4(VAR_5);

 return VAR_3;
}
