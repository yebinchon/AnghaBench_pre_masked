
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_rq {int dummy; } ;


 int FUNC_0 (struct vnic_rq*) ;
 scalar_t__ FUNC_1 (struct vnic_rq*) ;

__attribute__((used)) static inline int FUNC_2(struct vnic_rq *VAR_0,
 int (*VAR_1)(struct vnic_rq *VAR_2))
{
 int VAR_3;

 while (FUNC_1(VAR_0) > 0) {

  VAR_3 = (*VAR_1)(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
