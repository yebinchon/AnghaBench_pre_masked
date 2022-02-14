
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ method; scalar_t__ mgmt_class; int status; } ;
struct TYPE_11__ {TYPE_4__ mad_hdr; } ;
struct TYPE_12__ {TYPE_5__ mad; } ;
struct TYPE_7__ {int * grh; TYPE_5__* mad; } ;
struct TYPE_8__ {TYPE_1__ recv_buf; int * wc; } ;
struct TYPE_9__ {TYPE_2__ recv_wc; int wc; } ;
struct ib_mad_private {TYPE_6__ mad; int grh; TYPE_3__ header; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mad_private*,struct ib_mad_private*,int) ;

__attribute__((used)) static bool FUNC_2(struct ib_mad_private *VAR_6,
        struct ib_mad_private *VAR_7)
{
 if (VAR_6->mad.mad.mad_hdr.method == VAR_2 ||
     VAR_6->mad.mad.mad_hdr.method == VAR_4) {
  FUNC_1(VAR_7, VAR_6, sizeof *VAR_7);
  VAR_7->header.recv_wc.wc = &VAR_7->header.wc;
  VAR_7->header.recv_wc.recv_buf.mad = &VAR_7->mad.mad;
  VAR_7->header.recv_wc.recv_buf.grh = &VAR_7->grh;
  VAR_7->mad.mad.mad_hdr.method = VAR_3;
  VAR_7->mad.mad.mad_hdr.status =
   FUNC_0(VAR_1);
  if (VAR_6->mad.mad.mad_hdr.mgmt_class == VAR_0)
   VAR_7->mad.mad.mad_hdr.status |= VAR_5;

  return 1;
 } else {
  return 0;
 }
}
