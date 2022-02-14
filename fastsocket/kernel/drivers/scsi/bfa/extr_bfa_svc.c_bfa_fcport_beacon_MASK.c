
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_fcport_s {void* beacon; void* link_e2e_beacon; } ;
typedef void* bfa_boolean_t ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_s*,void*) ;

void
FUNC_2(void *VAR_0, bfa_boolean_t VAR_1,
    bfa_boolean_t VAR_2)
{
 struct bfa_s *VAR_3 = VAR_0;
 struct bfa_fcport_s *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_4->beacon);
 FUNC_1(VAR_3, VAR_4->link_e2e_beacon);

 VAR_4->beacon = VAR_1;
 VAR_4->link_e2e_beacon = VAR_2;
}
