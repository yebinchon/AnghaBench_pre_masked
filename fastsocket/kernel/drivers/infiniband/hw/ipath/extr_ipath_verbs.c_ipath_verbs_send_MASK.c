
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ipath_sge_state {int dummy; } ;
struct TYPE_3__ {scalar_t__ qp_type; int device; } ;
struct ipath_qp {TYPE_1__ ibqp; } ;
struct ipath_ib_header {int dummy; } ;
struct ipath_devdata {int ipath_flags; } ;
struct TYPE_4__ {struct ipath_devdata* dd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_qp*,struct ipath_ib_header*,int,struct ipath_sge_state*,int,int,int) ;
 int FUNC_1 (struct ipath_qp*,struct ipath_ib_header*,int,struct ipath_sge_state*,int,int,int) ;
 TYPE_2__* FUNC_2 (int ) ;

int FUNC_3(struct ipath_qp *VAR_2, struct ipath_ib_header *VAR_3,
       u32 VAR_4, struct ipath_sge_state *VAR_5, u32 VAR_6)
{
 struct ipath_devdata *VAR_7 = FUNC_2(VAR_2->ibqp.device)->dd;
 u32 VAR_8;
 int VAR_9;
 u32 VAR_10 = (VAR_6 + 3) >> 2;





 VAR_8 = VAR_4 + VAR_10 + 1;






 if (VAR_2->ibqp.qp_type == VAR_0 ||
     !(VAR_7->ipath_flags & VAR_1))
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_8, VAR_10);
 else
  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_8, VAR_10);

 return VAR_9;
}
