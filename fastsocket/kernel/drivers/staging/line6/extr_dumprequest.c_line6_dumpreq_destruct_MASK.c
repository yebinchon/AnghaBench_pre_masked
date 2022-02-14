
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line6_dump_request {int ok; int timer; TYPE_1__* reqbufs; } ;
struct TYPE_2__ {int * buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct line6_dump_request*,int ) ;

void FUNC_2(struct line6_dump_request *VAR_0)
{
 if (VAR_0->reqbufs[0].buffer == ((void*)0))
  return;
 FUNC_1(VAR_0, 0);
 VAR_0->ok = 1;
 FUNC_0(&VAR_0->timer);
}
