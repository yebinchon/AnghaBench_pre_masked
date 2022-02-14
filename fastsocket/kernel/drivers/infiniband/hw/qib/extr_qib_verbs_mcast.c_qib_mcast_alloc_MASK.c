
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct qib_mcast {scalar_t__ n_attached; int refcount; int wait; int qp_list; union ib_gid mgid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct qib_mcast* FUNC_3 (int,int ) ;

__attribute__((used)) static struct qib_mcast *FUNC_4(union ib_gid *VAR_1)
{
 struct qib_mcast *VAR_2;

 VAR_2 = FUNC_3(sizeof *VAR_2, VAR_0);
 if (!VAR_2)
  goto bail;

 VAR_2->mgid = *VAR_1;
 FUNC_0(&VAR_2->qp_list);
 FUNC_2(&VAR_2->wait);
 FUNC_1(&VAR_2->refcount, 0);
 VAR_2->n_attached = 0;

bail:
 return VAR_2;
}
