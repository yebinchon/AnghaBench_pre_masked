
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {scalar_t__ cmd_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static int FUNC_2(struct request_queue *VAR_2, struct request *VAR_3)
{
 if (VAR_3->cmd_type == VAR_1)
  return FUNC_0(VAR_2, VAR_3);
 else if (VAR_3->cmd_type == VAR_0)
  return FUNC_1(VAR_3);

 return 0;
}
