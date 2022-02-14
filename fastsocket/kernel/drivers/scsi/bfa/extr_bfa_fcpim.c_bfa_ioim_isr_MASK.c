
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct bfi_msg_s {int dummy; } ;
struct bfi_ioim_rsp_s {int io_status; int reuse_io_tag; int abort_tag; int io_tag; } ;
struct bfa_s {int dummy; } ;
struct bfa_ioim_s {scalar_t__ iotag; int abort_tag; int itnim; int bfa; TYPE_1__* iosp; } ;
struct bfa_fcpim_s {int dummy; } ;
typedef enum bfa_ioim_event { ____Placeholder_bfa_ioim_event } bfa_ioim_event ;
struct TYPE_2__ {struct bfi_msg_s comp_rspmsg; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_ioim_s* FUNC_1 (struct bfa_fcpim_s*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct bfa_ioim_s*,int ) ;
 int FUNC_5 (struct bfa_ioim_s*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void
FUNC_8(struct bfa_s *VAR_16, struct bfi_msg_s *VAR_17)
{
 struct bfa_fcpim_s *VAR_18 = FUNC_0(VAR_16);
 struct bfi_ioim_rsp_s *VAR_19 = (struct bfi_ioim_rsp_s *) VAR_17;
 struct bfa_ioim_s *VAR_20;
 u16 VAR_21;
 enum bfa_ioim_event VAR_22 = VAR_2;

 VAR_21 = FUNC_3(VAR_19->io_tag);

 VAR_20 = FUNC_1(VAR_18, VAR_21);
 FUNC_2(VAR_20->iotag != VAR_21);

 FUNC_7(VAR_20->bfa, VAR_20->iotag);
 FUNC_7(VAR_20->bfa, VAR_19->io_status);
 FUNC_7(VAR_20->bfa, VAR_19->reuse_io_tag);

 if (FUNC_4(VAR_20, VAR_7))
  VAR_20->iosp->comp_rspmsg = *VAR_17;

 switch (VAR_19->io_status) {
 case 133:
  FUNC_6(VAR_20->itnim, VAR_14);
  if (VAR_19->reuse_io_tag == 0)
   VAR_22 = VAR_4;
  else
   VAR_22 = VAR_2;
  break;

 case 129:
  FUNC_6(VAR_20->itnim, VAR_15);
 case 135:
  VAR_19->io_status = 135;
  FUNC_6(VAR_20->itnim, VAR_13);
  if (VAR_19->reuse_io_tag == 0)
   VAR_22 = VAR_4;
  else
   VAR_22 = VAR_2;
  break;

 case 132:
  FUNC_6(VAR_20->itnim, VAR_9);
  FUNC_2(!VAR_19->reuse_io_tag);
  VAR_22 = VAR_2;
  break;

 case 130:
  FUNC_6(VAR_20->itnim, VAR_11);
  FUNC_2(VAR_19->reuse_io_tag != 0);
  VAR_22 = VAR_6;
  break;

 case 131:
  FUNC_6(VAR_20->itnim, VAR_10);
  VAR_22 = VAR_5;
  break;

 case 134:
  FUNC_6(VAR_20->itnim, VAR_8);
  if (VAR_19->abort_tag != VAR_20->abort_tag) {
   FUNC_7(VAR_20->bfa, VAR_19->abort_tag);
   FUNC_7(VAR_20->bfa, VAR_20->abort_tag);
   return;
  }

  if (VAR_19->reuse_io_tag)
   VAR_22 = VAR_0;
  else
   VAR_22 = VAR_1;
  break;

 case 128:
  FUNC_6(VAR_20->itnim, VAR_12);
  VAR_22 = VAR_3;
  break;

 default:
  FUNC_2(1);
 }

 FUNC_5(VAR_20, VAR_22);
}
