
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int fr_flags; int fr_status; } ;
struct TYPE_4__ {int fr_rsp_len; } ;
struct fcp_resp_with_ext {TYPE_2__ resp; TYPE_1__ ext; } ;
struct fcp_resp_rsp_info {int rsp_code; } ;
struct fc_seq {int dummy; } ;
struct TYPE_6__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;int (* exch_done ) (struct fc_seq*) ;int (* seq_send ) (struct fc_lport*,struct fc_seq*,struct fc_frame*) ;} ;
struct fc_lport {TYPE_3__ tt; } ;
struct fc_frame_header {int fh_ox_id; int fh_s_id; } ;
struct fc_frame {int dummy; } ;
typedef enum fcp_resp_rsp_codes { ____Placeholder_fcp_resp_rsp_codes } fcp_resp_rsp_codes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_frame*,struct fc_frame const*,int ,int ) ;
 struct fc_frame* FUNC_1 (struct fc_lport*,size_t) ;
 struct fc_frame_header* FUNC_2 (struct fc_frame const*) ;
 struct fcp_resp_with_ext* FUNC_3 (struct fc_frame*,size_t) ;
 struct fc_seq* FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct fcp_resp_with_ext*,int ,size_t) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ,int ,int) ;
 int FUNC_10 (struct fc_lport*,struct fc_seq*,struct fc_frame*) ;
 int FUNC_11 (struct fc_seq*) ;
 int FUNC_12 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_13(struct fc_lport *VAR_3,
    const struct fc_frame *VAR_4,
    u32 VAR_5, enum fcp_resp_rsp_codes VAR_6)
{
 struct fc_frame *VAR_7;
 struct fc_seq *VAR_8;
 const struct fc_frame_header *VAR_9;
 size_t VAR_10;
 struct fcp_resp_with_ext *VAR_11;
 struct fcp_resp_rsp_info *VAR_12;

 VAR_9 = FUNC_2(VAR_4);
 FUNC_9("FCP error response: did %x oxid %x status %x code %x\n",
    FUNC_7(VAR_9->fh_s_id), FUNC_8(VAR_9->fh_ox_id), VAR_5, VAR_6);
 VAR_10 = sizeof(*VAR_11);
 if (VAR_5 == VAR_2)
  VAR_10 += sizeof(*VAR_12);
 VAR_7 = FUNC_1(VAR_3, VAR_10);
 if (!VAR_7)
  return;
 VAR_11 = FUNC_3(VAR_7, VAR_10);
 FUNC_6(VAR_11, 0, VAR_10);
 VAR_11->resp.fr_status = VAR_5;
 if (VAR_5 == VAR_2) {
  VAR_11->ext.fr_rsp_len = FUNC_5(sizeof(*VAR_12));
  VAR_11->resp.fr_flags |= VAR_0;
  VAR_12 = (struct fcp_resp_rsp_info *)(VAR_11 + 1);
  VAR_12->rsp_code = VAR_6;
 }

 FUNC_0(VAR_7, VAR_4, VAR_1, 0);
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  VAR_3->tt.seq_send(VAR_3, VAR_8, VAR_7);
  VAR_3->tt.exch_done(VAR_8);
 } else {
  VAR_3->tt.frame_send(VAR_3, VAR_7);
 }
}
