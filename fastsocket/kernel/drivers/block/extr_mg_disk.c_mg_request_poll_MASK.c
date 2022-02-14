
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {struct mg_host* queuedata; } ;
struct mg_host {TYPE_1__* req; } ;
struct TYPE_5__ {scalar_t__ cmd_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct mg_host*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct request_queue *VAR_3)
{
 struct mg_host *VAR_4 = VAR_3->queuedata;

 while (1) {
  if (!VAR_4->req) {
   VAR_4->req = FUNC_0(VAR_3);
   if (!VAR_4->req)
    break;
  }

  if (FUNC_5(VAR_4->req->cmd_type != VAR_2)) {
   FUNC_1(VAR_4, -VAR_0);
   continue;
  }

  if (FUNC_4(VAR_4->req) == VAR_1)
   FUNC_2(VAR_4->req);
  else
   FUNC_3(VAR_4->req);
 }
}
