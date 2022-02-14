
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct netagent_wrapper {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netagent_wrapper* FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(uuid_t VAR_4)
{
 struct netagent_wrapper *VAR_5 = ((void*)0);
 FUNC_2(&VAR_3);
 VAR_5 = FUNC_3(VAR_4);
 FUNC_1(&VAR_3);

 if (VAR_5 != ((void*)0)) {
  FUNC_4(VAR_4, VAR_0, VAR_2);
 } else {
  FUNC_0(VAR_1, "Interface event with no associated agent");
 }

 return;
}
