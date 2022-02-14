
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fchs_s {int dummy; } ;
struct bfa_s {int plog; } ;
struct bfa_fcxp_s {scalar_t__ use_ireqbuf; } ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__,struct fchs_s*) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,struct fchs_s*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bfa_s *VAR_2, u32 VAR_3, struct bfa_fcxp_s *VAR_4,
   struct fchs_s *VAR_5)
{



 if (VAR_3 > 0) {
  if (VAR_4->use_ireqbuf) {
   u32 VAR_6 =
    *((u32 *) FUNC_0(VAR_4));

   FUNC_2(VAR_2->plog, VAR_1,
     VAR_0,
     VAR_3 + sizeof(struct fchs_s), VAR_5,
     VAR_6);
  } else {
   FUNC_1(VAR_2->plog, VAR_1,
     VAR_0,
     VAR_3 + sizeof(struct fchs_s),
     VAR_5);
  }
 } else {
  FUNC_1(VAR_2->plog, VAR_1, VAR_0,
          VAR_3 + sizeof(struct fchs_s), VAR_5);
 }
}
