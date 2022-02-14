
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipath_rwq {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_4__ {scalar_t__ size; struct ipath_rwq* wq; } ;
struct TYPE_3__ {scalar_t__ srq; } ;
struct ipath_qp {scalar_t__ r_msn; TYPE_2__ r_rq; TYPE_1__ ibqp; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_3 ;

__be32 FUNC_1(struct ipath_qp *VAR_4)
{
 u32 VAR_5 = VAR_4->r_msn & VAR_2;

 if (VAR_4->ibqp.srq) {




  VAR_5 |= VAR_0 << VAR_1;
 } else {
  u32 VAR_6, VAR_7, VAR_8;
  u32 VAR_9;
  struct ipath_rwq *VAR_10 = VAR_4->r_rq.wq;
  u32 VAR_11;
  u32 VAR_12;


  VAR_11 = VAR_10->head;
  if (VAR_11 >= VAR_4->r_rq.size)
   VAR_11 = 0;
  VAR_12 = VAR_10->tail;
  if (VAR_12 >= VAR_4->r_rq.size)
   VAR_12 = 0;





  VAR_9 = VAR_11 - VAR_12;
  if ((int)VAR_9 < 0)
   VAR_9 += VAR_4->r_rq.size;




  VAR_6 = 0;
  VAR_7 = 31;
  for (;;) {
   VAR_8 = (VAR_6 + VAR_7) / 2;
   if (VAR_3[VAR_8] == VAR_9)
    break;
   if (VAR_3[VAR_8] > VAR_9)
    VAR_7 = VAR_8;
   else if (VAR_6 == VAR_8)
    break;
   else
    VAR_6 = VAR_8;
  }
  VAR_5 |= VAR_8 << VAR_1;
 }
 return FUNC_0(VAR_5);
}
