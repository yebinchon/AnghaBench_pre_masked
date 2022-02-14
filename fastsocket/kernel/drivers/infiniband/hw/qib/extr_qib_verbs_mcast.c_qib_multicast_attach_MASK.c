
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct qib_qp {scalar_t__ state; int port_num; } ;
struct qib_mcast_qp {int dummy; } ;
struct qib_mcast {int dummy; } ;
struct qib_ibport {int dummy; } ;
struct qib_ibdev {int dummy; } ;
struct ib_qp {int qp_num; int device; } ;



 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qib_ibdev*,struct qib_ibport*,struct qib_mcast*,struct qib_mcast_qp*) ;
 struct qib_mcast* FUNC_1 (union ib_gid*) ;
 int FUNC_2 (struct qib_mcast*) ;
 struct qib_mcast_qp* FUNC_3 (struct qib_qp*) ;
 int FUNC_4 (struct qib_mcast_qp*) ;
 struct qib_ibdev* FUNC_5 (int ) ;
 struct qib_ibport* FUNC_6 (int ,int ) ;
 struct qib_qp* FUNC_7 (struct ib_qp*) ;

int FUNC_8(struct ib_qp *VAR_2, union ib_gid *VAR_3, u16 VAR_4)
{
 struct qib_qp *VAR_5 = FUNC_7(VAR_2);
 struct qib_ibdev *VAR_6 = FUNC_5(VAR_2->device);
 struct qib_ibport *VAR_7;
 struct qib_mcast *VAR_8;
 struct qib_mcast_qp *VAR_9;
 int VAR_10;

 if (VAR_2->qp_num <= 1 || VAR_5->state == VAR_1) {
  VAR_10 = -VAR_0;
  goto bail;
 }





 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 == ((void*)0)) {
  VAR_10 = -129;
  goto bail;
 }
 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_8);
  VAR_10 = -129;
  goto bail;
 }
 VAR_7 = FUNC_6(VAR_2->device, VAR_5->port_num);
 switch (FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9)) {
 case 128:

  FUNC_4(VAR_9);
  FUNC_2(VAR_8);
  break;

 case 130:
  FUNC_2(VAR_8);
  break;

 case 129:

  FUNC_4(VAR_9);
  FUNC_2(VAR_8);
  VAR_10 = -129;
  goto bail;

 default:
  break;
 }

 VAR_10 = 0;

bail:
 return VAR_10;
}
