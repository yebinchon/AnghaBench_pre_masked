
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct SingleRequest {TYPE_2__* writer_stack; } ;
struct Curl_easy {struct SingleRequest req; } ;
struct TYPE_6__ {TYPE_1__* handler; struct TYPE_6__* downstream; } ;
typedef TYPE_2__ contenc_writer ;
struct TYPE_5__ {int (* close_writer ) (struct connectdata*,TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct connectdata*,TYPE_2__*) ;

void FUNC_2(struct connectdata *VAR_0)
{
  struct Curl_easy *VAR_1 = VAR_0->data;
  struct SingleRequest *VAR_2 = &VAR_1->req;
  contenc_writer *VAR_3 = VAR_2->writer_stack;

  while(VAR_3) {
    VAR_2->writer_stack = VAR_3->downstream;
    VAR_3->handler->close_writer(VAR_0, VAR_3);
    FUNC_0(VAR_3);
    VAR_3 = VAR_2->writer_stack;
  }
}
