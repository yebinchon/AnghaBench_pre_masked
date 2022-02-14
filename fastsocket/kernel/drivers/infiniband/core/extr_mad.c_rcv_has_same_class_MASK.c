
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mad; } ;
struct ib_mad_send_wr_private {TYPE_2__ send_buf; } ;
struct TYPE_10__ {TYPE_4__* mad; } ;
struct ib_mad_recv_wc {TYPE_5__ recv_buf; } ;
struct TYPE_6__ {scalar_t__ mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct TYPE_8__ {scalar_t__ mgmt_class; } ;
struct TYPE_9__ {TYPE_3__ mad_hdr; } ;



__attribute__((used)) static inline int FUNC_0(struct ib_mad_send_wr_private *VAR_0,
         struct ib_mad_recv_wc *VAR_1)
{
 return ((struct ib_mad *)(VAR_0->send_buf.mad))->mad_hdr.mgmt_class ==
  VAR_1->recv_buf.mad->mad_hdr.mgmt_class;
}
