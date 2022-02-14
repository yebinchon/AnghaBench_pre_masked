
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct scsi_cmnd {scalar_t__ underflow; int sense_buffer; int result; } ;
struct TYPE_4__ {int fr_flags; int fr_status; } ;
struct TYPE_3__ {scalar_t__ fr_resid; int fr_sns_len; } ;
struct fcp_resp_with_ext {TYPE_2__ resp; TYPE_1__ ext; } ;
struct fcp_resp_rsp_info {scalar_t__ rsp_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline
void FUNC_7(struct fcp_resp_with_ext *VAR_9,
     struct scsi_cmnd *VAR_10)
{
 struct fcp_resp_rsp_info *VAR_11;
 char *VAR_12;
 u32 VAR_13, VAR_14;
 u8 VAR_15;

 FUNC_5(VAR_10, VAR_0);
 VAR_10->result |= VAR_9->resp.fr_status;

 VAR_15 = VAR_9->resp.fr_flags;

 if (FUNC_6(VAR_15 & VAR_4)) {
  VAR_11 = (struct fcp_resp_rsp_info *) &VAR_9[1];
  if (VAR_11->rsp_code == VAR_6)
   FUNC_4(VAR_10, VAR_2);
  else {
   FUNC_4(VAR_10, VAR_1);
   return;
  }
 }

 if (FUNC_6(VAR_15 & VAR_5)) {
  VAR_12 = (char *) &VAR_9[1];
  if (VAR_15 & VAR_4)
   VAR_12 += VAR_9->ext.fr_sns_len;
  VAR_13 = FUNC_1(VAR_9->ext.fr_sns_len,
    (u32) VAR_8);
  FUNC_0(VAR_10->sense_buffer, VAR_12, VAR_13);
 }

 if (FUNC_6(VAR_15 & VAR_3)) {
  VAR_14 = VAR_9->ext.fr_resid;
  FUNC_3(VAR_10, VAR_14);
  if (FUNC_2(VAR_10) - VAR_14 < VAR_10->underflow &&
       !(VAR_15 & VAR_5) &&
       VAR_9->resp.fr_status == VAR_7)
   FUNC_4(VAR_10, VAR_1);
 }
}
