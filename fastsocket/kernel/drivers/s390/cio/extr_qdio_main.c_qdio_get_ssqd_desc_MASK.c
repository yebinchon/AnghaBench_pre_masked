
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_ssqd_desc {int dummy; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_4__ {int sch_no; } ;
struct TYPE_3__ {TYPE_2__ schid; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,struct qdio_ssqd_desc*) ;

int FUNC_2(struct ccw_device *VAR_1,
         struct qdio_ssqd_desc *VAR_2)
{

 if (!VAR_1 || !VAR_1->private)
  return -VAR_0;

 FUNC_0("get ssqd:%4x", VAR_1->private->schid.sch_no);
 return FUNC_1(((void*)0), &VAR_1->private->schid, VAR_2);
}
