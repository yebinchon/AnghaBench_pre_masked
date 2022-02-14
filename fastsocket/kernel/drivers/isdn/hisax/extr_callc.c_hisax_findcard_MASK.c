
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct IsdnCardState {int myid; } ;
struct TYPE_2__ {struct IsdnCardState* cs; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct IsdnCardState *
FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_0[VAR_3].cs)
   if (VAR_0[VAR_3].cs->myid == VAR_2)
    return (VAR_0[VAR_3].cs);
 return (struct IsdnCardState *) 0;
}
