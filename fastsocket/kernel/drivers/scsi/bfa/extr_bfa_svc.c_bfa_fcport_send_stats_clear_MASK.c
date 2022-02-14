
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_fcport_req_s {int mh; } ;
struct bfa_fcport_s {int bfa; int stats_qfull; int stats_reqq_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bfi_fcport_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,void (*) (void*),struct bfa_fcport_s*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct bfi_fcport_req_s*,int ,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
 struct bfa_fcport_s *VAR_6 = (struct bfa_fcport_s *) VAR_5;
 struct bfi_fcport_req_s *VAR_7;

 VAR_7 = FUNC_1(VAR_6->bfa, VAR_1);

 if (!VAR_7) {
  VAR_6->stats_qfull = VAR_2;
  FUNC_4(&VAR_6->stats_reqq_wait,
    FUNC_7, VAR_6);
  FUNC_3(VAR_6->bfa, VAR_1,
      &VAR_6->stats_reqq_wait);
  return;
 }
 VAR_6->stats_qfull = VAR_0;

 FUNC_6(VAR_7, 0, sizeof(struct bfi_fcport_req_s));
 FUNC_5(VAR_7->mh, VAR_4, VAR_3,
   FUNC_0(VAR_6->bfa));
 FUNC_2(VAR_6->bfa, VAR_1, VAR_7->mh);
}
