
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_itn_create_req_s {int mh; scalar_t__ msg_no; int seq_rec; int class; int fw_handle; } ;
struct bfa_itnim_s {int reqq; int bfa; scalar_t__ msg_no; int seq_rec; TYPE_1__* rport; int reqq_wait; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int fw_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct bfi_itn_create_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct bfa_itnim_s*,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static bfa_boolean_t
FUNC_6(struct bfa_itnim_s *VAR_6)
{
 struct bfi_itn_create_req_s *VAR_7;

 VAR_6->msg_no++;




 VAR_7 = FUNC_1(VAR_6->bfa, VAR_6->reqq);
 if (!VAR_7) {
  FUNC_3(VAR_6->bfa, VAR_6->reqq, &VAR_6->reqq_wait);
  return VAR_0;
 }

 FUNC_5(VAR_7->mh, VAR_3, VAR_2,
   FUNC_0(VAR_6->bfa));
 VAR_7->fw_handle = VAR_6->rport->fw_handle;
 VAR_7->class = VAR_4;
 VAR_7->seq_rec = VAR_6->seq_rec;
 VAR_7->msg_no = VAR_6->msg_no;
 FUNC_4(VAR_6, VAR_5);




 FUNC_2(VAR_6->bfa, VAR_6->reqq, VAR_7->mh);
 return VAR_1;
}
