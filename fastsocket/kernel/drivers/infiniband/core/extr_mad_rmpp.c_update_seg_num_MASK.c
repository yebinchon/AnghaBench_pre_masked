
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mad_rmpp_recv {scalar_t__ seg_num; struct ib_mad_recv_buf* cur_seg_buf; TYPE_1__* rmpp_wc; } ;
struct list_head {int dummy; } ;
struct ib_mad_recv_buf {int dummy; } ;
struct TYPE_2__ {struct list_head rmpp_list; } ;


 struct ib_mad_recv_buf* FUNC_0 (struct list_head*,struct ib_mad_recv_buf*) ;
 scalar_t__ FUNC_1 (struct ib_mad_recv_buf*) ;

__attribute__((used)) static void FUNC_2(struct mad_rmpp_recv *VAR_0,
      struct ib_mad_recv_buf *VAR_1)
{
 struct list_head *VAR_2 = &VAR_0->rmpp_wc->rmpp_list;

 while (VAR_1 && (FUNC_1(VAR_1) == VAR_0->seg_num + 1)) {
  VAR_0->cur_seg_buf = VAR_1;
  VAR_0->seg_num++;
  VAR_1 = FUNC_0(VAR_2, VAR_1);
 }
}
