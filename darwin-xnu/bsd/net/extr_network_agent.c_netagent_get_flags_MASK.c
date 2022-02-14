
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef int u_int32_t ;
struct TYPE_2__ {int netagent_flags; } ;
struct netagent_wrapper {TYPE_1__ netagent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netagent_wrapper* FUNC_3 (int ) ;
 int VAR_1 ;

u_int32_t
FUNC_4(uuid_t VAR_2)
{
 u_int32_t VAR_3 = 0;
 FUNC_2(&VAR_1);
 struct netagent_wrapper *VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 != ((void*)0)) {
  VAR_3 = VAR_4->netagent.netagent_flags;
 } else {
  FUNC_0(VAR_0, "Flags requested for invalid netagent");
 }
 FUNC_1(&VAR_1);

 return (VAR_3);
}
