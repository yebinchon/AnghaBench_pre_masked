
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int ref_count; int mem_lock; int erp_chunks; } ;
struct dasd_ccw_req {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct dasd_ccw_req*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct dasd_ccw_req *VAR_0, struct dasd_device * VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->mem_lock, VAR_2);
 FUNC_1(&VAR_1->erp_chunks, VAR_0);
 FUNC_3(&VAR_1->mem_lock, VAR_2);
 FUNC_0(&VAR_1->ref_count);
}
