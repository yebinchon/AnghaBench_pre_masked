
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef scalar_t__ u8 ;
struct TYPE_11__ {int ah; scalar_t__ mad; } ;
struct ib_mad_send_wr_private {TYPE_2__ send_buf; } ;
struct TYPE_18__ {TYPE_8__* grh; struct ib_mad* mad; } ;
struct ib_mad_recv_wc {TYPE_9__ recv_buf; TYPE_4__* wc; } ;
struct TYPE_10__ {scalar_t__ port_num; struct ib_device* device; } ;
struct ib_mad_agent_private {TYPE_1__ agent; } ;
struct ib_mad {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_14__ {int raw; } ;
struct TYPE_15__ {TYPE_5__ dgid; int sgid_index; } ;
struct ib_ah_attr {int ah_flags; int src_path_bits; scalar_t__ dlid; TYPE_6__ grh; } ;
struct TYPE_16__ {int raw; } ;
struct TYPE_12__ {int raw; } ;
struct TYPE_17__ {TYPE_7__ sgid; TYPE_3__ dgid; } ;
struct TYPE_13__ {int wc_flags; int dlid_path_bits; scalar_t__ slid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_device*,scalar_t__,int ,union ib_gid*) ;
 scalar_t__ FUNC_1 (struct ib_device*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,struct ib_ah_attr*) ;
 scalar_t__ FUNC_3 (struct ib_mad*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_5(struct ib_mad_agent_private *VAR_2,
       struct ib_mad_send_wr_private *VAR_3,
       struct ib_mad_recv_wc *VAR_4 )
{
 struct ib_ah_attr VAR_5;
 u8 VAR_6, VAR_7;
 union ib_gid VAR_8;
 struct ib_device *VAR_9 = VAR_2->agent.device;
 u8 VAR_10 = VAR_2->agent.port_num;
 u8 VAR_11;

 VAR_6 = FUNC_3((struct ib_mad *)VAR_3->send_buf.mad);
 VAR_7 = FUNC_3(VAR_4->recv_buf.mad);

 if (VAR_6 == VAR_7)

  return 0;

 if (FUNC_2(VAR_3->send_buf.ah, &VAR_5))

  return 0;

 if (!!(VAR_5.ah_flags & VAR_0) !=
     !!(VAR_4->wc->wc_flags & VAR_1))

  return 0;

 if (!VAR_6 && VAR_7) {

  if (!(VAR_5.ah_flags & VAR_0)) {
   if (FUNC_1(VAR_9, VAR_10, &VAR_11))
    return 0;
   return (!VAR_11 || !((VAR_5.src_path_bits ^
        VAR_4->wc->dlid_path_bits) &
       ((1 << VAR_11) - 1)));
  } else {
   if (FUNC_0(VAR_9, VAR_10,
           VAR_5.grh.sgid_index, &VAR_8))
    return 0;
   return !FUNC_4(VAR_8.raw, VAR_4->recv_buf.grh->dgid.raw,
           16);
  }
 }

 if (!(VAR_5.ah_flags & VAR_0))
  return VAR_5.dlid == VAR_4->wc->slid;
 else
  return !FUNC_4(VAR_5.grh.dgid.raw, VAR_4->recv_buf.grh->sgid.raw,
          16);
}
