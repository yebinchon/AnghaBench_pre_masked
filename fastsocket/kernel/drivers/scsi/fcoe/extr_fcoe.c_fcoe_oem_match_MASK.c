
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fcp_cmnd {int fc_flags; int fc_dl; } ;
struct fc_frame_header {scalar_t__ fh_r_ctl; int fh_rx_id; } ;
struct fc_frame {int dummy; } ;
struct TYPE_3__ {scalar_t__ data_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct fc_frame_header* FUNC_1 (struct fc_frame*) ;
 struct fcp_cmnd* FUNC_2 (struct fc_frame*,int) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_3 (struct fc_frame*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct fc_frame *VAR_4)
{
 struct fc_frame_header *VAR_5 = FUNC_1(VAR_4);
 struct fcp_cmnd *VAR_6;

 if (FUNC_0(FUNC_3(VAR_4)) &&
     (FUNC_3(VAR_4)->data_len > VAR_3))
  return 1;
 else if ((FUNC_3(VAR_4) == ((void*)0)) &&
   (VAR_5->fh_r_ctl == VAR_1) &&
   (FUNC_5(VAR_5->fh_rx_id) == VAR_2)) {
  VAR_6 = FUNC_2(VAR_4, sizeof(*VAR_6));
  if ((VAR_6->fc_flags & VAR_0) &&
      (FUNC_4(VAR_6->fc_dl) > VAR_3))
   return 1;
 }
 return 0;
}
