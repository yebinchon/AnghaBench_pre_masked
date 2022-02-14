
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pingpong {int response; int pending_resp; int linestart_resp; scalar_t__ nread_resp; struct connectdata* conn; } ;
struct connectdata {TYPE_2__* data; } ;
struct TYPE_3__ {int buffer; } ;
struct TYPE_4__ {TYPE_1__ state; } ;


 int FUNC_0 () ;
 int VAR_0 ;

void FUNC_1(struct pingpong *VAR_1)
{
  struct connectdata *VAR_2 = VAR_1->conn;
  VAR_1->nread_resp = 0;
  VAR_1->linestart_resp = VAR_2->data->state.buffer;
  VAR_1->pending_resp = VAR_0;
  VAR_1->response = FUNC_0();
}
