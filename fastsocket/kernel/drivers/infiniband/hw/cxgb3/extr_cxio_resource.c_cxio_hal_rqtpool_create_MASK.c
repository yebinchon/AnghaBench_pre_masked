
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long rqt_base; int rqt_top; } ;
struct cxio_rdev {scalar_t__ rqt_pool; TYPE_1__ rnic_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,unsigned long,int,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

int FUNC_2(struct cxio_rdev *VAR_3)
{
 unsigned long VAR_4;
 VAR_3->rqt_pool = FUNC_1(VAR_1, -1);
 if (VAR_3->rqt_pool)
  for (VAR_4 = VAR_3->rnic_info.rqt_base;
       VAR_4 <= VAR_3->rnic_info.rqt_top - VAR_2 + 1;
       VAR_4 += VAR_2)
   FUNC_0(VAR_3->rqt_pool, VAR_4, VAR_2, -1);
 return VAR_3->rqt_pool ? 0 : -VAR_0;
}
