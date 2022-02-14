
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rmpp_type; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; } ;
struct TYPE_3__ {scalar_t__ seg_count; int timeout_ms; struct ib_rmpp_mad* mad; } ;
struct ib_mad_send_wr_private {scalar_t__ status; scalar_t__ last_ack; scalar_t__ seg_num; scalar_t__ newwin; TYPE_1__ send_buf; scalar_t__ timeout; } ;
struct ib_mad_send_wc {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ib_mad_send_wr_private*) ;

int FUNC_3(struct ib_mad_send_wr_private *VAR_8,
       struct ib_mad_send_wc *VAR_9)
{
 struct ib_rmpp_mad *VAR_10;
 int VAR_11;

 VAR_10 = VAR_8->send_buf.mad;
 if (!(FUNC_0(&VAR_10->rmpp_hdr) &
       VAR_0))
  return VAR_5;

 if (VAR_10->rmpp_hdr.rmpp_type != VAR_1)
  return VAR_3;

 if (VAR_9->status != VAR_7 ||
     VAR_8->status != VAR_7)
  return VAR_4;

 if (!VAR_8->timeout)
  return VAR_4;

 if (VAR_8->last_ack == VAR_8->send_buf.seg_count) {
  VAR_8->timeout =
   FUNC_1(VAR_8->send_buf.timeout_ms);
  return VAR_4;
 }

 if (VAR_8->seg_num == VAR_8->newwin ||
     VAR_8->seg_num == VAR_8->send_buf.seg_count)
  return VAR_4;

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11) {
  VAR_9->status = VAR_6;
  return VAR_4;
 }
 return VAR_2;
}
