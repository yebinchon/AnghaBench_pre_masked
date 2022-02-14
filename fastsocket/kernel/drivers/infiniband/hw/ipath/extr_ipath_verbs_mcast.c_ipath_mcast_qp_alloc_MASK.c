
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_qp {int refcount; } ;
struct ipath_mcast_qp {struct ipath_qp* qp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ipath_mcast_qp* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ipath_mcast_qp *FUNC_2(struct ipath_qp *VAR_1)
{
 struct ipath_mcast_qp *VAR_2;

 VAR_2 = FUNC_1(sizeof *VAR_2, VAR_0);
 if (!VAR_2)
  goto bail;

 VAR_2->qp = VAR_1;
 FUNC_0(&VAR_1->refcount);

bail:
 return VAR_2;
}
