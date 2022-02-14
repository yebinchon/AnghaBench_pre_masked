
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uint64_t ;
struct netagent_wrapper {int use_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netagent_wrapper* FUNC_3 (int ) ;
 int VAR_2 ;

int
FUNC_4(uuid_t VAR_3, uint64_t *VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(&VAR_2);
 struct netagent_wrapper *VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_1, "netagent_assert: Requested netagent UUID is not registered");
  VAR_5 = VAR_0;
  goto done;
 }

 uint64_t VAR_7 = VAR_6->use_count;
 VAR_6->use_count++;

 if (VAR_4 != ((void*)0)) {
  *VAR_4 = VAR_7;
 }

done:
 FUNC_1(&VAR_2);
 return (VAR_5);
}
