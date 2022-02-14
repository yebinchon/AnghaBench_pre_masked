
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_tags; } ;
struct request {int dummy; } ;


 struct request* FUNC_0 (int ,int) ;

struct request *FUNC_1(struct request_queue *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->queue_tags, VAR_1);
}
