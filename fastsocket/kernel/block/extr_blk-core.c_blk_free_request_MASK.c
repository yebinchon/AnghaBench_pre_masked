
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rq_pool; } ;
struct request_queue {TYPE_1__ rq; } ;
struct request {int cmd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct request_queue *VAR_1, struct request *VAR_2)
{
 if (VAR_2->cmd_flags & VAR_0)
  FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_2, VAR_1->rq.rq_pool);
}
