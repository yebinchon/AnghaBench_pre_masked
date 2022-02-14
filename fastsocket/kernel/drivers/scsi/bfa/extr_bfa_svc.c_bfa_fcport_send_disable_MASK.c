
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_fcport_req_s {int mh; scalar_t__ msgtag; } ;
struct bfa_fcport_s {int bfa; scalar_t__ msgtag; int reqq_wait; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bfi_fcport_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_fcport_s *VAR_5)
{
 struct bfi_fcport_req_s *VAR_6;





 VAR_5->msgtag++;




 VAR_6 = FUNC_1(VAR_5->bfa, VAR_1);
 if (!VAR_6) {
  FUNC_3(VAR_5->bfa, VAR_1,
       &VAR_5->reqq_wait);
  return VAR_0;
 }

 FUNC_4(VAR_6->mh, VAR_4, VAR_3,
   FUNC_0(VAR_5->bfa));
 VAR_6->msgtag = VAR_5->msgtag;




 FUNC_2(VAR_5->bfa, VAR_1, VAR_6->mh);

 return VAR_2;
}
