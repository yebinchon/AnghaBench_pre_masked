
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int cda; scalar_t__ count; scalar_t__ cmd_code; } ;
struct raw3270_request {scalar_t__ rc; scalar_t__ rescnt; TYPE_1__ ccw; int buffer; int list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct raw3270_request *VAR_1)
{
 FUNC_0(!FUNC_2(&VAR_1->list));
 VAR_1->ccw.cmd_code = 0;
 VAR_1->ccw.count = 0;
 VAR_1->ccw.cda = FUNC_1(VAR_1->buffer);
 VAR_1->ccw.flags = VAR_0;
 VAR_1->rescnt = 0;
 VAR_1->rc = 0;
}
