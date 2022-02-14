
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mad_rmpp_recv {int lock; int newwin; int seg_num; int last_ack; } ;
struct TYPE_4__ {void* paylen_newwin; void* seg_num; int rmpp_type; } ;
struct TYPE_3__ {int method; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; TYPE_1__ mad_hdr; } ;
struct ib_mad_send_buf {int hdr_len; struct ib_rmpp_mad* mad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct ib_rmpp_mad*,TYPE_1__*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ib_mad_send_buf *VAR_3,
         struct ib_rmpp_mad *VAR_4,
         struct mad_rmpp_recv *VAR_5)
{
 struct ib_rmpp_mad *VAR_6 = VAR_3->mad;
 unsigned long VAR_7;

 FUNC_2(VAR_6, &VAR_4->mad_hdr, VAR_3->hdr_len);

 VAR_6->mad_hdr.method ^= VAR_0;
 VAR_6->rmpp_hdr.rmpp_type = VAR_2;
 FUNC_1(&VAR_6->rmpp_hdr, VAR_1);

 FUNC_3(&VAR_5->lock, VAR_7);
 VAR_5->last_ack = VAR_5->seg_num;
 VAR_6->rmpp_hdr.seg_num = FUNC_0(VAR_5->seg_num);
 VAR_6->rmpp_hdr.paylen_newwin = FUNC_0(VAR_5->newwin);
 FUNC_4(&VAR_5->lock, VAR_7);
}
