
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct ipath_qp {int dummy; } ;
struct ipath_mcast_qp {int dummy; } ;
struct ipath_mcast {int dummy; } ;
struct ipath_ibdev {int dummy; } ;
struct ib_qp {int device; } ;



 int VAR_0 ;


 int FUNC_0 (struct ipath_ibdev*,struct ipath_mcast*,struct ipath_mcast_qp*) ;
 struct ipath_mcast* FUNC_1 (union ib_gid*) ;
 int FUNC_2 (struct ipath_mcast*) ;
 struct ipath_mcast_qp* FUNC_3 (struct ipath_qp*) ;
 int FUNC_4 (struct ipath_mcast_qp*) ;
 struct ipath_ibdev* FUNC_5 (int ) ;
 struct ipath_qp* FUNC_6 (struct ib_qp*) ;

int FUNC_7(struct ib_qp *VAR_1, union ib_gid *VAR_2, u16 VAR_3)
{
 struct ipath_qp *VAR_4 = FUNC_6(VAR_1);
 struct ipath_ibdev *VAR_5 = FUNC_5(VAR_1->device);
 struct ipath_mcast *VAR_6;
 struct ipath_mcast_qp *VAR_7;
 int VAR_8;





 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 == ((void*)0)) {
  VAR_8 = -129;
  goto bail;
 }
 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6);
  VAR_8 = -129;
  goto bail;
 }
 switch (FUNC_0(VAR_5, VAR_6, VAR_7)) {
 case 128:

  FUNC_4(VAR_7);
  FUNC_2(VAR_6);
  VAR_8 = -VAR_0;
  goto bail;
 case 130:
  FUNC_2(VAR_6);
  break;
 case 129:

  FUNC_4(VAR_7);
  FUNC_2(VAR_6);
  VAR_8 = -129;
  goto bail;
 default:
  break;
 }

 VAR_8 = 0;

bail:
 return VAR_8;
}
