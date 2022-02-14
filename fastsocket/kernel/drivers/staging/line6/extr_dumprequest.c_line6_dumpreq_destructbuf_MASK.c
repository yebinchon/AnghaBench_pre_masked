
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line6_dump_request {TYPE_1__* reqbufs; } ;
struct TYPE_2__ {int * buffer; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct line6_dump_request *VAR_0, int VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_0->reqbufs[VAR_1].buffer == ((void*)0))
  return;
 FUNC_0(VAR_0->reqbufs[VAR_1].buffer);
 VAR_0->reqbufs[VAR_1].buffer = ((void*)0);
}
