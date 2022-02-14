
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 scalar_t__ FUNC_1 (struct request*) ;
 struct request* FUNC_2 (struct request_queue*) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_1)
{
 while (1) {
  struct request *VAR_2 = FUNC_2(VAR_1);

  if (!VAR_2)
   break;

  if (FUNC_1(VAR_2) < 0)
   FUNC_0(VAR_2, -VAR_0);
 }
}
