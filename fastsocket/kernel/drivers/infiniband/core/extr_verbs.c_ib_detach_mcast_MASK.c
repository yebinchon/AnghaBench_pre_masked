
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int* raw; } ;
typedef int u16 ;
struct ib_qp {scalar_t__ qp_type; int usecnt; TYPE_1__* device; } ;
struct TYPE_2__ {int (* detach_mcast ) (struct ib_qp*,union ib_gid*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_qp*,union ib_gid*,int ) ;

int FUNC_2(struct ib_qp *VAR_3, union ib_gid *VAR_4, u16 VAR_5)
{
 int VAR_6;

 if (!VAR_3->device->detach_mcast)
  return -VAR_1;
 if (VAR_4->raw[0] != 0xff || VAR_3->qp_type != VAR_2)
  return -VAR_0;

 VAR_6 = VAR_3->device->detach_mcast(VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  FUNC_0(&VAR_3->usecnt);
 return VAR_6;
}
