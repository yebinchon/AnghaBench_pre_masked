
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct bsg_job* sg_list; } ;
struct TYPE_3__ {struct bsg_job* sg_list; } ;
struct bsg_job {TYPE_2__ reply_payload; TYPE_1__ request_payload; int dev; } ;


 int FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bsg_job *VAR_0)
{
 FUNC_1(VAR_0->dev);

 FUNC_0(VAR_0->request_payload.sg_list);
 FUNC_0(VAR_0->reply_payload.sg_list);
 FUNC_0(VAR_0);
}
