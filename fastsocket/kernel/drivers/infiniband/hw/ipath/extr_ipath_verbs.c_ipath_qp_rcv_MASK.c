
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int qp_type; } ;
struct ipath_qp {size_t state; TYPE_1__ ibqp; } ;
struct ipath_ibdev {int n_pkt_drops; } ;
struct ipath_ib_header {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct ipath_ibdev*,struct ipath_ib_header*,int,void*,int ,struct ipath_qp*) ;
 int FUNC_1 (struct ipath_ibdev*,struct ipath_ib_header*,int,void*,int ,struct ipath_qp*) ;
 int FUNC_2 (struct ipath_ibdev*,struct ipath_ib_header*,int,void*,int ,struct ipath_qp*) ;

__attribute__((used)) static void FUNC_3(struct ipath_ibdev *VAR_3,
    struct ipath_ib_header *VAR_4, int VAR_5,
    void *VAR_6, u32 VAR_7, struct ipath_qp *VAR_8)
{

 if (!(VAR_2[VAR_8->state] & VAR_0)) {
  VAR_3->n_pkt_drops++;
  return;
 }

 switch (VAR_8->ibqp.qp_type) {
 case 130:
 case 132:
  if (VAR_1)
   break;

 case 128:
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  break;

 case 131:
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  break;

 case 129:
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  break;

 default:
  break;
 }
}
