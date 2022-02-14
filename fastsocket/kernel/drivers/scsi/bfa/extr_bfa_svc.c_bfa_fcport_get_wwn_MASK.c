
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
struct bfa_s {int dummy; } ;
struct bfa_fcport_s {int pwwn; int nwwn; } ;
typedef scalar_t__ bfa_boolean_t ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;

wwn_t
FUNC_1(struct bfa_s *VAR_0, bfa_boolean_t VAR_1)
{
 struct bfa_fcport_s *VAR_2 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_2->nwwn;
 else
  return VAR_2->pwwn;
}
