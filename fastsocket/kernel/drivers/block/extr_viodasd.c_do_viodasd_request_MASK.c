
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {scalar_t__ cmd_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct request* FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_4)
{
 struct request *VAR_5;






 while (VAR_3 < VAR_2) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 == ((void*)0))
   return;

  if (VAR_5->cmd_type != VAR_1) {
   FUNC_3(VAR_5, -VAR_0, FUNC_1(VAR_5));
   continue;
  }

  if (FUNC_2(VAR_5) != 0)
   FUNC_3(VAR_5, -VAR_0, FUNC_1(VAR_5));
 }
}
