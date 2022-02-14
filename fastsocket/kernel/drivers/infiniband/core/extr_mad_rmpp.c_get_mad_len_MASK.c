
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mad_rmpp_recv {int seg_num; TYPE_2__* cur_seg_buf; } ;
struct TYPE_4__ {int paylen_newwin; } ;
struct TYPE_6__ {int mgmt_class; } ;
struct ib_rmpp_mad {TYPE_1__ rmpp_hdr; TYPE_3__ mad_hdr; } ;
struct TYPE_5__ {scalar_t__ mad; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct mad_rmpp_recv *VAR_1)
{
 struct ib_rmpp_mad *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_2 = (struct ib_rmpp_mad *)VAR_1->cur_seg_buf->mad;

 VAR_3 = FUNC_1(VAR_2->mad_hdr.mgmt_class);
 VAR_4 = sizeof(struct ib_rmpp_mad) - VAR_3;
 VAR_5 = VAR_0 - FUNC_0(VAR_2->rmpp_hdr.paylen_newwin);
 if (VAR_5 > VAR_0 || VAR_5 < 0)
  VAR_5 = 0;

 return VAR_3 + VAR_1->seg_num * VAR_4 - VAR_5;
}
