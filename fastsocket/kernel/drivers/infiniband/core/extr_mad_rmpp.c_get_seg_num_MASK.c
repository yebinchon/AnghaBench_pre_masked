
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seg_num; } ;
struct ib_rmpp_mad {TYPE_1__ rmpp_hdr; } ;
struct ib_mad_recv_buf {scalar_t__ mad; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct ib_mad_recv_buf *VAR_0)
{
 struct ib_rmpp_mad *VAR_1;

 VAR_1 = (struct ib_rmpp_mad *) VAR_0->mad;
 return FUNC_0(VAR_1->rmpp_hdr.seg_num);
}
