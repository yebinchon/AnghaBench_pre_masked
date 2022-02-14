
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_tskim_req_s {int mh; int tm_flags; int lun; int t_secs; int itn_fhdl; int tsk_tag; } ;
struct bfa_tskim_s {int bfa; int tm_cmnd; int lun; int tsecs; struct bfa_itnim_s* itnim; int tsk_tag; } ;
struct bfa_itnim_s {int reqq; TYPE_1__* rport; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int fw_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct bfi_tskim_req_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_tskim_s *VAR_4)
{
 struct bfa_itnim_s *VAR_5 = VAR_4->itnim;
 struct bfi_tskim_req_s *VAR_6;




 VAR_6 = FUNC_1(VAR_4->bfa, VAR_5->reqq);
 if (!VAR_6)
  return VAR_0;




 FUNC_3(VAR_6->mh, VAR_2, VAR_3,
   FUNC_0(VAR_4->bfa));

 VAR_6->tsk_tag = FUNC_4(VAR_4->tsk_tag);
 VAR_6->itn_fhdl = VAR_4->itnim->rport->fw_handle;
 VAR_6->t_secs = VAR_4->tsecs;
 VAR_6->lun = VAR_4->lun;
 VAR_6->tm_flags = VAR_4->tm_cmnd;




 FUNC_2(VAR_4->bfa, VAR_5->reqq, VAR_6->mh);
 return VAR_1;
}
