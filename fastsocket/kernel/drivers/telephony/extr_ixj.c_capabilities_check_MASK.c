
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phone_capability {scalar_t__ captype; scalar_t__ cap; } ;
struct TYPE_5__ {int caps; TYPE_1__* caplist; } ;
struct TYPE_4__ {scalar_t__ captype; scalar_t__ cap; } ;
typedef TYPE_2__ IXJ ;



__attribute__((used)) static int FUNC_0(IXJ *VAR_0, struct phone_capability *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->caps; VAR_2++) {
  if (VAR_1->captype == VAR_0->caplist[VAR_2].captype
      && VAR_1->cap == VAR_0->caplist[VAR_2].cap) {
   VAR_3 = 1;
   break;
  }
 }
 return VAR_3;
}
