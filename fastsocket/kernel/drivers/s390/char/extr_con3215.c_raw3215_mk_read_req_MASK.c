
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_req {struct ccw1* ccws; struct raw3215_info* info; int type; } ;
struct raw3215_info {int inbuf; struct raw3215_req* queued_read; } ;
struct ccw1 {int cmd_code; int flags; int count; scalar_t__ cda; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct raw3215_req* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct raw3215_info *VAR_1)
{
 struct raw3215_req *VAR_2;
 struct ccw1 *VAR_3;


 VAR_2 = VAR_1->queued_read;
 if (VAR_2 == ((void*)0)) {

  VAR_2 = FUNC_1();
  VAR_2->type = VAR_0;
  VAR_2->info = VAR_1;
  VAR_1->queued_read = VAR_2;
 }

 VAR_3 = VAR_2->ccws;
 VAR_3->cmd_code = 0x0A;
 VAR_3->flags = 0x20;
 VAR_3->count = 160;
 VAR_3->cda = (__u32) FUNC_0(VAR_1->inbuf);
}
