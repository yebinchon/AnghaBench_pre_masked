
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ib_wc {scalar_t__ slid; int wc_flags; TYPE_1__* qp; int dlid_path_bits; int src_qp; } ;
struct ib_port_attr {scalar_t__ lid; } ;
struct TYPE_18__ {scalar_t__ mgmt_class; scalar_t__ method; scalar_t__ attr_id; int status; } ;
struct ib_mad {TYPE_7__ mad_hdr; } ;
struct TYPE_15__ {int interface_id; int subnet_prefix; } ;
struct TYPE_16__ {TYPE_4__ global; } ;
struct TYPE_13__ {int interface_id; int subnet_prefix; } ;
struct TYPE_14__ {TYPE_2__ global; } ;
struct ib_grh {TYPE_5__ dgid; TYPE_3__ sgid; } ;
struct ib_device {int dummy; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_20__ {TYPE_6__ caps; } ;
struct TYPE_19__ {TYPE_9__* dev; } ;
struct TYPE_12__ {scalar_t__ qp_num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_8__*,int ,struct ib_mad*) ;
 int FUNC_4 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_5 (TYPE_8__*,int,int ,struct ib_wc*,struct ib_grh*,struct ib_mad*,struct ib_mad*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (struct ib_device*,struct ib_mad*) ;
 int FUNC_8 (char*,scalar_t__,int ,...) ;
 int FUNC_9 (struct ib_device*,int ,struct ib_mad*,scalar_t__) ;
 TYPE_8__* FUNC_10 (struct ib_device*) ;

__attribute__((used)) static int FUNC_11(struct ib_device *VAR_24, int VAR_25, u8 VAR_26,
   struct ib_wc *VAR_27, struct ib_grh *VAR_28,
   struct ib_mad *VAR_29, struct ib_mad *VAR_30)
{
 u16 VAR_31, VAR_32 = 0;
 int VAR_33;
 struct ib_port_attr VAR_34;

 if (VAR_27 && VAR_27->qp->qp_num) {
  FUNC_8("received MAD: slid:%d sqpn:%d "
   "dlid_bits:%d dqpn:%d wc_flags:0x%x, cls %x, mtd %x, atr %x\n",
   VAR_27->slid, VAR_27->src_qp,
   VAR_27->dlid_path_bits,
   VAR_27->qp->qp_num,
   VAR_27->wc_flags,
   VAR_29->mad_hdr.mgmt_class, VAR_29->mad_hdr.method,
   FUNC_0(VAR_29->mad_hdr.attr_id));
  if (VAR_27->wc_flags & VAR_17) {
   FUNC_8("sgid_hi:0x%016llx sgid_lo:0x%016llx\n",
     FUNC_1(VAR_28->sgid.global.subnet_prefix),
     FUNC_1(VAR_28->sgid.global.interface_id));
   FUNC_8("dgid_hi:0x%016llx dgid_lo:0x%016llx\n",
     FUNC_1(VAR_28->dgid.global.subnet_prefix),
     FUNC_1(VAR_28->dgid.global.interface_id));
  }
 }

 VAR_31 = VAR_27 ? VAR_27->slid : FUNC_0(VAR_0);

 if (VAR_29->mad_hdr.method == VAR_13 && VAR_31 == 0) {
  FUNC_3(FUNC_10(VAR_24), VAR_26, VAR_29);
  return VAR_6 | VAR_3;
 }

 if (VAR_29->mad_hdr.mgmt_class == VAR_10 ||
     VAR_29->mad_hdr.mgmt_class == VAR_9) {
  if (VAR_29->mad_hdr.method != VAR_11 &&
      VAR_29->mad_hdr.method != VAR_12 &&
      VAR_29->mad_hdr.method != VAR_14)
   return VAR_6;




  if (VAR_29->mad_hdr.attr_id == VAR_16)
   return VAR_6;
 } else if (VAR_29->mad_hdr.mgmt_class == VAR_8 ||
     VAR_29->mad_hdr.mgmt_class == VAR_19 ||
     VAR_29->mad_hdr.mgmt_class == VAR_20 ||
     VAR_29->mad_hdr.mgmt_class == VAR_7) {
  if (VAR_29->mad_hdr.method != VAR_11 &&
      VAR_29->mad_hdr.method != VAR_12)
   return VAR_6;
 } else
  return VAR_6;

 if ((VAR_29->mad_hdr.mgmt_class == VAR_10 ||
      VAR_29->mad_hdr.mgmt_class == VAR_9) &&
     VAR_29->mad_hdr.method == VAR_12 &&
     VAR_29->mad_hdr.attr_id == VAR_15 &&
     !FUNC_4(VAR_24, VAR_26, &VAR_34))
  VAR_32 = VAR_34.lid;

 VAR_33 = FUNC_5(FUNC_10(VAR_24),
      (VAR_25 & VAR_2 ? VAR_22 : 0) |
      (VAR_25 & VAR_1 ? VAR_21 : 0) |
      VAR_23,
      VAR_26, VAR_27, VAR_28, VAR_29, VAR_30);
 if (VAR_33)
  return VAR_4;

 if (!VAR_30->mad_hdr.status) {
  if (!(FUNC_10(VAR_24)->dev->caps.flags & VAR_18))
   FUNC_9(VAR_24, VAR_26, VAR_29, VAR_32);

  if (!FUNC_6(FUNC_10(VAR_24)->dev))
   FUNC_7(VAR_24, VAR_30);
 }


 if (VAR_29->mad_hdr.mgmt_class == VAR_9)
  VAR_30->mad_hdr.status |= FUNC_2(1 << 15);

 if (VAR_29->mad_hdr.method == VAR_14)

  return VAR_6 | VAR_3;

 return VAR_6 | VAR_5;
}
