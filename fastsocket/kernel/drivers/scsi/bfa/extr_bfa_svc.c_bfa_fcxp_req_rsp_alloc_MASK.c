
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_fcxp_s {int fcxp_tag; } ;
typedef int bfa_fcxp_get_sglen_t ;
typedef int bfa_fcxp_get_sgaddr_t ;
typedef int bfa_boolean_t ;


 int FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int ) ;
 struct bfa_fcxp_s* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bfa_fcxp_s*,void*,struct bfa_s*,int,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct bfa_s*,int ) ;

struct bfa_fcxp_s *
FUNC_5(void *VAR_0, struct bfa_s *VAR_1, int VAR_2,
  int VAR_3, bfa_fcxp_get_sgaddr_t VAR_4,
  bfa_fcxp_get_sglen_t VAR_5,
  bfa_fcxp_get_sgaddr_t VAR_6,
  bfa_fcxp_get_sglen_t VAR_7, bfa_boolean_t VAR_8)
{
 struct bfa_fcxp_s *VAR_9 = ((void*)0);

 FUNC_1(VAR_1 == ((void*)0));

 VAR_9 = FUNC_2(FUNC_0(VAR_1), VAR_8);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_1, VAR_9->fcxp_tag);

 FUNC_3(VAR_9, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7);

 return VAR_9;
}
