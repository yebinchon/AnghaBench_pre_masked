
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_2__ {int netagent_type; int netagent_domain; } ;
struct netagent_wrapper {TYPE_1__ netagent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;
 struct netagent_wrapper* FUNC_5 (int ) ;
 int VAR_5 ;

bool
FUNC_6(uuid_t VAR_6, char *VAR_7, char *VAR_8)
{
 bool VAR_9 = VAR_0;
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_0(VAR_1, "Invalid arguments for netagent_get_agent_domain_and_type %p %p", VAR_7, VAR_8);
  return (VAR_0);
 }

 FUNC_3(&VAR_5);
 struct netagent_wrapper *VAR_10 = FUNC_5(VAR_6);
 if (VAR_10 != ((void*)0)) {
  VAR_9 = VAR_4;
  FUNC_4(VAR_7, VAR_10->netagent.netagent_domain, VAR_2);
  FUNC_4(VAR_8, VAR_10->netagent.netagent_type, VAR_3);
 } else {
  FUNC_1(VAR_1, "Type requested for invalid netagent");
 }
 FUNC_2(&VAR_5);

 return (VAR_9);
}
