
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_25__ {int interface_id; int subnet_prefix; } ;
struct TYPE_26__ {TYPE_8__ global; } ;
struct TYPE_14__ {TYPE_9__ dgid; int sgid_index; } ;
struct TYPE_16__ {int ah_flags; int dlid; TYPE_10__ grh; } ;
struct TYPE_15__ {int qp_num; } ;
struct TYPE_18__ {int interface_id; int subnet_prefix; } ;
struct TYPE_19__ {TYPE_1__ global; } ;
struct TYPE_20__ {TYPE_2__ dgid; int sgid_index; } ;
struct TYPE_21__ {int ah_flags; int dlid; scalar_t__ port_num; TYPE_3__ grh; } ;
struct qib_qp {scalar_t__ s_mig_state; scalar_t__ port_num; TYPE_12__ remote_ah_attr; TYPE_11__ ibqp; int s_pkey_index; int s_lock; TYPE_4__ alt_ah_attr; int s_alt_pkey_index; } ;
struct qib_ibport {int gid_prefix; } ;
struct TYPE_22__ {int sgid; int dgid; } ;
struct TYPE_23__ {TYPE_5__ grh; } ;
struct TYPE_24__ {TYPE_6__ l; } ;
struct qib_ib_header {int * lrh; TYPE_7__ u; } ;
typedef int __be64 ;
struct TYPE_17__ {scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_ibport*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_13__* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_ibport*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct qib_ibport*,int ) ;
 int FUNC_6 (struct qib_qp*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct qib_ibport *VAR_5, struct qib_ib_header *VAR_6,
        int VAR_7, struct qib_qp *VAR_8, u32 VAR_9)
{
 __be64 VAR_10;
 unsigned long VAR_11;

 if (VAR_8->s_mig_state == VAR_2 && (VAR_9 & VAR_1)) {
  if (!VAR_7) {
   if (VAR_8->alt_ah_attr.ah_flags & VAR_0)
    goto err;
  } else {
   if (!(VAR_8->alt_ah_attr.ah_flags & VAR_0))
    goto err;
   VAR_10 = FUNC_1(VAR_5, VAR_8->alt_ah_attr.grh.sgid_index);
   if (!FUNC_2(&VAR_6->u.l.grh.dgid, VAR_5->gid_prefix, VAR_10))
    goto err;
   if (!FUNC_2(&VAR_6->u.l.grh.sgid,
       VAR_8->alt_ah_attr.grh.dgid.global.subnet_prefix,
       VAR_8->alt_ah_attr.grh.dgid.global.interface_id))
    goto err;
  }
  if (!FUNC_7((u16)VAR_9,
     FUNC_5(VAR_5, VAR_8->s_alt_pkey_index))) {
   FUNC_4(VAR_5, VAR_4,
          (u16)VAR_9,
          (FUNC_0(VAR_6->lrh[0]) >> 4) & 0xF,
          0, VAR_8->ibqp.qp_num,
          VAR_6->lrh[3], VAR_6->lrh[1]);
   goto err;
  }

  if (FUNC_0(VAR_6->lrh[3]) != VAR_8->alt_ah_attr.dlid ||
      FUNC_3(VAR_5)->port != VAR_8->alt_ah_attr.port_num)
   goto err;
  FUNC_8(&VAR_8->s_lock, VAR_11);
  FUNC_6(VAR_8);
  FUNC_9(&VAR_8->s_lock, VAR_11);
 } else {
  if (!VAR_7) {
   if (VAR_8->remote_ah_attr.ah_flags & VAR_0)
    goto err;
  } else {
   if (!(VAR_8->remote_ah_attr.ah_flags & VAR_0))
    goto err;
   VAR_10 = FUNC_1(VAR_5,
      VAR_8->remote_ah_attr.grh.sgid_index);
   if (!FUNC_2(&VAR_6->u.l.grh.dgid, VAR_5->gid_prefix, VAR_10))
    goto err;
   if (!FUNC_2(&VAR_6->u.l.grh.sgid,
       VAR_8->remote_ah_attr.grh.dgid.global.subnet_prefix,
       VAR_8->remote_ah_attr.grh.dgid.global.interface_id))
    goto err;
  }
  if (!FUNC_7((u16)VAR_9,
     FUNC_5(VAR_5, VAR_8->s_pkey_index))) {
   FUNC_4(VAR_5, VAR_4,
          (u16)VAR_9,
          (FUNC_0(VAR_6->lrh[0]) >> 4) & 0xF,
          0, VAR_8->ibqp.qp_num,
          VAR_6->lrh[3], VAR_6->lrh[1]);
   goto err;
  }

  if (FUNC_0(VAR_6->lrh[3]) != VAR_8->remote_ah_attr.dlid ||
      FUNC_3(VAR_5)->port != VAR_8->port_num)
   goto err;
  if (VAR_8->s_mig_state == VAR_3 &&
      !(VAR_9 & VAR_1))
   VAR_8->s_mig_state = VAR_2;
 }

 return 0;

err:
 return 1;
}
