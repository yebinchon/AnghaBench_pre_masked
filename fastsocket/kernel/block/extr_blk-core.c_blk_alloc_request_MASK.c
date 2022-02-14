
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rq_pool; } ;
struct request_queue {TYPE_1__ rq; } ;
struct request {unsigned int cmd_flags; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*,int ) ;
 struct request* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct request*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static struct request *
FUNC_5(struct request_queue *VAR_2, unsigned int VAR_3, gfp_t VAR_4)
{
 struct request *VAR_5 = FUNC_2(VAR_2->rq.rq_pool, VAR_4);

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_2, VAR_5);

 VAR_5->cmd_flags = VAR_3 | VAR_0;

 if ((VAR_3 & VAR_1) &&
     FUNC_4(FUNC_1(VAR_2, VAR_5, VAR_4))) {
  FUNC_3(VAR_5, VAR_2->rq.rq_pool);
  return ((void*)0);
 }

 return VAR_5;
}
