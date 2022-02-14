
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ qp_type; int device; } ;
struct TYPE_4__ {scalar_t__ dlid; } ;
struct ipath_qp {int s_flags; size_t state; scalar_t__ s_hdrwords; int s_cur_size; int s_cur_sge; int s_hdr; int s_lock; TYPE_3__ ibqp; TYPE_1__ remote_ah_attr; } ;
struct ipath_ibdev {int n_unicast_xmit; TYPE_2__* dd; } ;
struct TYPE_5__ {scalar_t__ ipath_lid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (struct ipath_qp*) ;
 int FUNC_1 (struct ipath_qp*) ;
 int FUNC_2 (struct ipath_qp*) ;
 scalar_t__ FUNC_3 (struct ipath_qp*,struct ipath_ibdev*) ;
 int FUNC_4 (struct ipath_qp*) ;
 scalar_t__ FUNC_5 (struct ipath_qp*,int *,scalar_t__,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct ipath_ibdev* FUNC_8 (int ) ;

void FUNC_9(unsigned long VAR_6)
{
 struct ipath_qp *VAR_7 = (struct ipath_qp *)VAR_6;
 struct ipath_ibdev *VAR_8 = FUNC_8(VAR_7->ibqp.device);
 int (*VAR_9)(struct ipath_qp *VAR_10);
 unsigned long VAR_11;

 if ((VAR_7->ibqp.qp_type == VAR_0 ||
      VAR_7->ibqp.qp_type == VAR_1) &&
     VAR_7->remote_ah_attr.dlid == VAR_8->dd->ipath_lid) {
  FUNC_4(VAR_7);
  goto bail;
 }

 if (VAR_7->ibqp.qp_type == VAR_0)
        VAR_9 = FUNC_0;
 else if (VAR_7->ibqp.qp_type == VAR_1)
        VAR_9 = FUNC_1;
 else
        VAR_9 = FUNC_2;

 FUNC_6(&VAR_7->s_lock, VAR_11);


 if ((VAR_7->s_flags & (VAR_4 | VAR_3)) ||
     !(VAR_5[VAR_7->state] & VAR_2)) {
  FUNC_7(&VAR_7->s_lock, VAR_11);
  goto bail;
 }

 VAR_7->s_flags |= VAR_4;

 FUNC_7(&VAR_7->s_lock, VAR_11);

again:

 if (VAR_7->s_hdrwords != 0) {




  if (FUNC_5(VAR_7, &VAR_7->s_hdr, VAR_7->s_hdrwords,
         VAR_7->s_cur_sge, VAR_7->s_cur_size)) {
   if (FUNC_3(VAR_7, VAR_8))
    goto bail;
  }
  VAR_8->n_unicast_xmit++;

  VAR_7->s_hdrwords = 0;
 }

 if (VAR_9(VAR_7))
  goto again;

bail:;
}
