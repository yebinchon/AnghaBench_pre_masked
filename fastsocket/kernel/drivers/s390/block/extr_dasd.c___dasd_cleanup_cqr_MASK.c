
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct dasd_ccw_req {TYPE_3__* block; scalar_t__ callback_data; } ;
struct TYPE_6__ {TYPE_2__* base; } ;
struct TYPE_5__ {TYPE_1__* discipline; } ;
struct TYPE_4__ {int (* free_cp ) (struct dasd_ccw_req*,struct request*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int) ;
 int FUNC_1 (TYPE_3__*,struct dasd_ccw_req*,struct request*) ;
 int FUNC_2 (struct dasd_ccw_req*,struct request*) ;

__attribute__((used)) static void FUNC_3(struct dasd_ccw_req *VAR_1)
{
 struct request *VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 VAR_2 = (struct request *) VAR_1->callback_data;
 FUNC_1(VAR_1->block, VAR_1, VAR_2);
 VAR_3 = VAR_1->block->base->discipline->free_cp(VAR_1, VAR_2);
 if (VAR_3 <= 0)
  VAR_4 = VAR_3 ? VAR_3 : -VAR_0;
 FUNC_0(VAR_2, VAR_4);
}
