
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bfi_fcxp_send_rsp_s {scalar_t__ rsp_len; int fchs; } ;
struct bfa_s {int plog; } ;
struct bfa_fcxp_s {scalar_t__ use_irspbuf; } ;


 scalar_t__ FUNC_0 (struct bfa_fcxp_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_s *VAR_2, struct bfa_fcxp_s *VAR_3,
   struct bfi_fcxp_send_rsp_s *VAR_4)
{
 if (VAR_4->rsp_len > 0) {
  if (VAR_3->use_irspbuf) {
   u32 VAR_5 =
    *((u32 *) FUNC_0(VAR_3));

   FUNC_2(VAR_2->plog, VAR_1,
           VAR_0,
           (u16) VAR_4->rsp_len,
           &VAR_4->fchs, VAR_5);
  } else {
   FUNC_1(VAR_2->plog, VAR_1,
           VAR_0,
           (u16) VAR_4->rsp_len,
           &VAR_4->fchs);
  }
 } else {
  FUNC_1(VAR_2->plog, VAR_1, VAR_0,
          (u16) VAR_4->rsp_len, &VAR_4->fchs);
 }
}
