
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct list_head {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcxp_s {int fcxp_tag; } ;
typedef int ** bfa_fcxp_get_sglen_t ;
typedef int ** bfa_fcxp_get_sgaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_s*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcxp_s *VAR_1,
        struct bfa_s *VAR_2,
        u8 *VAR_3,
        u32 *VAR_4,
        bfa_fcxp_get_sgaddr_t *VAR_5,
        bfa_fcxp_get_sglen_t *VAR_6,
        struct list_head *VAR_7,
        int VAR_8,
        bfa_fcxp_get_sgaddr_t VAR_9,
        bfa_fcxp_get_sglen_t VAR_10)
{

 FUNC_0(VAR_2 == ((void*)0));

 FUNC_1(VAR_2, VAR_1->fcxp_tag);

 if (VAR_8 == 0) {
  *VAR_3 = 1;
 } else {
  FUNC_0(*VAR_9 == ((void*)0));
  FUNC_0(*VAR_10 == ((void*)0));

  *VAR_3 = 0;
  *VAR_5 = VAR_9;
  *VAR_6 = VAR_10;

  *VAR_4 = VAR_8;




  if (VAR_8 > VAR_0)
   FUNC_0(1);
 }

}
