
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_itn_delete_req_s {int mh; int fw_handle; } ;
struct bfa_itnim_s {int reqq; int bfa; TYPE_1__* rport; int reqq_wait; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int fw_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct bfi_itn_delete_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct bfa_itnim_s*,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static bfa_boolean_t
FUNC_6(struct bfa_itnim_s *VAR_5)
{
 struct bfi_itn_delete_req_s *VAR_6;




 VAR_6 = FUNC_1(VAR_5->bfa, VAR_5->reqq);
 if (!VAR_6) {
  FUNC_3(VAR_5->bfa, VAR_5->reqq, &VAR_5->reqq_wait);
  return VAR_0;
 }

 FUNC_5(VAR_6->mh, VAR_3, VAR_2,
   FUNC_0(VAR_5->bfa));
 VAR_6->fw_handle = VAR_5->rport->fw_handle;
 FUNC_4(VAR_5, VAR_4);




 FUNC_2(VAR_5->bfa, VAR_5->reqq, VAR_6->mh);
 return VAR_1;
}
